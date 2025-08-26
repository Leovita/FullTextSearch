#ifndef org_apache_lucene_index_FilterSortedDocValues_H
#define org_apache_lucene_index_FilterSortedDocValues_H

#include "org/apache/lucene/index/SortedDocValues.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class CompiledAutomaton;
        }
        class BytesRef;
      }
      namespace index {
        class TermsEnum;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class FilterSortedDocValues : public ::org::apache::lucene::index::SortedDocValues {
         public:
          enum {
            mid_init$_b0507d164a84f42a,
            mid_advance_a3904e10f5bb9437,
            mid_advanceExact_a8281eb3b9d9672d,
            mid_cost_0f176418e3e16541,
            mid_docID_bd89ce15dad49192,
            mid_getValueCount_bd89ce15dad49192,
            mid_intersect_c805ac0582f41304,
            mid_lookupOrd_1e79f110a34c4312,
            mid_lookupTerm_59a6eaf88a8be404,
            mid_nextDoc_bd89ce15dad49192,
            mid_ordValue_bd89ce15dad49192,
            mid_termsEnum_c92e16ad45780176,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterSortedDocValues(jobject obj) : ::org::apache::lucene::index::SortedDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterSortedDocValues(const FilterSortedDocValues& obj) : ::org::apache::lucene::index::SortedDocValues(obj) {}

          FilterSortedDocValues(const ::org::apache::lucene::index::SortedDocValues &);

          jint advance(jint) const;
          jboolean advanceExact(jint) const;
          jlong cost() const;
          jint docID() const;
          jint getValueCount() const;
          ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &) const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jint) const;
          jint lookupTerm(const ::org::apache::lucene::util::BytesRef &) const;
          jint nextDoc() const;
          jint ordValue() const;
          ::org::apache::lucene::index::TermsEnum termsEnum() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterSortedDocValues);
        extern PyTypeObject *PY_TYPE(FilterSortedDocValues);

        class t_FilterSortedDocValues {
        public:
          PyObject_HEAD
          FilterSortedDocValues object;
          static PyObject *wrap_Object(const FilterSortedDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
