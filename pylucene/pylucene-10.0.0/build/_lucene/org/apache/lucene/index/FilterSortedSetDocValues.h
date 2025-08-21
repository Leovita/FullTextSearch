#ifndef org_apache_lucene_index_FilterSortedSetDocValues_H
#define org_apache_lucene_index_FilterSortedSetDocValues_H

#include "org/apache/lucene/index/SortedSetDocValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum;
      }
      namespace util {
        namespace automaton {
          class CompiledAutomaton;
        }
        class BytesRef;
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
      namespace index {

        class FilterSortedSetDocValues : public ::org::apache::lucene::index::SortedSetDocValues {
         public:
          enum {
            mid_init$_d6f28ba45db5beaa,
            mid_advance_3c9bba330f083871,
            mid_advanceExact_ae22d3a856ad56f1,
            mid_cost_16939d9d0a9a9721,
            mid_docID_20fbf7565993c3d7,
            mid_docValueCount_20fbf7565993c3d7,
            mid_getValueCount_16939d9d0a9a9721,
            mid_intersect_21a0fc15840d17f9,
            mid_lookupOrd_8e8c0c801351ec8d,
            mid_lookupTerm_7595cb5441b08443,
            mid_nextDoc_20fbf7565993c3d7,
            mid_nextOrd_16939d9d0a9a9721,
            mid_termsEnum_8a12f41bbebee35e,
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
