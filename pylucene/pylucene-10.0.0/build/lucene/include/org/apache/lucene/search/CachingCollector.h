#ifndef org_apache_lucene_search_CachingCollector_H
#define org_apache_lucene_search_CachingCollector_H

#include "org/apache/lucene/search/FilterCollector.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Collector;
        class CachingCollector;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class CachingCollector : public ::org::apache::lucene::search::FilterCollector {
         public:
          enum {
            mid_create_838bf97beb7644f3,
            mid_create_d57563faff1a2754,
            mid_create_b4ef739cf3457447,
            mid_isCached_9aa4f33e82ea333f,
            mid_replay_01adb891a2ac56dc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CachingCollector(jobject obj) : ::org::apache::lucene::search::FilterCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CachingCollector(const CachingCollector& obj) : ::org::apache::lucene::search::FilterCollector(obj) {}

          static CachingCollector create(jboolean, jdouble);
          static CachingCollector create(const ::org::apache::lucene::search::Collector &, jboolean, jdouble);
          static CachingCollector create(const ::org::apache::lucene::search::Collector &, jboolean, jint);
          jboolean isCached() const;
          void replay(const ::org::apache::lucene::search::Collector &) const;
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
        extern PyType_Def PY_TYPE_DEF(CachingCollector);
        extern PyTypeObject *PY_TYPE(CachingCollector);

        class t_CachingCollector {
        public:
          PyObject_HEAD
          CachingCollector object;
          static PyObject *wrap_Object(const CachingCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
