#ifndef org_apache_lucene_index_SegmentReader_H
#define org_apache_lucene_index_SegmentReader_H

#include "org/apache/lucene/index/CodecReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace util {
        class Bits;
      }
      namespace index {
        class SegmentCommitInfo;
        class LeafMetaData;
        class IndexReader$CacheHelper;
        class FieldInfos;
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
            mid_checkIntegrity_e7bdbe105ce1bafb,
            mid_directory_0b8988a9a36f43ec,
            mid_getCoreCacheHelper_bcf8e7a3b3f2dbe2,
            mid_getDocValuesReader_c522cf75f2048ee9,
            mid_getFieldInfos_09577c1068fdaec4,
            mid_getFieldsReader_a7e1c9cc255e1e90,
            mid_getHardLiveDocs_92a4f567193c49d1,
            mid_getLiveDocs_92a4f567193c49d1,
            mid_getMetaData_983410cc4aac3ed3,
            mid_getNormsReader_bcb16c0940285072,
            mid_getPointsReader_01e0d9afb4f515b4,
            mid_getPostingsReader_181d74dce6e339fd,
            mid_getReaderCacheHelper_bcf8e7a3b3f2dbe2,
            mid_getSegmentInfo_5666aee396fcdc2a,
            mid_getSegmentName_e7df854526d67fa3,
            mid_getTermVectorsReader_7a10ef35062ba8d1,
            mid_getVectorReader_9001a1821793c4d1,
            mid_maxDoc_bd89ce15dad49192,
            mid_numDocs_bd89ce15dad49192,
            mid_toString_e7df854526d67fa3,
            mid_doClose_e7bdbe105ce1bafb,
            mid_notifyReaderClosedListeners_e7bdbe105ce1bafb,
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
