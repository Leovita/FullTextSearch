#ifndef org_apache_lucene_codecs_lucene95_HasIndexSlice_H
#define org_apache_lucene_codecs_lucene95_HasIndexSlice_H

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
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene95 {

          class HasIndexSlice : public ::java::lang::Object {
           public:
            enum {
              mid_getSlice_69ff96f993716366,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HasIndexSlice(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HasIndexSlice(const HasIndexSlice& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::store::IndexInput getSlice() const;
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
        namespace lucene95 {
          extern PyType_Def PY_TYPE_DEF(HasIndexSlice);
          extern PyTypeObject *PY_TYPE(HasIndexSlice);

          class t_HasIndexSlice {
          public:
            PyObject_HEAD
            HasIndexSlice object;
            static PyObject *wrap_Object(const HasIndexSlice&);
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
