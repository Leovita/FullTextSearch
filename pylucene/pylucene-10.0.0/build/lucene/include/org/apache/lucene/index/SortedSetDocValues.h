#ifndef org_apache_lucene_index_SortedSetDocValues_H
#define org_apache_lucene_index_SortedSetDocValues_H

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

        class SortedSetDocValues : public ::org::apache::lucene::index::DocValuesIterator {
         public:
          enum {
            mid_docValueCount_bd89ce15dad49192,
            mid_getValueCount_0f176418e3e16541,
            mid_intersect_c805ac0582f41304,
            mid_lookupOrd_0b299353ac353256,
            mid_lookupTerm_8c6e1447894d7a38,
            mid_nextOrd_0f176418e3e16541,
            mid_termsEnum_c92e16ad45780176,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedSetDocValues(jobject obj) : ::org::apache::lucene::index::DocValuesIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedSetDocValues(const SortedSetDocValues& obj) : ::org::apache::lucene::index::DocValuesIterator(obj) {}

          jint docValueCount() const;
          jlong getValueCount() const;
          ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &) const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jlong) const;
          jlong lookupTerm(const ::org::apache::lucene::util::BytesRef &) const;
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
        extern PyType_Def PY_TYPE_DEF(SortedSetDocValues);
        extern PyTypeObject *PY_TYPE(SortedSetDocValues);

        class t_SortedSetDocValues {
        public:
          PyObject_HEAD
          SortedSetDocValues object;
          static PyObject *wrap_Object(const SortedSetDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
