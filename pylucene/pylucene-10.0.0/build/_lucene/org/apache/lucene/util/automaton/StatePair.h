#ifndef org_apache_lucene_util_automaton_StatePair_H
#define org_apache_lucene_util_automaton_StatePair_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class StatePair : public ::java::lang::Object {
           public:
            enum {
              mid_init$_645c25455f5b9b1c,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            enum {
              fid_s1,
              fid_s2,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StatePair(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StatePair(const StatePair& obj) : ::java::lang::Object(obj) {}

            jint _get_s1() const;
            jint _get_s2() const;

            StatePair(jint, jint);

            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(StatePair);
          extern PyTypeObject *PY_TYPE(StatePair);

          class t_StatePair {
          public:
            PyObject_HEAD
            StatePair object;
            static PyObject *wrap_Object(const StatePair&);
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
