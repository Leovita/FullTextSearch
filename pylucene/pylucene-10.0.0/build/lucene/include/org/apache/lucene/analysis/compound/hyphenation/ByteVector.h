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
                mid_init$_3720c61b0679eb3e,
                mid_init$_3ce1e597fb62ac79,
                mid_init$_540b2b23d51b1efd,
                mid_init$_3f6ea74fc0096aaa,
                mid_alloc_3c9bba330f083871,
                mid_capacity_20fbf7565993c3d7,
                mid_get_3b30672d0bff9ebb,
                mid_getArray_5560da88fc44aa82,
                mid_length_20fbf7565993c3d7,
                mid_put_d5c089c49f1419cd,
                mid_trimToSize_3720c61b0679eb3e,
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
