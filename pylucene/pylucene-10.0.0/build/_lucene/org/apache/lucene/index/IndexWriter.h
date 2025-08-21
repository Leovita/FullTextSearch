#ifndef org_apache_lucene_index_IndexWriter_H
#define org_apache_lucene_index_IndexWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace util {
        class Accountable;
        class InfoStream;
        class BytesRef;
      }
      namespace index {
        class DirectoryReader;
        class SegmentCommitInfo;
        class IndexWriter$DocStats;
        class SegmentInfos;
        class MergePolicy$OneMerge;
        class LiveIndexWriterConfig;
        class Term;
        class IndexReader;
        class MergePolicy$MergeContext;
        class CodecReader;
        class IndexableField;
        class TwoPhaseCommit;
        class IndexWriterConfig;
      }
      namespace store {
        class Directory;
      }
      namespace document {
        class Field;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
    class Iterable;
  }
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace util {
    class Map$Entry;
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexWriter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_6566f4eebe7eba94,
            mid_addDocument_fbdd70aa1af912b4,
            mid_addDocuments_fbdd70aa1af912b4,
            mid_addIndexes_5472d2a449384bf3,
            mid_addIndexes_7096fb4369f4b056,
            mid_addIndexesReaderMerge_e1e55891bbba68fb,
            mid_advanceSegmentInfosVersion_8b3d46852b435a94,
            mid_close_3720c61b0679eb3e,
            mid_commit_16939d9d0a9a9721,
            mid_decRefDeleter_e774f28e2e3cb793,
            mid_deleteAll_16939d9d0a9a9721,
            mid_deleteDocuments_8df2cd0462a32d48,
            mid_deleteDocuments_8c0ddf2d1fe03069,
            mid_deleteUnusedFiles_3720c61b0679eb3e,
            mid_flush_3720c61b0679eb3e,
            mid_flushNextBuffer_947277eca0748c4e,
            mid_forceMerge_540b2b23d51b1efd,
            mid_forceMerge_2936d2706a18a684,
            mid_forceMergeDeletes_3720c61b0679eb3e,
            mid_forceMergeDeletes_b110fc3a58c081ab,
            mid_getAnalyzer_6755ba003d984513,
            mid_getConfig_3a601247ac382221,
            mid_getDirectory_0d3b52699e153434,
            mid_getDocStats_31e03c743e96f829,
            mid_getFieldNames_4df174295554d7bd,
            mid_getFlushingBytes_16939d9d0a9a9721,
            mid_getInfoStream_d67a60a40c235833,
            mid_getLiveCommitData_11d5156a64e3246d,
            mid_getMaxCompletedSequenceNumber_16939d9d0a9a9721,
            mid_getMergingSegments_4df174295554d7bd,
            mid_getPendingNumDocs_16939d9d0a9a9721,
            mid_getReader_c3ab326fa894a6c1,
            mid_getTragicException_d175b950df78251e,
            mid_hasDeletions_947277eca0748c4e,
            mid_hasPendingMerges_947277eca0748c4e,
            mid_hasUncommittedChanges_947277eca0748c4e,
            mid_incRefDeleter_e774f28e2e3cb793,
            mid_isOpen_947277eca0748c4e,
            mid_maybeMerge_3720c61b0679eb3e,
            mid_numDeletedDocs_f2b27fe465afdaf9,
            mid_numDeletesToMerge_f2b27fe465afdaf9,
            mid_numRamDocs_20fbf7565993c3d7,
            mid_onTragicEvent_76617a9037afdbc9,
            mid_prepareCommit_16939d9d0a9a9721,
            mid_ramBytesUsed_16939d9d0a9a9721,
            mid_rollback_3720c61b0679eb3e,
            mid_setLiveCommitData_eb4b05d4345caaf0,
            mid_setLiveCommitData_d704b7fc833e196a,
            mid_softUpdateDocument_f6c96eaf88516ada,
            mid_softUpdateDocuments_f6c96eaf88516ada,
            mid_tryDeleteDocument_b6c7698f4d26d654,
            mid_tryUpdateDocValue_064a1629c93b2ecd,
            mid_updateBinaryDocValue_c4da23d518f555f5,
            mid_updateDocValues_8753b5f271cb466c,
            mid_updateDocument_1d5fea03bfaf0c0f,
            mid_updateDocuments_1d5fea03bfaf0c0f,
            mid_updateDocuments_125292d74ab36207,
            mid_updateNumericDocValue_6ac6a40c21b907c6,
            mid_doBeforeFlush_3720c61b0679eb3e,
            mid_doAfterFlush_3720c61b0679eb3e,
            mid_isEnableTestPoints_947277eca0748c4e,
            mid_mergeSuccess_e1e55891bbba68fb,
            mid_merge_e1e55891bbba68fb,
            mid_ensureOpen_b110fc3a58c081ab,
            mid_ensureOpen_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexWriter(const IndexWriter& obj) : ::java::lang::Object(obj) {}

          static jint MAX_DOCS;
          static jint MAX_POSITION;
          static jint MAX_STORED_STRING_LENGTH;
          static jint MAX_TERM_LENGTH;
          static ::java::lang::String *SOURCE;
          static ::java::lang::String *SOURCE_ADDINDEXES_READERS;
          static ::java::lang::String *SOURCE_FLUSH;
          static ::java::lang::String *SOURCE_MERGE;
          static ::java::lang::String *WRITE_LOCK_NAME;

          IndexWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig &);

          jlong addDocument(const ::java::lang::Iterable &) const;
          jlong addDocuments(const ::java::lang::Iterable &) const;
          jlong addIndexes(const JArray< ::org::apache::lucene::index::CodecReader > &) const;
          jlong addIndexes(const JArray< ::org::apache::lucene::store::Directory > &) const;
          void addIndexesReaderMerge(const ::org::apache::lucene::index::MergePolicy$OneMerge &) const;
          void advanceSegmentInfosVersion(jlong) const;
          void close() const;
          jlong commit() const;
          void decRefDeleter(const ::org::apache::lucene::index::SegmentInfos &) const;
          jlong deleteAll() const;
          jlong deleteDocuments(const JArray< ::org::apache::lucene::index::Term > &) const;
          jlong deleteDocuments(const JArray< ::org::apache::lucene::search::Query > &) const;
          void deleteUnusedFiles() const;
          void flush() const;
          jboolean flushNextBuffer() const;
          void forceMerge(jint) const;
          void forceMerge(jint, jboolean) const;
          void forceMergeDeletes() const;
          void forceMergeDeletes(jboolean) const;
          ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
          ::org::apache::lucene::index::LiveIndexWriterConfig getConfig() const;
          ::org::apache::lucene::store::Directory getDirectory() const;
          ::org::apache::lucene::index::IndexWriter$DocStats getDocStats() const;
          ::java::util::Set getFieldNames() const;
          jlong getFlushingBytes() const;
          ::org::apache::lucene::util::InfoStream getInfoStream() const;
          ::java::lang::Iterable getLiveCommitData() const;
          jlong getMaxCompletedSequenceNumber() const;
          ::java::util::Set getMergingSegments() const;
          jlong getPendingNumDocs() const;
          ::org::apache::lucene::index::DirectoryReader getReader(jboolean, jboolean) const;
          ::java::lang::Throwable getTragicException() const;
          jboolean hasDeletions() const;
          jboolean hasPendingMerges() const;
          jboolean hasUncommittedChanges() const;
          void incRefDeleter(const ::org::apache::lucene::index::SegmentInfos &) const;
          jboolean isOpen() const;
          void maybeMerge() const;
          jint numDeletedDocs(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          jint numDeletesToMerge(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          jint numRamDocs() const;
          void onTragicEvent(const ::java::lang::Throwable &, const ::java::lang::String &) const;
          jlong prepareCommit() const;
          jlong ramBytesUsed() const;
          void rollback() const;
          void setLiveCommitData(const ::java::lang::Iterable &) const;
          void setLiveCommitData(const ::java::lang::Iterable &, jboolean) const;
          jlong softUpdateDocument(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &, const JArray< ::org::apache::lucene::document::Field > &) const;
          jlong softUpdateDocuments(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &, const JArray< ::org::apache::lucene::document::Field > &) const;
          jlong tryDeleteDocument(const ::org::apache::lucene::index::IndexReader &, jint) const;
          jlong tryUpdateDocValue(const ::org::apache::lucene::index::IndexReader &, jint, const JArray< ::org::apache::lucene::document::Field > &) const;
          jlong updateBinaryDocValue(const ::org::apache::lucene::index::Term &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &) const;
          jlong updateDocValues(const ::org::apache::lucene::index::Term &, const JArray< ::org::apache::lucene::document::Field > &) const;
          jlong updateDocument(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &) const;
          jlong updateDocuments(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &) const;
          jlong updateDocuments(const ::org::apache::lucene::search::Query &, const ::java::lang::Iterable &) const;
          jlong updateNumericDocValue(const ::org::apache::lucene::index::Term &, const ::java::lang::String &, jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(IndexWriter);
        extern PyTypeObject *PY_TYPE(IndexWriter);

        class t_IndexWriter {
        public:
          PyObject_HEAD
          IndexWriter object;
          static PyObject *wrap_Object(const IndexWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
