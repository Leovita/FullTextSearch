#ifndef org_apache_lucene_index_FilterSortedNumericDocValues_H
#define org_apache_lucene_index_FilterSortedNumericDocValues_H

#include "org/apache/lucene/index/SortedNumericDocValues.h"

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

        class FilterSortedNumericDocValues : public ::org::apache::lucene::index::SortedNumericDocValues {
         public:
          enum {
            mid_init$_f3555bcc629675d9,
            mid_advance_a3904e10f5bb9437,
            mid_advanceExact_a8281eb3b9d9672d,
            mid_cost_0f176418e3e16541,
            mid_docID_bd89ce15dad49192,
            mid_docValueCount_bd89ce15dad49192,
            mid_nextDoc_bd89ce15dad49192,
            mid_nextValue_0f176418e3e16541,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterSortedNumericDocValues(jobject obj) : ::org::apache::lucene::index::SortedNumericDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterSortedNumericDocValues(const FilterSortedNumericDocValues& obj) : ::org::apache::lucene::index::SortedNumericDocValues(obj) {}

          FilterSortedNumericDocValues(const ::org::apache::lucene::index::SortedNumericDocValues &);

          jint advance(jint) const;
          jboolean advanceExact(jint) const;
          jlong cost() const;
          jint docID() const;
          jint docValueCount() const;
          jint nextDoc() const;
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
      namespace index {
        extern PyType_Def PY_TYPE_DEF(FilterSortedNumericDocValues);
        extern PyTypeObject *PY_TYPE(FilterSortedNumericDocValues);

        class t_FilterSortedNumericDocValues {
        public:
          PyObject_HEAD
          FilterSortedNumericDocValues object;
          static PyObject *wrap_Object(const FilterSortedNumericDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
