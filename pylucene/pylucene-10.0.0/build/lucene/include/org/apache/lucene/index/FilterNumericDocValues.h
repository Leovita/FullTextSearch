#ifndef org_apache_lucene_index_FilterNumericDocValues_H
#define org_apache_lucene_index_FilterNumericDocValues_H

#include "org/apache/lucene/index/NumericDocValues.h"

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
      namespace index {

        class FilterNumericDocValues : public ::org::apache::lucene::index::NumericDocValues {
         public:
          enum {
            mid_advance_a3904e10f5bb9437,
            mid_advanceExact_a8281eb3b9d9672d,
            mid_cost_0f176418e3e16541,
            mid_docID_bd89ce15dad49192,
            mid_longValue_0f176418e3e16541,
            mid_nextDoc_bd89ce15dad49192,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterNumericDocValues(jobject obj) : ::org::apache::lucene::index::NumericDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterNumericDocValues(const FilterNumericDocValues& obj) : ::org::apache::lucene::index::NumericDocValues(obj) {}

          jint advance(jint) const;
          jboolean advanceExact(jint) const;
          jlong cost() const;
          jint docID() const;
          jlong longValue() const;
          jint nextDoc() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(FilterNumericDocValues);
        extern PyTypeObject *PY_TYPE(FilterNumericDocValues);

        class t_FilterNumericDocValues {
        public:
          PyObject_HEAD
          FilterNumericDocValues object;
          static PyObject *wrap_Object(const FilterNumericDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
