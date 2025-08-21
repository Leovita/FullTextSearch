#ifndef org_apache_lucene_search_CachingCollector_H
#define org_apache_lucene_search_CachingCollector_H

#include "org/apache/lucene/search/FilterCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class CachingCollector;
        class Collector;
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

        class CachingCollector : public ::org::apache::lucene::search::FilterCollector {
         public:
          enum {
            mid_create_5fe38cdf4e58fed3,
            mid_create_bb683fdd55478c13,
            mid_create_ac88c73b36265455,
            mid_isCached_947277eca0748c4e,
            mid_replay_91ebd1d75c9c0390,
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
