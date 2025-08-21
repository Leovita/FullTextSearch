#ifndef org_apache_lucene_index_LeafReader_H
#define org_apache_lucene_index_LeafReader_H

#include "org/apache/lucene/index/IndexReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedNumericDocValues;
        class FloatVectorValues;
        class FieldInfos;
        class BinaryDocValues;
        class SortedSetDocValues;
        class ByteVectorValues;
        class SortedDocValues;
        class LeafMetaData;
        class NumericDocValues;
        class PostingsEnum;
        class LeafReaderContext;
        class PointValues;
        class Term;
        class IndexReader$CacheHelper;
        class Terms;
        class DocValuesSkipper;
      }
      namespace search {
        class KnnCollector;
        class TopDocs;
      }
      namespace util {
        class Bits;
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

        class LeafReader : public ::org::apache::lucene::index::IndexReader {
         public:
          enum {
            mid_checkIntegrity_3720c61b0679eb3e,
            mid_docFreq_a72eb531d55acb0c,
            mid_getBinaryDocValues_930cc2268218a3e3,
            mid_getByteVectorValues_b6d55ee35cf0a7cd,
            mid_getContext_73a30448bd05c3e2,
            mid_getCoreCacheHelper_3117e2e82cc46163,
            mid_getDocCount_3f230d713d7fd2b0,
            mid_getDocValuesSkipper_6385669244954201,
            mid_getFieldInfos_2d5786d39aaa5f0b,
            mid_getFloatVectorValues_d99d2b92faec6895,
            mid_getLiveDocs_959b4f7101dd7f4b,
            mid_getMetaData_e29b13e9e9af4206,
            mid_getNormValues_0c282caddf2d7938,
            mid_getNumericDocValues_0c282caddf2d7938,
            mid_getPointValues_9d784340b5464260,
            mid_getSortedDocValues_e1c83af81f671c5d,
            mid_getSortedNumericDocValues_5b5cc59b31747b26,
            mid_getSortedSetDocValues_9473e7f34fd540a9,
            mid_getSumDocFreq_e942a6f864c95ca0,
            mid_getSumTotalTermFreq_e942a6f864c95ca0,
            mid_postings_224d65cb2543fe1a,
            mid_postings_e66cfe6c4abc9ccc,
            mid_searchNearestVectors_e7c7b5d865f31eb3,
            mid_searchNearestVectors_210bbfb50a2f4ef9,
            mid_searchNearestVectors_ed748047d606d56c,
            mid_searchNearestVectors_1b56a11b35d5f3ed,
            mid_terms_734b49c46dc30275,
            mid_totalTermFreq_e7e426c2707b0b8a,
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
