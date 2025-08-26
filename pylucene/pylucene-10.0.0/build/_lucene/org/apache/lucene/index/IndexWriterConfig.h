#ifndef org_apache_lucene_index_IndexWriterConfig_H
#define org_apache_lucene_index_IndexWriterConfig_H

#include "org/apache/lucene/index/LiveIndexWriterConfig.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriter$IndexReaderWarmer;
        class MergeScheduler;
        class IndexWriterConfig$OpenMode;
        class IndexDeletionPolicy;
        class IndexCommit;
        class LeafReader;
        class MergePolicy;
        class IndexWriterEventListener;
        class IndexWriterConfig;
      }
      namespace search {
        namespace similarities {
          class Similarity;
        }
        class Sort;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace codecs {
        class Codec;
      }
      namespace util {
        class InfoStream;
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
    class PrintStream;
  }
  namespace util {
    class Comparator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexWriterConfig : public ::org::apache::lucene::index::LiveIndexWriterConfig {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_1aaca852402a5069,
            mid_getAnalyzer_7bc9b23f56937752,
            mid_getCodec_820c7dce26df28db,
            mid_getIndexCommit_3f5d748efdffe9e0,
            mid_getIndexDeletionPolicy_633ded673967d504,
            mid_getInfoStream_7dc634bffa4290e2,
            mid_getMaxBufferedDocs_bd89ce15dad49192,
            mid_getMergePolicy_1fcb76658e81d877,
            mid_getMergeScheduler_e16de0686cacdfc2,
            mid_getMergedSegmentWarmer_af1ca4377685b2f3,
            mid_getOpenMode_901fc387c863235c,
            mid_getRAMBufferSizeMB_6fb37e123fed7a1f,
            mid_getRAMPerThreadHardLimitMB_bd89ce15dad49192,
            mid_getReaderPooling_9aa4f33e82ea333f,
            mid_getSimilarity_e1bcc9d7db6512db,
            mid_setCheckPendingFlushUpdate_3a906d7dbdc22487,
            mid_setCodec_55501f3d9b291d3d,
            mid_setCommitOnClose_3a906d7dbdc22487,
            mid_setIndexCommit_accd7bfb4440a3ef,
            mid_setIndexCreatedVersionMajor_b06311f3d26a6461,
            mid_setIndexDeletionPolicy_1722c44597e780b0,
            mid_setIndexSort_9eb3656c4833b988,
            mid_setIndexWriterEventListener_ce0296878590c4bd,
            mid_setInfoStream_0760d5f36ec93fa0,
            mid_setInfoStream_0a574b36337fb280,
            mid_setLeafSorter_825ca8e657076f32,
            mid_setMaxBufferedDocs_b06311f3d26a6461,
            mid_setMaxFullFlushMergeWaitMillis_ebd1e385ff2d1fa0,
            mid_setMergePolicy_b68f49d5b98f3459,
            mid_setMergeScheduler_a39d4172add84fa2,
            mid_setMergedSegmentWarmer_08a5a1949c509b80,
            mid_setOpenMode_67fa0619a4e531cd,
            mid_setParentField_8ca00ef038047dfb,
            mid_setRAMBufferSizeMB_ff1ca99fa57e0626,
            mid_setRAMPerThreadHardLimitMB_b06311f3d26a6461,
            mid_setReaderPooling_3a906d7dbdc22487,
            mid_setSimilarity_d912e7fce2f1875f,
            mid_setSoftDeletesField_8ca00ef038047dfb,
            mid_setUseCompoundFile_3a906d7dbdc22487,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexWriterConfig(jobject obj) : ::org::apache::lucene::index::LiveIndexWriterConfig(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexWriterConfig(const IndexWriterConfig& obj) : ::org::apache::lucene::index::LiveIndexWriterConfig(obj) {}

          static jboolean DEFAULT_COMMIT_ON_CLOSE;
          static jint DEFAULT_MAX_BUFFERED_DELETE_TERMS;
          static jint DEFAULT_MAX_BUFFERED_DOCS;
          static jlong DEFAULT_MAX_FULL_FLUSH_MERGE_WAIT_MILLIS;
          static jdouble DEFAULT_RAM_BUFFER_SIZE_MB;
          static jint DEFAULT_RAM_PER_THREAD_HARD_LIMIT_MB;
          static jboolean DEFAULT_READER_POOLING;
          static jboolean DEFAULT_USE_COMPOUND_FILE_SYSTEM;
          static jint DISABLE_AUTO_FLUSH;

          IndexWriterConfig();
          IndexWriterConfig(const ::org::apache::lucene::analysis::Analyzer &);

          ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
          ::org::apache::lucene::codecs::Codec getCodec() const;
          ::org::apache::lucene::index::IndexCommit getIndexCommit() const;
          ::org::apache::lucene::index::IndexDeletionPolicy getIndexDeletionPolicy() const;
          ::org::apache::lucene::util::InfoStream getInfoStream() const;
          jint getMaxBufferedDocs() const;
          ::org::apache::lucene::index::MergePolicy getMergePolicy() const;
          ::org::apache::lucene::index::MergeScheduler getMergeScheduler() const;
          ::org::apache::lucene::index::IndexWriter$IndexReaderWarmer getMergedSegmentWarmer() const;
          ::org::apache::lucene::index::IndexWriterConfig$OpenMode getOpenMode() const;
          jdouble getRAMBufferSizeMB() const;
          jint getRAMPerThreadHardLimitMB() const;
          jboolean getReaderPooling() const;
          ::org::apache::lucene::search::similarities::Similarity getSimilarity() const;
          IndexWriterConfig setCheckPendingFlushUpdate(jboolean) const;
          IndexWriterConfig setCodec(const ::org::apache::lucene::codecs::Codec &) const;
          IndexWriterConfig setCommitOnClose(jboolean) const;
          IndexWriterConfig setIndexCommit(const ::org::apache::lucene::index::IndexCommit &) const;
          IndexWriterConfig setIndexCreatedVersionMajor(jint) const;
          IndexWriterConfig setIndexDeletionPolicy(const ::org::apache::lucene::index::IndexDeletionPolicy &) const;
          IndexWriterConfig setIndexSort(const ::org::apache::lucene::search::Sort &) const;
          IndexWriterConfig setIndexWriterEventListener(const ::org::apache::lucene::index::IndexWriterEventListener &) const;
          IndexWriterConfig setInfoStream(const ::java::io::PrintStream &) const;
          IndexWriterConfig setInfoStream(const ::org::apache::lucene::util::InfoStream &) const;
          IndexWriterConfig setLeafSorter(const ::java::util::Comparator &) const;
          IndexWriterConfig setMaxBufferedDocs(jint) const;
          IndexWriterConfig setMaxFullFlushMergeWaitMillis(jlong) const;
          IndexWriterConfig setMergePolicy(const ::org::apache::lucene::index::MergePolicy &) const;
          IndexWriterConfig setMergeScheduler(const ::org::apache::lucene::index::MergeScheduler &) const;
          IndexWriterConfig setMergedSegmentWarmer(const ::org::apache::lucene::index::IndexWriter$IndexReaderWarmer &) const;
          IndexWriterConfig setOpenMode(const ::org::apache::lucene::index::IndexWriterConfig$OpenMode &) const;
          IndexWriterConfig setParentField(const ::java::lang::String &) const;
          IndexWriterConfig setRAMBufferSizeMB(jdouble) const;
          IndexWriterConfig setRAMPerThreadHardLimitMB(jint) const;
          IndexWriterConfig setReaderPooling(jboolean) const;
          IndexWriterConfig setSimilarity(const ::org::apache::lucene::search::similarities::Similarity &) const;
          IndexWriterConfig setSoftDeletesField(const ::java::lang::String &) const;
          IndexWriterConfig setUseCompoundFile(jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(IndexWriterConfig);
        extern PyTypeObject *PY_TYPE(IndexWriterConfig);

        class t_IndexWriterConfig {
        public:
          PyObject_HEAD
          IndexWriterConfig object;
          static PyObject *wrap_Object(const IndexWriterConfig&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
