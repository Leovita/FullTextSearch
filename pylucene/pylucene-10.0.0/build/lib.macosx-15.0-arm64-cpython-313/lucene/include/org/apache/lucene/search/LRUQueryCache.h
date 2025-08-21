#ifndef org_apache_lucene_search_LRUQueryCache_H
#define org_apache_lucene_search_LRUQueryCache_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class QueryCache;
        class QueryCachingPolicy;
        class Weight;
      }
      namespace util {
        class Accountable;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
    namespace function {
      class Predicate;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class LRUQueryCache : public ::java::lang::Object {
         public:
          enum {
            mid_init$_52c53d6e59b40db2,
            mid_init$_1b4f92fab6ac90bb,
            mid_clear_3720c61b0679eb3e,
            mid_clearCoreCacheKey_eb61ef4d1db15d08,
            mid_clearQuery_d7278af460a7b96a,
            mid_doCache_5bc1183793ec7adb,
            mid_getCacheCount_16939d9d0a9a9721,
            mid_getCacheSize_16939d9d0a9a9721,
            mid_getChildResources_aa58b3beec16cbbd,
            mid_getEvictionCount_16939d9d0a9a9721,
            mid_getHitCount_16939d9d0a9a9721,
            mid_getMissCount_16939d9d0a9a9721,
            mid_getTotalCount_16939d9d0a9a9721,
            mid_ramBytesUsed_16939d9d0a9a9721,
            mid_onMiss_c5f49f8a7c450a79,
            mid_onHit_c5f49f8a7c450a79,
            mid_onQueryCache_f2dce92de689b76c,
            mid_onDocIdSetEviction_7193e7f25b723f65,
            mid_onQueryEviction_f2dce92de689b76c,
            mid_onClear_3720c61b0679eb3e,
            mid_onDocIdSetCache_9ac1fb76fd0532e9,
            mid_cacheImpl_e437c9e703655dab,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LRUQueryCache(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LRUQueryCache(const LRUQueryCache& obj) : ::java::lang::Object(obj) {}

          LRUQueryCache(jint, jlong);
          LRUQueryCache(jint, jlong, const ::java::util::function::Predicate &, jfloat);

          void clear() const;
          void clearCoreCacheKey(const ::java::lang::Object &) const;
          void clearQuery(const ::org::apache::lucene::search::Query &) const;
          ::org::apache::lucene::search::Weight doCache(const ::org::apache::lucene::search::Weight &, const ::org::apache::lucene::search::QueryCachingPolicy &) const;
          jlong getCacheCount() const;
          jlong getCacheSize() const;
          ::java::util::Collection getChildResources() const;
          jlong getEvictionCount() const;
          jlong getHitCount() const;
          jlong getMissCount() const;
          jlong getTotalCount() const;
          jlong ramBytesUsed() const;
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
        extern PyType_Def PY_TYPE_DEF(LRUQueryCache);
        extern PyTypeObject *PY_TYPE(LRUQueryCache);

        class t_LRUQueryCache {
        public:
          PyObject_HEAD
          LRUQueryCache object;
          static PyObject *wrap_Object(const LRUQueryCache&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
