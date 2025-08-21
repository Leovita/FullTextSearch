#ifndef org_apache_lucene_search_UsageTrackingQueryCachingPolicy_H
#define org_apache_lucene_search_UsageTrackingQueryCachingPolicy_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class QueryCachingPolicy;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class UsageTrackingQueryCachingPolicy : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_init$_540b2b23d51b1efd,
            mid_onUse_d7278af460a7b96a,
            mid_shouldCache_d00a8af12757838c,
            mid_minFrequencyToCache_51f2321ccdd2e47d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UsageTrackingQueryCachingPolicy(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UsageTrackingQueryCachingPolicy(const UsageTrackingQueryCachingPolicy& obj) : ::java::lang::Object(obj) {}

          UsageTrackingQueryCachingPolicy();
          UsageTrackingQueryCachingPolicy(jint);

          void onUse(const ::org::apache::lucene::search::Query &) const;
          jboolean shouldCache(const ::org::apache::lucene::search::Query &) const;
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
        extern PyType_Def PY_TYPE_DEF(UsageTrackingQueryCachingPolicy);
        extern PyTypeObject *PY_TYPE(UsageTrackingQueryCachingPolicy);

        class t_UsageTrackingQueryCachingPolicy {
        public:
          PyObject_HEAD
          UsageTrackingQueryCachingPolicy object;
          static PyObject *wrap_Object(const UsageTrackingQueryCachingPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
