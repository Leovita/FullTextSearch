#ifndef org_apache_lucene_index_SortedDocValues_H
#define org_apache_lucene_index_SortedDocValues_H

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

        class SortedDocValues : public ::org::apache::lucene::index::DocValuesIterator {
         public:
          enum {
            mid_getValueCount_20fbf7565993c3d7,
            mid_intersect_21a0fc15840d17f9,
            mid_lookupOrd_29bb531a30fe8369,
            mid_lookupTerm_5cda243a0bd46c4d,
            mid_ordValue_20fbf7565993c3d7,
            mid_termsEnum_8a12f41bbebee35e,
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
