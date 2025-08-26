#ifndef org_apache_lucene_search_LRUQueryCache_H
#define org_apache_lucene_search_LRUQueryCache_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Predicate;
    }
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class LRUQueryCache : public ::java::lang::Object {
         public:
          enum {
            mid_init$_1d43622e571bd043,
            mid_init$_681759dbf5d4e971,
            mid_clear_e7bdbe105ce1bafb,
            mid_clearCoreCacheKey_501c3eb890ff6d79,
            mid_clearQuery_a28ff1cdbaf0bf6c,
            mid_doCache_fb979ea96c449295,
            mid_getCacheCount_0f176418e3e16541,
            mid_getCacheSize_0f176418e3e16541,
            mid_getChildResources_4a269b968b3a511f,
            mid_getEvictionCount_0f176418e3e16541,
            mid_getHitCount_0f176418e3e16541,
            mid_getMissCount_0f176418e3e16541,
            mid_getTotalCount_0f176418e3e16541,
            mid_ramBytesUsed_0f176418e3e16541,
            mid_onMiss_8d836ea3b7b869ea,
            mid_onHit_8d836ea3b7b869ea,
            mid_onQueryCache_d709081e2d777408,
            mid_onDocIdSetEviction_ec6ef034cb73a1fd,
            mid_onQueryEviction_d709081e2d777408,
            mid_onClear_e7bdbe105ce1bafb,
            mid_onDocIdSetCache_8076b21839806c1f,
            mid_cacheImpl_8b9253ee7e9e1ef8,
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
