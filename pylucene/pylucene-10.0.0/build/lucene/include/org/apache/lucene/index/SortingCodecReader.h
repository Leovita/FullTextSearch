#ifndef org_apache_lucene_index_SortingCodecReader_H
#define org_apache_lucene_index_SortingCodecReader_H

#include "org/apache/lucene/index/FilterCodecReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class LeafMetaData;
        class Sorter$DocMap;
        class IndexReader$CacheHelper;
        class CodecReader;
      }
      namespace codecs {
        class PointsReader;
        class StoredFieldsReader;
        class FieldsProducer;
        class NormsProducer;
        class DocValuesProducer;
        class KnnVectorsReader;
        class TermVectorsReader;
      }
      namespace search {
        class Sort;
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
            mid_getCoreCacheHelper_bcf8e7a3b3f2dbe2,
            mid_getDocValuesReader_c522cf75f2048ee9,
            mid_getFieldsReader_a7e1c9cc255e1e90,
            mid_getLiveDocs_92a4f567193c49d1,
            mid_getMetaData_983410cc4aac3ed3,
            mid_getNormsReader_bcb16c0940285072,
            mid_getPointsReader_01e0d9afb4f515b4,
            mid_getPostingsReader_181d74dce6e339fd,
            mid_getReaderCacheHelper_bcf8e7a3b3f2dbe2,
            mid_getTermVectorsReader_7a10ef35062ba8d1,
            mid_getVectorReader_9001a1821793c4d1,
            mid_toString_e7df854526d67fa3,
            mid_wrap_a17c4fc7d0316845,
            mid_wrap_9645f7bb1f14d7ce,
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
