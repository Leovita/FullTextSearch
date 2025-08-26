#ifndef org_apache_lucene_index_FilterSortedSetDocValues_H
#define org_apache_lucene_index_FilterSortedSetDocValues_H

#include "org/apache/lucene/index/SortedSetDocValues.h"

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

        class FilterSortedSetDocValues : public ::org::apache::lucene::index::SortedSetDocValues {
         public:
          enum {
            mid_init$_1bdd62fc669392c0,
            mid_advance_a3904e10f5bb9437,
            mid_advanceExact_a8281eb3b9d9672d,
            mid_cost_0f176418e3e16541,
            mid_docID_bd89ce15dad49192,
            mid_docValueCount_bd89ce15dad49192,
            mid_getValueCount_0f176418e3e16541,
            mid_intersect_c805ac0582f41304,
            mid_lookupOrd_0b299353ac353256,
            mid_lookupTerm_8c6e1447894d7a38,
            mid_nextDoc_bd89ce15dad49192,
            mid_nextOrd_0f176418e3e16541,
            mid_termsEnum_c92e16ad45780176,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterSortedSetDocValues(jobject obj) : ::org::apache::lucene::index::SortedSetDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterSortedSetDocValues(const FilterSortedSetDocValues& obj) : ::org::apache::lucene::index::SortedSetDocValues(obj) {}

          FilterSortedSetDocValues(const ::org::apache::lucene::index::SortedSetDocValues &);

          jint advance(jint) const;
          jboolean advanceExact(jint) const;
          jlong cost() const;
          jint docID() const;
          jint docValueCount() const;
          jlong getValueCount() const;
          ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &) const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jlong) const;
          jlong lookupTerm(const ::org::apache::lucene::util::BytesRef &) const;
          jint nextDoc() const;
          jlong nextOrd() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterSortedSetDocValues);
        extern PyTypeObject *PY_TYPE(FilterSortedSetDocValues);

        class t_FilterSortedSetDocValues {
        public:
          PyObject_HEAD
          FilterSortedSetDocValues object;
          static PyObject *wrap_Object(const FilterSortedSetDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
