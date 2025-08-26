#ifndef org_apache_lucene_util_automaton_ByteRunnable_H
#define org_apache_lucene_util_automaton_ByteRunnable_H

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
      namespace util {
        namespace automaton {

          class ByteRunnable : public ::java::lang::Object {
           public:
            enum {
              mid_getSize_bd89ce15dad49192,
              mid_isAccept_a8281eb3b9d9672d,
              mid_run_8d796a751cbcaf8d,
              mid_step_7f27cf81a85a97e9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ByteRunnable(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ByteRunnable(const ByteRunnable& obj) : ::java::lang::Object(obj) {}

            jint getSize() const;
            jboolean isAccept(jint) const;
            jboolean run(const JArray< jbyte > &, jint, jint) const;
            jint step(jint, jint) const;
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
      namespace util {
        namespace automaton {
          extern PyType_Def PY_TYPE_DEF(ByteRunnable);
          extern PyTypeObject *PY_TYPE(ByteRunnable);

          class t_ByteRunnable {
          public:
            PyObject_HEAD
            ByteRunnable object;
            static PyObject *wrap_Object(const ByteRunnable&);
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
