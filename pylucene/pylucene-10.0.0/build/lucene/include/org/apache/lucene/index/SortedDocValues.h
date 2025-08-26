#ifndef org_apache_lucene_index_SortedDocValues_H
#define org_apache_lucene_index_SortedDocValues_H

#include "org/apache/lucene/index/DocValuesIterator.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
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

        class SortedDocValues : public ::org::apache::lucene::index::DocValuesIterator {
         public:
          enum {
            mid_getValueCount_bd89ce15dad49192,
            mid_intersect_c805ac0582f41304,
            mid_lookupOrd_1e79f110a34c4312,
            mid_lookupTerm_59a6eaf88a8be404,
            mid_ordValue_bd89ce15dad49192,
            mid_termsEnum_c92e16ad45780176,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedDocValues(jobject obj) : ::org::apache::lucene::index::DocValuesIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedDocValues(const SortedDocValues& obj) : ::org::apache::lucene::index::DocValuesIterator(obj) {}

          jint getValueCount() const;
          ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &) const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jint) const;
          jint lookupTerm(const ::org::apache::lucene::util::BytesRef &) const;
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
        extern PyType_Def PY_TYPE_DEF(SortedDocValues);
        extern PyTypeObject *PY_TYPE(SortedDocValues);

        class t_SortedDocValues {
        public:
          PyObject_HEAD
          SortedDocValues object;
          static PyObject *wrap_Object(const SortedDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
