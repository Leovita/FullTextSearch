#ifndef org_apache_lucene_search_DoubleValues_H
#define org_apache_lucene_search_DoubleValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DoubleValues;
      }
    }
  }
}
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
      namespace search {

        class DoubleValues : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_advanceExact_ae22d3a856ad56f1,
            mid_doubleValue_32caabaad86c508b,
            mid_withDefault_4e4d907e2501fff9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DoubleValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DoubleValues(const DoubleValues& obj) : ::java::lang::Object(obj) {}

          static DoubleValues *EMPTY;

          DoubleValues();

          jboolean advanceExact(jint) const;
          jdouble doubleValue() const;
          static DoubleValues withDefault(const DoubleValues &, jdouble);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(DoubleValues);
        extern PyTypeObject *PY_TYPE(DoubleValues);

        class t_DoubleValues {
        public:
          PyObject_HEAD
          DoubleValues object;
          static PyObject *wrap_Object(const DoubleValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
