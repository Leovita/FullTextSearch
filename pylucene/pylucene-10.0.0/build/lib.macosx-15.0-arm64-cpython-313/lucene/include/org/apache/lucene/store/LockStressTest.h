#ifndef org_apache_lucene_store_LockStressTest_H
#define org_apache_lucene_store_LockStressTest_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Exception;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class LockStressTest : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_main_ce41e621b30e91b1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LockStressTest(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LockStressTest(const LockStressTest& obj) : ::java::lang::Object(obj) {}

          LockStressTest();

          static void main(const JArray< ::java::lang::String > &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(LockStressTest);
        extern PyTypeObject *PY_TYPE(LockStressTest);

        class t_LockStressTest {
        public:
          PyObject_HEAD
          LockStressTest object;
          static PyObject *wrap_Object(const LockStressTest&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
