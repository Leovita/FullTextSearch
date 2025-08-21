#ifndef org_apache_lucene_index_LiveIndexWriterConfig_H
#define org_apache_lucene_index_LiveIndexWriterConfig_H

#include "java/lang/Object.h"

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
        class IndexDeletionPolicy;
        class IndexWriterConfig$OpenMode;
        class MergeScheduler;
        class IndexCommit;
        class LeafReader;
        class MergePolicy;
        class LiveIndexWriterConfig;
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
    class Set;
    class Comparator;
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
            mid_getAnalyzer_6755ba003d984513,
            mid_getCodec_39da0291d4509749,
            mid_getCommitOnClose_947277eca0748c4e,
            mid_getIndexCommit_271a09cc45c80524,
            mid_getIndexCreatedVersionMajor_20fbf7565993c3d7,
            mid_getIndexDeletionPolicy_c8a477f4e5b718ba,
            mid_getIndexSort_74d249da84538e70,
            mid_getIndexSortFields_4df174295554d7bd,
            mid_getIndexWriterEventListener_878ecd8be39b6b07,
            mid_getInfoStream_d67a60a40c235833,
            mid_getLeafSorter_39238840448c1807,
            mid_getMaxBufferedDocs_20fbf7565993c3d7,
            mid_getMaxFullFlushMergeWaitMillis_16939d9d0a9a9721,
            mid_getMergePolicy_462a53a2e93fb0f5,
            mid_getMergeScheduler_1c97911758295bcf,
            mid_getMergedSegmentWarmer_f4f60bfdb8d34383,
            mid_getOpenMode_95ace75d3f13b332,
            mid_getParentField_09a7afff1868fc5e,
            mid_getRAMBufferSizeMB_32caabaad86c508b,
            mid_getRAMPerThreadHardLimitMB_20fbf7565993c3d7,
            mid_getReaderPooling_947277eca0748c4e,
            mid_getSimilarity_39ecfe00156a771e,
            mid_getSoftDeletesField_09a7afff1868fc5e,
            mid_getUseCompoundFile_947277eca0748c4e,
            mid_isCheckPendingFlushOnUpdate_947277eca0748c4e,
            mid_setCheckPendingFlushUpdate_97dd762c6f6c3d59,
            mid_setMaxBufferedDocs_8f097541223a394c,
            mid_setMergePolicy_ffca6869cbc9238d,
            mid_setMergedSegmentWarmer_a26534c09908ec66,
            mid_setRAMBufferSizeMB_e6193be5010a105d,
            mid_setUseCompoundFile_97dd762c6f6c3d59,
            mid_toString_09a7afff1868fc5e,
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
