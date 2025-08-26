#ifndef org_apache_lucene_analysis_compound_hyphenation_CharVector_H
#define org_apache_lucene_analysis_compound_hyphenation_CharVector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            class CharVector;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Cloneable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {

            class CharVector : public ::java::lang::Object {
             public:
              enum {
                mid_init$_e7bdbe105ce1bafb,
                mid_init$_ae4452529cb9c0dd,
                mid_init$_8226bd0b0fc13dba,
                mid_init$_495b1505e3aef671,
                mid_alloc_a3904e10f5bb9437,
                mid_capacity_bd89ce15dad49192,
                mid_clear_e7bdbe105ce1bafb,
                mid_clone_4273d209d1e48d18,
                mid_get_bc94dd98365f92fb,
                mid_getArray_e5926045e1917c62,
                mid_length_bd89ce15dad49192,
                mid_put_53f645c50443c1f0,
                mid_trimToSize_e7bdbe105ce1bafb,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CharVector(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CharVector(const CharVector& obj) : ::java::lang::Object(obj) {}

              CharVector();
              CharVector(const JArray< jchar > &);
              CharVector(jint);
              CharVector(const JArray< jchar > &, jint);

              jint alloc(jint) const;
              jint capacity() const;
              void clear() const;
              CharVector clone() const;
              jchar get(jint) const;
              JArray< jchar > getArray() const;
              jint length() const;
              void put(jint, jchar) const;
              void trimToSize() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            extern PyType_Def PY_TYPE_DEF(CharVector);
            extern PyTypeObject *PY_TYPE(CharVector);

            class t_CharVector {
            public:
              PyObject_HEAD
              CharVector object;
              static PyObject *wrap_Object(const CharVector&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
