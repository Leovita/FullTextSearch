#ifndef org_apache_lucene_index_IndexWriter_H
#define org_apache_lucene_index_IndexWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace util {
    class Map$Entry;
    class Set;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
    class Iterable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class InfoStream;
        class Accountable;
      }
      namespace index {
        class SegmentInfos;
        class CodecReader;
        class MergePolicy$MergeContext;
        class DirectoryReader;
        class IndexWriterConfig;
        class MergePolicy$OneMerge;
        class TwoPhaseCommit;
        class SegmentCommitInfo;
        class Term;
        class LiveIndexWriterConfig;
        class IndexReader;
        class IndexWriter$DocStats;
        class IndexableField;
      }
      namespace search {
        class Query;
      }
      namespace document {
        class Field;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace store {
        class Directory;
      }
    }
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
            mid_init$_1a847c0d96c9a375,
            mid_addDocument_7afd55b940a7f0bd,
            mid_addDocuments_7afd55b940a7f0bd,
            mid_addIndexes_c807aa9a455ce3ce,
            mid_addIndexes_2bb2f8836642e1b0,
            mid_addIndexesReaderMerge_43e5fc07fd56a753,
            mid_advanceSegmentInfosVersion_1d3149fac12f2af3,
            mid_close_e7bdbe105ce1bafb,
            mid_commit_0f176418e3e16541,
            mid_decRefDeleter_4c4f4bfe6cd27c73,
            mid_deleteAll_0f176418e3e16541,
            mid_deleteDocuments_5acd20fbbd1b66f0,
            mid_deleteDocuments_df6fc4e5ad548c69,
            mid_deleteUnusedFiles_e7bdbe105ce1bafb,
            mid_flush_e7bdbe105ce1bafb,
            mid_flushNextBuffer_9aa4f33e82ea333f,
            mid_forceMerge_8226bd0b0fc13dba,
            mid_forceMerge_a0fed0a2cd38e7b1,
            mid_forceMergeDeletes_e7bdbe105ce1bafb,
            mid_forceMergeDeletes_f5dd97eebf6a215a,
            mid_getAnalyzer_7bc9b23f56937752,
            mid_getConfig_1170a5e87b407121,
            mid_getDirectory_0b8988a9a36f43ec,
            mid_getDocStats_21bdec0966f7aadb,
            mid_getFieldNames_79131c6bbcf08916,
            mid_getFlushingBytes_0f176418e3e16541,
            mid_getInfoStream_7dc634bffa4290e2,
            mid_getLiveCommitData_85e1732aaf0b83f3,
            mid_getMaxCompletedSequenceNumber_0f176418e3e16541,
            mid_getMergingSegments_79131c6bbcf08916,
            mid_getPendingNumDocs_0f176418e3e16541,
            mid_getReader_3b3a6460cd1fbdea,
            mid_getTragicException_76f90963e923fefa,
            mid_hasDeletions_9aa4f33e82ea333f,
            mid_hasPendingMerges_9aa4f33e82ea333f,
            mid_hasUncommittedChanges_9aa4f33e82ea333f,
            mid_incRefDeleter_4c4f4bfe6cd27c73,
            mid_isOpen_9aa4f33e82ea333f,
            mid_maybeMerge_e7bdbe105ce1bafb,
            mid_numDeletedDocs_a0105afcf7393ca2,
            mid_numDeletesToMerge_a0105afcf7393ca2,
            mid_numRamDocs_bd89ce15dad49192,
            mid_onTragicEvent_d1a99ccef994914c,
            mid_prepareCommit_0f176418e3e16541,
            mid_ramBytesUsed_0f176418e3e16541,
            mid_rollback_e7bdbe105ce1bafb,
            mid_setLiveCommitData_e14ca79f217d88d0,
            mid_setLiveCommitData_ca42c75f8961eb05,
            mid_softUpdateDocument_67bb297d9619c804,
            mid_softUpdateDocuments_67bb297d9619c804,
            mid_tryDeleteDocument_d03acb11e9548d6a,
            mid_tryUpdateDocValue_78c1d6fef921a0b2,
            mid_updateBinaryDocValue_ed93fb2cb2035928,
            mid_updateDocValues_0864f728e6453158,
            mid_updateDocument_fc70ce6ebe152aab,
            mid_updateDocuments_fc70ce6ebe152aab,
            mid_updateDocuments_4158460fdd2d072e,
            mid_updateNumericDocValue_85d9135411a4885b,
            mid_doBeforeFlush_e7bdbe105ce1bafb,
            mid_doAfterFlush_e7bdbe105ce1bafb,
            mid_isEnableTestPoints_9aa4f33e82ea333f,
            mid_mergeSuccess_43e5fc07fd56a753,
            mid_merge_43e5fc07fd56a753,
            mid_ensureOpen_f5dd97eebf6a215a,
            mid_ensureOpen_e7bdbe105ce1bafb,
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
