#ifndef org_apache_lucene_index_SegmentReader_H
#define org_apache_lucene_index_SegmentReader_H

#include "org/apache/lucene/index/CodecReader.h"

namespace org {
  namespace apache {
    namespace lucene {
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
        class SegmentCommitInfo;
        class FieldInfos;
        class IndexReader$CacheHelper;
      }
      namespace util {
        class Bits;
      }
      namespace store {
        class Directory;
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

        class SegmentReader : public ::org::apache::lucene::index::CodecReader {
         public:
          enum {
            mid_checkIntegrity_3720c61b0679eb3e,
            mid_directory_0d3b52699e153434,
            mid_getCoreCacheHelper_3117e2e82cc46163,
            mid_getDocValuesReader_41ee33e34dc1b4f3,
            mid_getFieldInfos_2d5786d39aaa5f0b,
            mid_getFieldsReader_4e066a6f20734e17,
            mid_getHardLiveDocs_959b4f7101dd7f4b,
            mid_getLiveDocs_959b4f7101dd7f4b,
            mid_getMetaData_e29b13e9e9af4206,
            mid_getNormsReader_86a2ee031b1b0d77,
            mid_getPointsReader_7cecd0a8b5d53414,
            mid_getPostingsReader_47d662857d04070e,
            mid_getReaderCacheHelper_3117e2e82cc46163,
            mid_getSegmentInfo_6f5c2e9d37fb2f83,
            mid_getSegmentName_09a7afff1868fc5e,
            mid_getTermVectorsReader_0b9ae2ecfa80c759,
            mid_getVectorReader_e70fe5e71b23e71f,
            mid_maxDoc_20fbf7565993c3d7,
            mid_numDocs_20fbf7565993c3d7,
            mid_toString_09a7afff1868fc5e,
            mid_doClose_3720c61b0679eb3e,
            mid_notifyReaderClosedListeners_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentReader(jobject obj) : ::org::apache::lucene::index::CodecReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SegmentReader(const SegmentReader& obj) : ::org::apache::lucene::index::CodecReader(obj) {}

          void checkIntegrity() const;
          ::org::apache::lucene::store::Directory directory() const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getCoreCacheHelper() const;
          ::org::apache::lucene::codecs::DocValuesProducer getDocValuesReader() const;
          ::org::apache::lucene::index::FieldInfos getFieldInfos() const;
          ::org::apache::lucene::codecs::StoredFieldsReader getFieldsReader() const;
          ::org::apache::lucene::util::Bits getHardLiveDocs() const;
          ::org::apache::lucene::util::Bits getLiveDocs() const;
          ::org::apache::lucene::index::LeafMetaData getMetaData() const;
          ::org::apache::lucene::codecs::NormsProducer getNormsReader() const;
          ::org::apache::lucene::codecs::PointsReader getPointsReader() const;
          ::org::apache::lucene::codecs::FieldsProducer getPostingsReader() const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
          ::org::apache::lucene::index::SegmentCommitInfo getSegmentInfo() const;
          ::java::lang::String getSegmentName() const;
          ::org::apache::lucene::codecs::TermVectorsReader getTermVectorsReader() const;
          ::org::apache::lucene::codecs::KnnVectorsReader getVectorReader() const;
          jint maxDoc() const;
          jint numDocs() const;
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
        extern PyType_Def PY_TYPE_DEF(SegmentReader);
        extern PyTypeObject *PY_TYPE(SegmentReader);

        class t_SegmentReader {
        public:
          PyObject_HEAD
          SegmentReader object;
          static PyObject *wrap_Object(const SegmentReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
