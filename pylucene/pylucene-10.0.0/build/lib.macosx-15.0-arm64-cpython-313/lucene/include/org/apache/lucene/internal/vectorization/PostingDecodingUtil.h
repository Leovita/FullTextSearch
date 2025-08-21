#ifndef org_apache_lucene_internal_vectorization_PostingDecodingUtil_H
#define org_apache_lucene_internal_vectorization_PostingDecodingUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexInput;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace vectorization {

          class PostingDecodingUtil : public ::java::lang::Object {
           public:
            enum {
              mid_splitLongs_a84fd328216c1672,
              max_mid
            };

            enum {
              fid_in,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PostingDecodingUtil(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PostingDecodingUtil(const PostingDecodingUtil& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::store::IndexInput _get_in() const;

            void splitLongs(jint, const JArray< jlong > &, jint, jint, jlong, const JArray< jlong > &, jint, jlong) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace vectorization {
          extern PyType_Def PY_TYPE_DEF(PostingDecodingUtil);
          extern PyTypeObject *PY_TYPE(PostingDecodingUtil);

          class t_PostingDecodingUtil {
          public:
            PyObject_HEAD
            PostingDecodingUtil object;
            static PyObject *wrap_Object(const PostingDecodingUtil&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
