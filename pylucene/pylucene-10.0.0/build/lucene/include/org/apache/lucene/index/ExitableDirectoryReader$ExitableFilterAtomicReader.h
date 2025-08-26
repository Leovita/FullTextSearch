#ifndef org_apache_lucene_index_ExitableDirectoryReader$ExitableFilterAtomicReader_H
#define org_apache_lucene_index_ExitableDirectoryReader$ExitableFilterAtomicReader_H

#include "org/apache/lucene/index/FilterLeafReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedSetDocValues;
        class QueryTimeout;
        class ByteVectorValues;
        class Terms;
        class FloatVectorValues;
        class NumericDocValues;
        class SortedDocValues;
        class SortedNumericDocValues;
        class IndexReader$CacheHelper;
        class BinaryDocValues;
        class PointValues;
        class LeafReader;
      }
      namespace util {
        class Bits;
      }
      namespace search {
        class KnnCollector;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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

        class ExitableDirectoryReader$ExitableFilterAtomicReader : public ::org::apache::lucene::index::FilterLeafReader {
         public:
          enum {
            mid_init$_55c65a043d3d04ab,
            mid_getBinaryDocValues_7dcd5a29ca65e591,
            mid_getByteVectorValues_7ab2f26af1d93897,
            mid_getCoreCacheHelper_bcf8e7a3b3f2dbe2,
            mid_getFloatVectorValues_0c0ae22a56670782,
            mid_getNumericDocValues_c8230d99abf988ec,
            mid_getPointValues_db6b2fb22b12e7e1,
            mid_getReaderCacheHelper_bcf8e7a3b3f2dbe2,
            mid_getSortedDocValues_946c886dd7165459,
            mid_getSortedNumericDocValues_d833735942a4e997,
            mid_getSortedSetDocValues_a25ba477f918d8fc,
            mid_searchNearestVectors_41e6931fdbdb5ba0,
            mid_searchNearestVectors_61a952903eb61416,
            mid_terms_b30320f056ffba8d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ExitableDirectoryReader$ExitableFilterAtomicReader(jobject obj) : ::org::apache::lucene::index::FilterLeafReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ExitableDirectoryReader$ExitableFilterAtomicReader(const ExitableDirectoryReader$ExitableFilterAtomicReader& obj) : ::org::apache::lucene::index::FilterLeafReader(obj) {}

          ExitableDirectoryReader$ExitableFilterAtomicReader(const ::org::apache::lucene::index::LeafReader &, const ::org::apache::lucene::index::QueryTimeout &);

          ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::ByteVectorValues getByteVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getCoreCacheHelper() const;
          ::org::apache::lucene::index::FloatVectorValues getFloatVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::NumericDocValues getNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::PointValues getPointValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
          ::org::apache::lucene::index::SortedDocValues getSortedDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSetDocValues(const ::java::lang::String &) const;
          void searchNearestVectors(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::Bits &) const;
          void searchNearestVectors(const ::java::lang::String &, const JArray< jfloat > &, const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::Bits &) const;
          ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(ExitableDirectoryReader$ExitableFilterAtomicReader);
        extern PyTypeObject *PY_TYPE(ExitableDirectoryReader$ExitableFilterAtomicReader);

        class t_ExitableDirectoryReader$ExitableFilterAtomicReader {
        public:
          PyObject_HEAD
          ExitableDirectoryReader$ExitableFilterAtomicReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ExitableDirectoryReader$ExitableFilterAtomicReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ExitableDirectoryReader$ExitableFilterAtomicReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ExitableDirectoryReader$ExitableFilterAtomicReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
