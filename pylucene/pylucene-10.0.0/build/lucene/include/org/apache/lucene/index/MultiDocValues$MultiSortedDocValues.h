#ifndef org_apache_lucene_index_MultiDocValues$MultiSortedDocValues_H
#define org_apache_lucene_index_MultiDocValues$MultiSortedDocValues_H

#include "org/apache/lucene/index/SortedDocValues.h"

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
      namespace index {
        class OrdinalMap;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MultiDocValues$MultiSortedDocValues : public ::org::apache::lucene::index::SortedDocValues {
         public:
          enum {
            mid_init$_8e784312a49a1663,
            mid_advance_a3904e10f5bb9437,
            mid_advanceExact_a8281eb3b9d9672d,
            mid_cost_0f176418e3e16541,
            mid_docID_bd89ce15dad49192,
            mid_getValueCount_bd89ce15dad49192,
            mid_lookupOrd_1e79f110a34c4312,
            mid_nextDoc_bd89ce15dad49192,
            mid_ordValue_bd89ce15dad49192,
            max_mid
          };

          enum {
            fid_docStarts,
            fid_mapping,
            fid_values,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiDocValues$MultiSortedDocValues(jobject obj) : ::org::apache::lucene::index::SortedDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiDocValues$MultiSortedDocValues(const MultiDocValues$MultiSortedDocValues& obj) : ::org::apache::lucene::index::SortedDocValues(obj) {}

          JArray< jint > _get_docStarts() const;
          ::org::apache::lucene::index::OrdinalMap _get_mapping() const;
          JArray< ::org::apache::lucene::index::SortedDocValues > _get_values() const;

          MultiDocValues$MultiSortedDocValues(const JArray< ::org::apache::lucene::index::SortedDocValues > &, const JArray< jint > &, const ::org::apache::lucene::index::OrdinalMap &, jlong);

          jint advance(jint) const;
          jboolean advanceExact(jint) const;
          jlong cost() const;
          jint docID() const;
          jint getValueCount() const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jint) const;
          jint nextDoc() const;
          jint ordValue() const;
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
        extern PyType_Def PY_TYPE_DEF(MultiDocValues$MultiSortedDocValues);
        extern PyTypeObject *PY_TYPE(MultiDocValues$MultiSortedDocValues);

        class t_MultiDocValues$MultiSortedDocValues {
        public:
          PyObject_HEAD
          MultiDocValues$MultiSortedDocValues object;
          static PyObject *wrap_Object(const MultiDocValues$MultiSortedDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
