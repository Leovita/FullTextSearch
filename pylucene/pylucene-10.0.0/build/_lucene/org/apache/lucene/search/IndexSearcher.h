#ifndef org_apache_lucene_search_IndexSearcher_H
#define org_apache_lucene_search_IndexSearcher_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class QueryTimeout;
        class IndexReaderContext;
        class LeafReaderContext;
        class StoredFields;
        class Term;
        class IndexReader;
      }
      namespace search {
        class QueryCachingPolicy;
        class Sort;
        class Explanation;
        class ScoreMode;
        class Query;
        class Collector;
        class QueryCache;
        class Weight;
        class TermStatistics;
        class CollectionStatistics;
        class CollectorManager;
        namespace similarities {
          class Similarity;
        }
        class TopDocs;
        class TopFieldDocs;
        class IndexSearcher$LeafSlice;
        class TaskExecutor;
        class ScoreDoc;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    namespace concurrent {
      class Executor;
    }
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class IndexSearcher : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d988f6cfce8380fb,
            mid_init$_34a1b095e161b54f,
            mid_init$_a779170a785433e0,
            mid_init$_f9e97681d0036b17,
            mid_collectionStatistics_51b3525a88440e74,
            mid_count_aef74c16ca27d4d8,
            mid_createWeight_783fe471e3906f40,
            mid_explain_21bfaa5aa1106c80,
            mid_getDefaultQueryCache_b724fd28545a0949,
            mid_getDefaultQueryCachingPolicy_796c1b50f811ec01,
            mid_getDefaultSimilarity_e1bcc9d7db6512db,
            mid_getIndexReader_9596617cc74c49f2,
            mid_getLeafContexts_1387e1e2702ac173,
            mid_getMaxClauseCount_bd89ce15dad49192,
            mid_getQueryCache_b724fd28545a0949,
            mid_getQueryCachingPolicy_796c1b50f811ec01,
            mid_getSimilarity_e1bcc9d7db6512db,
            mid_getSlices_f8f02c8c87bfaaa0,
            mid_getTaskExecutor_dd1aebaf7220ead0,
            mid_getTimeout_c564223390c8c408,
            mid_getTopReaderContext_bc90d2aea66a0888,
            mid_rewrite_aa742476ed88ab8f,
            mid_search_d7b16a265523009d,
            mid_search_20d8590146dae53e,
            mid_search_950ecffaf2023223,
            mid_search_0b075a1e116359c7,
            mid_search_1f0a945a6c3223ea,
            mid_searchAfter_8a7a70b3b65a49ec,
            mid_searchAfter_dbefa7b0cf4db995,
            mid_searchAfter_5f726dbda99b5f5c,
            mid_setDefaultQueryCache_2e0a8074a68f2122,
            mid_setDefaultQueryCachingPolicy_d81d232b26997932,
            mid_setMaxClauseCount_8226bd0b0fc13dba,
            mid_setQueryCache_2e0a8074a68f2122,
            mid_setQueryCachingPolicy_d81d232b26997932,
            mid_setSimilarity_0ad3b8cdfb835d9f,
            mid_setTimeout_957e9f789ab6489d,
            mid_slices_325d0e12bcda9b49,
            mid_storedFields_1a4fab20a75bd3d4,
            mid_termStatistics_fa634405179bc36c,
            mid_timedOut_9aa4f33e82ea333f,
            mid_toString_e7df854526d67fa3,
            mid_searchLeaf_3df11855b2a132fa,
            mid_explain_074f927b998adb4f,
            mid_slices_020dbd697cc491c9,
            mid_search_731d65d949aa2ac8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSearcher(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSearcher(const IndexSearcher& obj) : ::java::lang::Object(obj) {}

          IndexSearcher(const ::org::apache::lucene::index::IndexReader &);
          IndexSearcher(const ::org::apache::lucene::index::IndexReaderContext &);
          IndexSearcher(const ::org::apache::lucene::index::IndexReader &, const ::java::util::concurrent::Executor &);
          IndexSearcher(const ::org::apache::lucene::index::IndexReaderContext &, const ::java::util::concurrent::Executor &);

          ::org::apache::lucene::search::CollectionStatistics collectionStatistics(const ::java::lang::String &) const;
          jint count(const ::org::apache::lucene::search::Query &) const;
          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::Query &, jint) const;
          static ::org::apache::lucene::search::QueryCache getDefaultQueryCache();
          static ::org::apache::lucene::search::QueryCachingPolicy getDefaultQueryCachingPolicy();
          static ::org::apache::lucene::search::similarities::Similarity getDefaultSimilarity();
          ::org::apache::lucene::index::IndexReader getIndexReader() const;
          ::java::util::List getLeafContexts() const;
          static jint getMaxClauseCount();
          ::org::apache::lucene::search::QueryCache getQueryCache() const;
          ::org::apache::lucene::search::QueryCachingPolicy getQueryCachingPolicy() const;
          ::org::apache::lucene::search::similarities::Similarity getSimilarity() const;
          JArray< ::org::apache::lucene::search::IndexSearcher$LeafSlice > getSlices() const;
          ::org::apache::lucene::search::TaskExecutor getTaskExecutor() const;
          ::org::apache::lucene::index::QueryTimeout getTimeout() const;
          ::org::apache::lucene::index::IndexReaderContext getTopReaderContext() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::Query &) const;
          ::org::apache::lucene::search::TopDocs search(const ::org::apache::lucene::search::Query &, jint) const;
          void search(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Collector &) const;
          ::java::lang::Object search(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::CollectorManager &) const;
          ::org::apache::lucene::search::TopFieldDocs search(const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &) const;
          ::org::apache::lucene::search::TopFieldDocs search(const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &, jboolean) const;
          ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint) const;
          ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &) const;
          ::org::apache::lucene::search::TopFieldDocs searchAfter(const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &, jboolean) const;
          static void setDefaultQueryCache(const ::org::apache::lucene::search::QueryCache &);
          static void setDefaultQueryCachingPolicy(const ::org::apache::lucene::search::QueryCachingPolicy &);
          static void setMaxClauseCount(jint);
          void setQueryCache(const ::org::apache::lucene::search::QueryCache &) const;
          void setQueryCachingPolicy(const ::org::apache::lucene::search::QueryCachingPolicy &) const;
          void setSimilarity(const ::org::apache::lucene::search::similarities::Similarity &) const;
          void setTimeout(const ::org::apache::lucene::index::QueryTimeout &) const;
          static JArray< ::org::apache::lucene::search::IndexSearcher$LeafSlice > slices(const ::java::util::List &, jint, jint, jboolean);
          ::org::apache::lucene::index::StoredFields storedFields() const;
          ::org::apache::lucene::search::TermStatistics termStatistics(const ::org::apache::lucene::index::Term &, jint, jlong) const;
          jboolean timedOut() const;
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
      namespace search {
        extern PyType_Def PY_TYPE_DEF(IndexSearcher);
        extern PyTypeObject *PY_TYPE(IndexSearcher);

        class t_IndexSearcher {
        public:
          PyObject_HEAD
          IndexSearcher object;
          static PyObject *wrap_Object(const IndexSearcher&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
