#ifndef org_apache_lucene_index_SortedSetDocValues_H
#define org_apache_lucene_index_SortedSetDocValues_H

#include "org/apache/lucene/index/DocValuesIterator.h"

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

        class SortedSetDocValues : public ::org::apache::lucene::index::DocValuesIterator {
         public:
          enum {
            mid_docValueCount_20fbf7565993c3d7,
            mid_getValueCount_16939d9d0a9a9721,
            mid_intersect_21a0fc15840d17f9,
            mid_lookupOrd_8e8c0c801351ec8d,
            mid_lookupTerm_7595cb5441b08443,
            mid_nextOrd_16939d9d0a9a9721,
            mid_termsEnum_8a12f41bbebee35e,
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
