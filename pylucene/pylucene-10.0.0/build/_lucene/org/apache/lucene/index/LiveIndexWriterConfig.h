#ifndef org_apache_lucene_index_LiveIndexWriterConfig_H
#define org_apache_lucene_index_LiveIndexWriterConfig_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriter$IndexReaderWarmer;
        class MergeScheduler;
        class IndexWriterConfig$OpenMode;
        class IndexDeletionPolicy;
        class IndexCommit;
        class MergePolicy;
        class IndexWriterEventListener;
        class LeafReader;
        class LiveIndexWriterConfig;
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
  namespace util {
    class Comparator;
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class LiveIndexWriterConfig : public ::java::lang::Object {
         public:
          enum {
            mid_getAnalyzer_7bc9b23f56937752,
            mid_getCodec_820c7dce26df28db,
            mid_getCommitOnClose_9aa4f33e82ea333f,
            mid_getIndexCommit_3f5d748efdffe9e0,
            mid_getIndexCreatedVersionMajor_bd89ce15dad49192,
            mid_getIndexDeletionPolicy_633ded673967d504,
            mid_getIndexSort_9a15197f7786b173,
            mid_getIndexSortFields_79131c6bbcf08916,
            mid_getIndexWriterEventListener_f989ebd32e002d99,
            mid_getInfoStream_7dc634bffa4290e2,
            mid_getLeafSorter_5cc89c689cd941fe,
            mid_getMaxBufferedDocs_bd89ce15dad49192,
            mid_getMaxFullFlushMergeWaitMillis_0f176418e3e16541,
            mid_getMergePolicy_1fcb76658e81d877,
            mid_getMergeScheduler_e16de0686cacdfc2,
            mid_getMergedSegmentWarmer_af1ca4377685b2f3,
            mid_getOpenMode_901fc387c863235c,
            mid_getParentField_e7df854526d67fa3,
            mid_getRAMBufferSizeMB_6fb37e123fed7a1f,
            mid_getRAMPerThreadHardLimitMB_bd89ce15dad49192,
            mid_getReaderPooling_9aa4f33e82ea333f,
            mid_getSimilarity_e1bcc9d7db6512db,
            mid_getSoftDeletesField_e7df854526d67fa3,
            mid_getUseCompoundFile_9aa4f33e82ea333f,
            mid_isCheckPendingFlushOnUpdate_9aa4f33e82ea333f,
            mid_setCheckPendingFlushUpdate_9dd53da0335b23a0,
            mid_setMaxBufferedDocs_579ca200d7c3248a,
            mid_setMergePolicy_a43f7eeab666e39d,
            mid_setMergedSegmentWarmer_1621746e3ea8c2ec,
            mid_setRAMBufferSizeMB_d8e998addf91fac3,
            mid_setUseCompoundFile_9dd53da0335b23a0,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LiveIndexWriterConfig(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LiveIndexWriterConfig(const LiveIndexWriterConfig& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
          ::org::apache::lucene::codecs::Codec getCodec() const;
          jboolean getCommitOnClose() const;
          ::org::apache::lucene::index::IndexCommit getIndexCommit() const;
          jint getIndexCreatedVersionMajor() const;
          ::org::apache::lucene::index::IndexDeletionPolicy getIndexDeletionPolicy() const;
          ::org::apache::lucene::search::Sort getIndexSort() const;
          ::java::util::Set getIndexSortFields() const;
          ::org::apache::lucene::index::IndexWriterEventListener getIndexWriterEventListener() const;
          ::org::apache::lucene::util::InfoStream getInfoStream() const;
          ::java::util::Comparator getLeafSorter() const;
          jint getMaxBufferedDocs() const;
          jlong getMaxFullFlushMergeWaitMillis() const;
          ::org::apache::lucene::index::MergePolicy getMergePolicy() const;
          ::org::apache::lucene::index::MergeScheduler getMergeScheduler() const;
          ::org::apache::lucene::index::IndexWriter$IndexReaderWarmer getMergedSegmentWarmer() const;
          ::org::apache::lucene::index::IndexWriterConfig$OpenMode getOpenMode() const;
          ::java::lang::String getParentField() const;
          jdouble getRAMBufferSizeMB() const;
          jint getRAMPerThreadHardLimitMB() const;
          jboolean getReaderPooling() const;
          ::org::apache::lucene::search::similarities::Similarity getSimilarity() const;
          ::java::lang::String getSoftDeletesField() const;
          jboolean getUseCompoundFile() const;
          jboolean isCheckPendingFlushOnUpdate() const;
          LiveIndexWriterConfig setCheckPendingFlushUpdate(jboolean) const;
          LiveIndexWriterConfig setMaxBufferedDocs(jint) const;
          LiveIndexWriterConfig setMergePolicy(const ::org::apache::lucene::index::MergePolicy &) const;
          LiveIndexWriterConfig setMergedSegmentWarmer(const ::org::apache::lucene::index::IndexWriter$IndexReaderWarmer &) const;
          LiveIndexWriterConfig setRAMBufferSizeMB(jdouble) const;
          LiveIndexWriterConfig setUseCompoundFile(jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(LiveIndexWriterConfig);
        extern PyTypeObject *PY_TYPE(LiveIndexWriterConfig);

        class t_LiveIndexWriterConfig {
        public:
          PyObject_HEAD
          LiveIndexWriterConfig object;
          static PyObject *wrap_Object(const LiveIndexWriterConfig&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
