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
            mid_init$_e7bdbe105ce1bafb,
            mid_advanceExact_a8281eb3b9d9672d,
            mid_getValueCount_0f176418e3e16541,
            mid_nextValue_6fb37e123fed7a1f,
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
