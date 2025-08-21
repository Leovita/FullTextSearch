#ifndef org_apache_lucene_search_LongValues_H
#define org_apache_lucene_search_LongValues_H

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
      namespace search {

        class LongValues : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_advanceExact_ae22d3a856ad56f1,
            mid_longValue_16939d9d0a9a9721,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongValues(const LongValues& obj) : ::java::lang::Object(obj) {}

          LongValues();

          jboolean advanceExact(jint) const;
          jlong longValue() const;
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
        extern PyType_Def PY_TYPE_DEF(LongValues);
        extern PyTypeObject *PY_TYPE(LongValues);

        class t_LongValues {
        public:
          PyObject_HEAD
          LongValues object;
          static PyObject *wrap_Object(const LongValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
