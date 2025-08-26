#ifndef org_apache_lucene_backward_codecs_compressing_MatchingReaders_H
#define org_apache_lucene_backward_codecs_compressing_MatchingReaders_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace compressing {

          class MatchingReaders : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b7f5b82c43646887,
              max_mid
            };

            enum {
              fid_matchingReaders,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MatchingReaders(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MatchingReaders(const MatchingReaders& obj) : ::java::lang::Object(obj) {}

            JArray< jboolean > _get_matchingReaders() const;

            MatchingReaders(const ::org::apache::lucene::index::MergeState &);
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
      namespace backward_codecs {
        namespace compressing {
          extern PyType_Def PY_TYPE_DEF(MatchingReaders);
          extern PyTypeObject *PY_TYPE(MatchingReaders);

          class t_MatchingReaders {
          public:
            PyObject_HEAD
            MatchingReaders object;
            static PyObject *wrap_Object(const MatchingReaders&);
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
