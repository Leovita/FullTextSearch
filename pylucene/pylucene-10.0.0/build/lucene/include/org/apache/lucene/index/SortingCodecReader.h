#ifndef org_apache_lucene_index_SortingCodecReader_H
#define org_apache_lucene_index_SortingCodecReader_H

#include "org/apache/lucene/index/FilterCodecReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
      }
      namespace codecs {
        class KnnVectorsReader;
        class PointsReader;
        class StoredFieldsReader;
        class NormsProducer;
        class TermVectorsReader;
        class FieldsProducer;
        class DocValuesProducer;
      }
      namespace index {
        class LeafMetaData;
        class Sorter$DocMap;
        class CodecReader;
        class IndexReader$CacheHelper;
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

        class SortingCodecReader : public ::org::apache::lucene::index::FilterCodecReader {
         public:
          enum {
            mid_getCoreCacheHelper_3117e2e82cc46163,
            mid_getDocValuesReader_41ee33e34dc1b4f3,
            mid_getFieldsReader_4e066a6f20734e17,
            mid_getLiveDocs_959b4f7101dd7f4b,
            mid_getMetaData_e29b13e9e9af4206,
            mid_getNormsReader_86a2ee031b1b0d77,
            mid_getPointsReader_7cecd0a8b5d53414,
            mid_getPostingsReader_47d662857d04070e,
            mid_getReaderCacheHelper_3117e2e82cc46163,
            mid_getTermVectorsReader_0b9ae2ecfa80c759,
            mid_getVectorReader_e70fe5e71b23e71f,
            mid_toString_09a7afff1868fc5e,
            mid_wrap_6c55f8eb773fc7c5,
            mid_wrap_0baf9d89d62e280e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortingCodecReader(jobject obj) : ::org::apache::lucene::index::FilterCodecReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortingCodecReader(const SortingCodecReader& obj) : ::org::apache::lucene::index::FilterCodecReader(obj) {}

          ::org::apache::lucene::index::IndexReader$CacheHelper getCoreCacheHelper() const;
          ::org::apache::lucene::codecs::DocValuesProducer getDocValuesReader() const;
          ::org::apache::lucene::codecs::StoredFieldsReader getFieldsReader() const;
          ::org::apache::lucene::util::Bits getLiveDocs() const;
          ::org::apache::lucene::index::LeafMetaData getMetaData() const;
          ::org::apache::lucene::codecs::NormsProducer getNormsReader() const;
          ::org::apache::lucene::codecs::PointsReader getPointsReader() const;
          ::org::apache::lucene::codecs::FieldsProducer getPostingsReader() const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
          ::org::apache::lucene::codecs::TermVectorsReader getTermVectorsReader() const;
          ::org::apache::lucene::codecs::KnnVectorsReader getVectorReader() const;
          ::java::lang::String toString() const;
          static ::org::apache::lucene::index::CodecReader wrap(const ::org::apache::lucene::index::CodecReader &, const ::org::apache::lucene::search::Sort &);
          static ::org::apache::lucene::index::CodecReader wrap(const ::org::apache::lucene::index::CodecReader &, const ::org::apache::lucene::index::Sorter$DocMap &, const ::org::apache::lucene::search::Sort &);
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
        extern PyType_Def PY_TYPE_DEF(SortingCodecReader);
        extern PyTypeObject *PY_TYPE(SortingCodecReader);

        class t_SortingCodecReader {
        public:
          PyObject_HEAD
          SortingCodecReader object;
          static PyObject *wrap_Object(const SortingCodecReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
