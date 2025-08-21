#ifndef org_apache_lucene_index_MultiDocValues$MultiSortedSetDocValues_H
#define org_apache_lucene_index_MultiDocValues$MultiSortedSetDocValues_H

#include "org/apache/lucene/index/SortedSetDocValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class OrdinalMap;
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

        class MultiDocValues$MultiSortedSetDocValues : public ::org::apache::lucene::index::SortedSetDocValues {
         public:
          enum {
            mid_init$_f6643640597fd858,
            mid_advance_3c9bba330f083871,
            mid_advanceExact_ae22d3a856ad56f1,
            mid_cost_16939d9d0a9a9721,
            mid_docID_20fbf7565993c3d7,
            mid_docValueCount_20fbf7565993c3d7,
            mid_getValueCount_16939d9d0a9a9721,
            mid_lookupOrd_8e8c0c801351ec8d,
            mid_nextDoc_20fbf7565993c3d7,
            mid_nextOrd_16939d9d0a9a9721,
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
