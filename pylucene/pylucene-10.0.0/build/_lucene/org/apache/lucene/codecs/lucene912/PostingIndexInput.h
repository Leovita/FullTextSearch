#ifndef org_apache_lucene_codecs_lucene912_PostingIndexInput_H
#define org_apache_lucene_codecs_lucene912_PostingIndexInput_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexInput;
      }
      namespace codecs {
        namespace lucene912 {
          class ForUtil;
          class ForDeltaUtil;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene912 {

          class PostingIndexInput : public ::java::lang::Object {
           public:
            enum {
              mid_init$_72a00e25ec5af187,
              mid_decode_80fd146058a1e556,
              mid_decodeAndPrefixSum_8ab503a3cf9d3e17,
              max_mid
            };

            enum {
              fid_forDeltaUtil,
              fid_forUtil,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PostingIndexInput(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PostingIndexInput(const PostingIndexInput& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::codecs::lucene912::ForDeltaUtil _get_forDeltaUtil() const;
            ::org::apache::lucene::codecs::lucene912::ForUtil _get_forUtil() const;

            PostingIndexInput(const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::codecs::lucene912::ForUtil &, const ::org::apache::lucene::codecs::lucene912::ForDeltaUtil &);

            void decode(jint, const JArray< jlong > &) const;
            void decodeAndPrefixSum(jint, jlong, const JArray< jlong > &) const;
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
      namespace codecs {
        namespace lucene912 {
          extern PyType_Def PY_TYPE_DEF(PostingIndexInput);
          extern PyTypeObject *PY_TYPE(PostingIndexInput);

          class t_PostingIndexInput {
          public:
            PyObject_HEAD
            PostingIndexInput object;
            static PyObject *wrap_Object(const PostingIndexInput&);
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
