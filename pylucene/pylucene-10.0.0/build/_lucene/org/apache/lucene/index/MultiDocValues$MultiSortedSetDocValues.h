#ifndef org_apache_lucene_index_MultiDocValues$MultiSortedSetDocValues_H
#define org_apache_lucene_index_MultiDocValues$MultiSortedSetDocValues_H

#include "org/apache/lucene/index/SortedSetDocValues.h"

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

        class MultiDocValues$MultiSortedSetDocValues : public ::org::apache::lucene::index::SortedSetDocValues {
         public:
          enum {
            mid_init$_2512d9ca0c2bc70e,
            mid_advance_a3904e10f5bb9437,
            mid_advanceExact_a8281eb3b9d9672d,
            mid_cost_0f176418e3e16541,
            mid_docID_bd89ce15dad49192,
            mid_docValueCount_bd89ce15dad49192,
            mid_getValueCount_0f176418e3e16541,
            mid_lookupOrd_0b299353ac353256,
            mid_nextDoc_bd89ce15dad49192,
            mid_nextOrd_0f176418e3e16541,
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

          explicit MultiDocValues$MultiSortedSetDocValues(jobject obj) : ::org::apache::lucene::index::SortedSetDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiDocValues$MultiSortedSetDocValues(const MultiDocValues$MultiSortedSetDocValues& obj) : ::org::apache::lucene::index::SortedSetDocValues(obj) {}

          JArray< jint > _get_docStarts() const;
          ::org::apache::lucene::index::OrdinalMap _get_mapping() const;
          JArray< ::org::apache::lucene::index::SortedSetDocValues > _get_values() const;

          MultiDocValues$MultiSortedSetDocValues(const JArray< ::org::apache::lucene::index::SortedSetDocValues > &, const JArray< jint > &, const ::org::apache::lucene::index::OrdinalMap &, jlong);

          jint advance(jint) const;
          jboolean advanceExact(jint) const;
          jlong cost() const;
          jint docID() const;
          jint docValueCount() const;
          jlong getValueCount() const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jlong) const;
          jint nextDoc() const;
          jlong nextOrd() const;
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
        extern PyType_Def PY_TYPE_DEF(MultiDocValues$MultiSortedSetDocValues);
        extern PyTypeObject *PY_TYPE(MultiDocValues$MultiSortedSetDocValues);

        class t_MultiDocValues$MultiSortedSetDocValues {
        public:
          PyObject_HEAD
          MultiDocValues$MultiSortedSetDocValues object;
          static PyObject *wrap_Object(const MultiDocValues$MultiSortedSetDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
