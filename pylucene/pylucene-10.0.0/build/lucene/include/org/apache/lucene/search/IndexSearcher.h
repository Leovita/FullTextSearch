#ifndef org_apache_lucene_search_IndexSearcher_H
#define org_apache_lucene_search_IndexSearcher_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReaderContext;
        class QueryTimeout;
        class LeafReaderContext;
        class Term;
        class IndexReader;
        class StoredFields;
      }
      namespace search {
        class IndexSearcher$LeafSlice;
        class Query;
        class Sort;
        class TaskExecutor;
        class QueryCache;
        namespace similarities {
          class Similarity;
        }
        class Collector;
        class CollectorManager;
        class TopFieldDocs;
        class TermStatistics;
        class Explanation;
        class ScoreMode;
        class QueryCachingPolicy;
        class ScoreDoc;
        class CollectionStatistics;
        class Weight;
        class TopDocs;
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
  namespace util {
    class List;
    namespace concurrent {
      class Executor;
    }
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
            mid_init$_1980becffa418484,
            mid_init$_26d88823abec6e31,
            mid_init$_1966c34e96d32006,
            mid_init$_965468a557b62cc9,
            mid_collectionStatistics_1848478eff653259,
            mid_count_51f2321ccdd2e47d,
            mid_createWeight_c6a3f31717033e08,
            mid_explain_b2711d13d5c2eb91,
            mid_getDefaultQueryCache_a2ac8404d8245aac,
            mid_getDefaultQueryCachingPolicy_f030c49ec4eb98cb,
            mid_getDefaultSimilarity_39ecfe00156a771e,
            mid_getIndexReader_38e68c08dc5fee6f,
            mid_getLeafContexts_36830460e10839eb,
            mid_getMaxClauseCount_20fbf7565993c3d7,
            mid_getQueryCache_a2ac8404d8245aac,
            mid_getQueryCachingPolicy_f030c49ec4eb98cb,
            mid_getSimilarity_39ecfe00156a771e,
            mid_getSlices_35ace415981266cb,
            mid_getTaskExecutor_6b5167fa945aacff,
            mid_getTimeout_f8dbdf3c43b86efc,
            mid_getTopReaderContext_e36732b57bae0675,
            mid_rewrite_f1d2a5e3e65d181f,
            mid_search_9bd8817aa65bcbf8,
            mid_search_f04edcfde08e5cc3,
            mid_search_1c4e1cb2fa5fe14d,
            mid_search_1f0004eeea9478ca,
            mid_search_a8f8719249ead3fe,
            mid_searchAfter_bbe02f6132b6cb15,
            mid_searchAfter_23305789476c20d9,
            mid_searchAfter_3db35bed067ffc5e,
            mid_setDefaultQueryCache_7c600952a40f0076,
            mid_setDefaultQueryCachingPolicy_8efa72bd23f207e7,
            mid_setMaxClauseCount_540b2b23d51b1efd,
            mid_setQueryCache_7c600952a40f0076,
            mid_setQueryCachingPolicy_8efa72bd23f207e7,
            mid_setSimilarity_8ae0f58eeda358f3,
            mid_setTimeout_3347031fd3feff35,
            mid_slices_d7fdb08aac2f1a4e,
            mid_storedFields_71d351a09c9e3356,
            mid_termStatistics_588bd34a1c000f98,
            mid_timedOut_947277eca0748c4e,
            mid_toString_09a7afff1868fc5e,
            mid_searchLeaf_1eb264333444a388,
            mid_slices_497c2d38d97664b3,
            mid_explain_69391610749d39b2,
            mid_search_e8642360b3eaf6c0,
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
