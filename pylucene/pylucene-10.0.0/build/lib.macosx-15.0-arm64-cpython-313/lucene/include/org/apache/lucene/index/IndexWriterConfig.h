#ifndef org_apache_lucene_index_IndexWriterConfig_H
#define org_apache_lucene_index_IndexWriterConfig_H

#include "org/apache/lucene/index/LiveIndexWriterConfig.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
        namespace similarities {
          class Similarity;
        }
      }
      namespace index {
        class IndexWriterEventListener;
        class IndexWriter$IndexReaderWarmer;
        class IndexWriterConfig$OpenMode;
        class IndexDeletionPolicy;
        class LeafReader;
        class IndexCommit;
        class MergeScheduler;
        class MergePolicy;
        class IndexWriterConfig;
      }
      namespace util {
        class InfoStream;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace codecs {
        class Codec;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Comparator;
  }
  namespace io {
    class PrintStream;
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
            mid_init$_3720c61b0679eb3e,
            mid_init$_07cd0f76cabcf75a,
            mid_getAnalyzer_6755ba003d984513,
            mid_getCodec_39da0291d4509749,
            mid_getIndexCommit_271a09cc45c80524,
            mid_getIndexDeletionPolicy_c8a477f4e5b718ba,
            mid_getInfoStream_d67a60a40c235833,
            mid_getMaxBufferedDocs_20fbf7565993c3d7,
            mid_getMergePolicy_462a53a2e93fb0f5,
            mid_getMergeScheduler_1c97911758295bcf,
            mid_getMergedSegmentWarmer_f4f60bfdb8d34383,
            mid_getOpenMode_95ace75d3f13b332,
            mid_getRAMBufferSizeMB_32caabaad86c508b,
            mid_getRAMPerThreadHardLimitMB_20fbf7565993c3d7,
            mid_getReaderPooling_947277eca0748c4e,
            mid_getSimilarity_39ecfe00156a771e,
            mid_setCheckPendingFlushUpdate_2b00e8a6af1f7779,
            mid_setCodec_511dba4606ff67d4,
            mid_setCommitOnClose_2b00e8a6af1f7779,
            mid_setIndexCommit_26a12746e144798f,
            mid_setIndexCreatedVersionMajor_d1c6a44c08898ed1,
            mid_setIndexDeletionPolicy_62d2b73ee8b7f012,
            mid_setIndexSort_3fe0ac1dac843ed3,
            mid_setIndexWriterEventListener_4cc16a8f18a4b192,
            mid_setInfoStream_8703af1aea0b0049,
            mid_setInfoStream_8336dddc99fac5a4,
            mid_setLeafSorter_7a7b363b7d82e368,
            mid_setMaxBufferedDocs_d1c6a44c08898ed1,
            mid_setMaxFullFlushMergeWaitMillis_08831b2938a3b119,
            mid_setMergePolicy_35f75fed8884dc20,
            mid_setMergeScheduler_d7dac06035f33996,
            mid_setMergedSegmentWarmer_da4dc8069bbe3f0b,
            mid_setOpenMode_53c6c73834896f5c,
            mid_setParentField_6df3ffe6273b5b6f,
            mid_setRAMBufferSizeMB_731e4aab346d967c,
            mid_setRAMPerThreadHardLimitMB_d1c6a44c08898ed1,
            mid_setReaderPooling_2b00e8a6af1f7779,
            mid_setSimilarity_9cc081003b706c23,
            mid_setSoftDeletesField_6df3ffe6273b5b6f,
            mid_setUseCompoundFile_2b00e8a6af1f7779,
            mid_toString_09a7afff1868fc5e,
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
