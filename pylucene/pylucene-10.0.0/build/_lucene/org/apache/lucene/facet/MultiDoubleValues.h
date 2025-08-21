#ifndef org_apache_lucene_facet_MultiDoubleValues_H
#define org_apache_lucene_facet_MultiDoubleValues_H

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
      namespace facet {

        class MultiDoubleValues : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_advanceExact_ae22d3a856ad56f1,
            mid_getValueCount_16939d9d0a9a9721,
            mid_nextValue_32caabaad86c508b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiDoubleValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiDoubleValues(const MultiDoubleValues& obj) : ::java::lang::Object(obj) {}

          MultiDoubleValues();

          jboolean advanceExact(jint) const;
          jlong getValueCount() const;
          jdouble nextValue() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(MultiDoubleValues);
        extern PyTypeObject *PY_TYPE(MultiDoubleValues);

        class t_MultiDoubleValues {
        public:
          PyObject_HEAD
          MultiDoubleValues object;
          static PyObject *wrap_Object(const MultiDoubleValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
