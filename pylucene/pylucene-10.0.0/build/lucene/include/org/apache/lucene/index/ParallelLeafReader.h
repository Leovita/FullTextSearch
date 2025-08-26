#ifndef org_apache_lucene_index_ParallelLeafReader_H
#define org_apache_lucene_index_ParallelLeafReader_H

#include "org/apache/lucene/index/LeafReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermVectors;
        class FloatVectorValues;
        class DocValuesSkipper;
        class SortedNumericDocValues;
        class BinaryDocValues;
        class ByteVectorValues;
        class SortedDocValues;
        class NumericDocValues;
        class StoredFields;
        class PointValues;
        class FieldInfos;
        class IndexReader$CacheHelper;
        class SortedSetDocValues;
        class Terms;
        class LeafMetaData;
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
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class ParallelLeafReader : public ::org::apache::lucene::index::LeafReader {
         public:
          enum {
            mid_init$_fceba97e8a75b531,
            mid_init$_3fa924325c2c7ba2,
            mid_init$_8ec3e7734a40be4d,
            mid_checkIntegrity_e7bdbe105ce1bafb,
            mid_getBinaryDocValues_7dcd5a29ca65e591,
            mid_getByteVectorValues_7ab2f26af1d93897,
            mid_getCoreCacheHelper_bcf8e7a3b3f2dbe2,
            mid_getDocValuesSkipper_8b019ebe020b6965,
            mid_getFieldInfos_09577c1068fdaec4,
            mid_getFloatVectorValues_0c0ae22a56670782,
            mid_getLiveDocs_92a4f567193c49d1,
            mid_getMetaData_983410cc4aac3ed3,
            mid_getNormValues_c8230d99abf988ec,
            mid_getNumericDocValues_c8230d99abf988ec,
            mid_getParallelReaders_12a3b6fa9823abea,
            mid_getPointValues_db6b2fb22b12e7e1,
            mid_getReaderCacheHelper_bcf8e7a3b3f2dbe2,
            mid_getSortedDocValues_946c886dd7165459,
            mid_getSortedNumericDocValues_d833735942a4e997,
            mid_getSortedSetDocValues_a25ba477f918d8fc,
            mid_maxDoc_bd89ce15dad49192,
            mid_numDocs_bd89ce15dad49192,
            mid_searchNearestVectors_41e6931fdbdb5ba0,
            mid_searchNearestVectors_61a952903eb61416,
            mid_storedFields_1a4fab20a75bd3d4,
            mid_termVectors_6473260da883e913,
            mid_terms_b30320f056ffba8d,
            mid_toString_e7df854526d67fa3,
            mid_doClose_e7bdbe105ce1bafb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ParallelLeafReader(jobject obj) : ::org::apache::lucene::index::LeafReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ParallelLeafReader(const ParallelLeafReader& obj) : ::org::apache::lucene::index::LeafReader(obj) {}

          ParallelLeafReader(const JArray< ::org::apache::lucene::index::LeafReader > &);
          ParallelLeafReader(jboolean, const JArray< ::org::apache::lucene::index::LeafReader > &);
          ParallelLeafReader(jboolean, const JArray< ::org::apache::lucene::index::LeafReader > &, const JArray< ::org::apache::lucene::index::LeafReader > &);

          void checkIntegrity() const;
          ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::ByteVectorValues getByteVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getCoreCacheHelper() const;
          ::org::apache::lucene::index::DocValuesSkipper getDocValuesSkipper(const ::java::lang::String &) const;
          ::org::apache::lucene::index::FieldInfos getFieldInfos() const;
          ::org::apache::lucene::index::FloatVectorValues getFloatVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::util::Bits getLiveDocs() const;
          ::org::apache::lucene::index::LeafMetaData getMetaData() const;
          ::org::apache::lucene::index::NumericDocValues getNormValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::NumericDocValues getNumericDocValues(const ::java::lang::String &) const;
          JArray< ::org::apache::lucene::index::LeafReader > getParallelReaders() const;
          ::org::apache::lucene::index::PointValues getPointValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
          ::org::apache::lucene::index::SortedDocValues getSortedDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSetDocValues(const ::java::lang::String &) const;
          jint maxDoc() const;
          jint numDocs() const;
          void searchNearestVectors(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::Bits &) const;
          void searchNearestVectors(const ::java::lang::String &, const JArray< jfloat > &, const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::Bits &) const;
          ::org::apache::lucene::index::StoredFields storedFields() const;
          ::org::apache::lucene::index::TermVectors termVectors() const;
          ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(ParallelLeafReader);
        extern PyTypeObject *PY_TYPE(ParallelLeafReader);

        class t_ParallelLeafReader {
        public:
          PyObject_HEAD
          ParallelLeafReader object;
          static PyObject *wrap_Object(const ParallelLeafReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
