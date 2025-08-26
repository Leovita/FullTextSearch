#ifndef org_apache_lucene_search_TopScoreDocCollectorManager_H
#define org_apache_lucene_search_TopScoreDocCollectorManager_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Collection;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TopScoreDocCollector;
        class ScoreDoc;
        class TopDocs;
        class CollectorManager;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TopScoreDocCollectorManager : public ::java::lang::Object {
         public:
          enum {
            mid_init$_645c25455f5b9b1c,
            mid_init$_c558e2569f3b3ef7,
            mid_init$_37d6425003531219,
            mid_newCollector_648ac62947751f48,
            mid_reduce_39d2b1ecb79da5df,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopScoreDocCollectorManager(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopScoreDocCollectorManager(const TopScoreDocCollectorManager& obj) : ::java::lang::Object(obj) {}

          TopScoreDocCollectorManager(jint, jint);
          TopScoreDocCollectorManager(jint, const ::org::apache::lucene::search::ScoreDoc &, jint);
          TopScoreDocCollectorManager(jint, const ::org::apache::lucene::search::ScoreDoc &, jint, jboolean);

          ::org::apache::lucene::search::TopScoreDocCollector newCollector() const;
          ::org::apache::lucene::search::TopDocs reduce(const ::java::util::Collection &) const;
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
        extern PyType_Def PY_TYPE_DEF(TopScoreDocCollectorManager);
        extern PyTypeObject *PY_TYPE(TopScoreDocCollectorManager);

        class t_TopScoreDocCollectorManager {
        public:
          PyObject_HEAD
          TopScoreDocCollectorManager object;
          static PyObject *wrap_Object(const TopScoreDocCollectorManager&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
