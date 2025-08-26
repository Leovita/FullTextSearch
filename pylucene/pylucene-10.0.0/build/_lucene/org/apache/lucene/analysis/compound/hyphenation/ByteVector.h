#ifndef org_apache_lucene_analysis_compound_hyphenation_ByteVector_H
#define org_apache_lucene_analysis_compound_hyphenation_ByteVector_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
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

            class ByteVector : public ::java::lang::Object {
             public:
              enum {
                mid_init$_e7bdbe105ce1bafb,
                mid_init$_a4d4f283481182e8,
                mid_init$_8226bd0b0fc13dba,
                mid_init$_31e2e931f3bb1000,
                mid_alloc_a3904e10f5bb9437,
                mid_capacity_bd89ce15dad49192,
                mid_get_9e902c8fd52d5208,
                mid_getArray_44e916dc40fc04cb,
                mid_length_bd89ce15dad49192,
                mid_put_db535d0d1edecac5,
                mid_trimToSize_e7bdbe105ce1bafb,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ByteVector(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ByteVector(const ByteVector& obj) : ::java::lang::Object(obj) {}

              ByteVector();
              ByteVector(const JArray< jbyte > &);
              ByteVector(jint);
              ByteVector(const JArray< jbyte > &, jint);

              jint alloc(jint) const;
              jint capacity() const;
              jbyte get(jint) const;
              JArray< jbyte > getArray() const;
              jint length() const;
              void put(jint, jbyte) const;
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
            extern PyType_Def PY_TYPE_DEF(ByteVector);
            extern PyTypeObject *PY_TYPE(ByteVector);

            class t_ByteVector {
            public:
              PyObject_HEAD
              ByteVector object;
              static PyObject *wrap_Object(const ByteVector&);
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
