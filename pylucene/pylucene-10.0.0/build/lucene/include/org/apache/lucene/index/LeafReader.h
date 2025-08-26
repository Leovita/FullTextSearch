#ifndef org_apache_lucene_index_LeafReader_H
#define org_apache_lucene_index_LeafReader_H

#include "org/apache/lucene/index/IndexReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace search {
        class KnnCollector;
        class TopDocs;
      }
      namespace index {
        class FloatVectorValues;
        class DocValuesSkipper;
        class SortedNumericDocValues;
        class BinaryDocValues;
        class LeafReaderContext;
        class ByteVectorValues;
        class SortedDocValues;
        class NumericDocValues;
        class PointValues;
        class FieldInfos;
        class PostingsEnum;
        class Term;
        class IndexReader$CacheHelper;
        class SortedSetDocValues;
        class Terms;
        class LeafMetaData;
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

        class LeafReader : public ::org::apache::lucene::index::IndexReader {
         public:
          enum {
            mid_checkIntegrity_e7bdbe105ce1bafb,
            mid_docFreq_c8503de727553d83,
            mid_getBinaryDocValues_7dcd5a29ca65e591,
            mid_getByteVectorValues_7ab2f26af1d93897,
            mid_getContext_a465a075d20c01e1,
            mid_getCoreCacheHelper_bcf8e7a3b3f2dbe2,
            mid_getDocCount_fa2a6f298bd618ab,
            mid_getDocValuesSkipper_8b019ebe020b6965,
            mid_getFieldInfos_09577c1068fdaec4,
            mid_getFloatVectorValues_0c0ae22a56670782,
            mid_getLiveDocs_92a4f567193c49d1,
            mid_getMetaData_983410cc4aac3ed3,
            mid_getNormValues_c8230d99abf988ec,
            mid_getNumericDocValues_c8230d99abf988ec,
            mid_getPointValues_db6b2fb22b12e7e1,
            mid_getSortedDocValues_946c886dd7165459,
            mid_getSortedNumericDocValues_d833735942a4e997,
            mid_getSortedSetDocValues_a25ba477f918d8fc,
            mid_getSumDocFreq_490f1686ea1cfda6,
            mid_getSumTotalTermFreq_490f1686ea1cfda6,
            mid_postings_c1c47f0427bbdeca,
            mid_postings_2d244ed63bd383d8,
            mid_searchNearestVectors_41e6931fdbdb5ba0,
            mid_searchNearestVectors_61a952903eb61416,
            mid_searchNearestVectors_f0c9e7fd865aee36,
            mid_searchNearestVectors_bbf839c325625db0,
            mid_terms_b30320f056ffba8d,
            mid_totalTermFreq_3566c61061b446e6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LeafReader(jobject obj) : ::org::apache::lucene::index::IndexReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LeafReader(const LeafReader& obj) : ::org::apache::lucene::index::IndexReader(obj) {}

          void checkIntegrity() const;
          jint docFreq(const ::org::apache::lucene::index::Term &) const;
          ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::ByteVectorValues getByteVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::LeafReaderContext getContext() const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getCoreCacheHelper() const;
          jint getDocCount(const ::java::lang::String &) const;
          ::org::apache::lucene::index::DocValuesSkipper getDocValuesSkipper(const ::java::lang::String &) const;
          ::org::apache::lucene::index::FieldInfos getFieldInfos() const;
          ::org::apache::lucene::index::FloatVectorValues getFloatVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::util::Bits getLiveDocs() const;
          ::org::apache::lucene::index::LeafMetaData getMetaData() const;
          ::org::apache::lucene::index::NumericDocValues getNormValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::NumericDocValues getNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::PointValues getPointValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedDocValues getSortedDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSetDocValues(const ::java::lang::String &) const;
          jlong getSumDocFreq(const ::java::lang::String &) const;
          jlong getSumTotalTermFreq(const ::java::lang::String &) const;
          ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::Term &) const;
          ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::Term &, jint) const;
          void searchNearestVectors(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::Bits &) const;
          void searchNearestVectors(const ::java::lang::String &, const JArray< jfloat > &, const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::Bits &) const;
          ::org::apache::lucene::search::TopDocs searchNearestVectors(const ::java::lang::String &, const JArray< jbyte > &, jint, const ::org::apache::lucene::util::Bits &, jint) const;
          ::org::apache::lucene::search::TopDocs searchNearestVectors(const ::java::lang::String &, const JArray< jfloat > &, jint, const ::org::apache::lucene::util::Bits &, jint) const;
          ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
          jlong totalTermFreq(const ::org::apache::lucene::index::Term &) const;
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
        extern PyType_Def PY_TYPE_DEF(LeafReader);
        extern PyTypeObject *PY_TYPE(LeafReader);

        class t_LeafReader {
        public:
          PyObject_HEAD
          LeafReader object;
          static PyObject *wrap_Object(const LeafReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
