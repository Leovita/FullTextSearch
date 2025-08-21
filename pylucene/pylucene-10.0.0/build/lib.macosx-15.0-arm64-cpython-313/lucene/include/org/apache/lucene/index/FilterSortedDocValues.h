#ifndef org_apache_lucene_index_FilterSortedDocValues_H
#define org_apache_lucene_index_FilterSortedDocValues_H

#include "org/apache/lucene/index/SortedDocValues.h"

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
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
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
            mid_init$_2294a75816a1ac17,
            mid_advance_3c9bba330f083871,
            mid_advanceExact_ae22d3a856ad56f1,
            mid_cost_16939d9d0a9a9721,
            mid_docID_20fbf7565993c3d7,
            mid_getValueCount_20fbf7565993c3d7,
            mid_intersect_21a0fc15840d17f9,
            mid_lookupOrd_29bb531a30fe8369,
            mid_lookupTerm_5cda243a0bd46c4d,
            mid_nextDoc_20fbf7565993c3d7,
            mid_ordValue_20fbf7565993c3d7,
            mid_termsEnum_8a12f41bbebee35e,
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
