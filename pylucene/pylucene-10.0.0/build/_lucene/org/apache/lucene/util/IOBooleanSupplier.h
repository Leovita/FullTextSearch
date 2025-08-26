#ifndef org_apache_lucene_util_IOBooleanSupplier_H
#define org_apache_lucene_util_IOBooleanSupplier_H

#include "java/lang/Object.h"

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
      namespace util {

        class IOBooleanSupplier : public ::java::lang::Object {
         public:
          enum {
            mid_get_9aa4f33e82ea333f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IOBooleanSupplier(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IOBooleanSupplier(const IOBooleanSupplier& obj) : ::java::lang::Object(obj) {}

          jboolean get() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(IOBooleanSupplier);
        extern PyTypeObject *PY_TYPE(IOBooleanSupplier);

        class t_IOBooleanSupplier {
        public:
          PyObject_HEAD
          IOBooleanSupplier object;
          static PyObject *wrap_Object(const IOBooleanSupplier&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
