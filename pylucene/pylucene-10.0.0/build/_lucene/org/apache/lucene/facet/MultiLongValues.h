#ifndef org_apache_lucene_facet_MultiLongValues_H
#define org_apache_lucene_facet_MultiLongValues_H

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

        class MultiLongValues : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_advanceExact_a8281eb3b9d9672d,
            mid_getValueCount_0f176418e3e16541,
            mid_nextValue_0f176418e3e16541,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiLongValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiLongValues(const MultiLongValues& obj) : ::java::lang::Object(obj) {}

          MultiLongValues();

          jboolean advanceExact(jint) const;
          jlong getValueCount() const;
          jlong nextValue() const;
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
        extern PyType_Def PY_TYPE_DEF(MultiLongValues);
        extern PyTypeObject *PY_TYPE(MultiLongValues);

        class t_MultiLongValues {
        public:
          PyObject_HEAD
          MultiLongValues object;
          static PyObject *wrap_Object(const MultiLongValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
