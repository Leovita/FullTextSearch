#ifndef org_apache_lucene_search_TopScoreDocCollectorManager_H
#define org_apache_lucene_search_TopScoreDocCollectorManager_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreDoc;
        class CollectorManager;
        class TopScoreDocCollector;
        class TopDocs;
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
            mid_init$_e13cff512ebda969,
            mid_init$_f4f81009269d954b,
            mid_init$_d8b936de4a06097b,
            mid_newCollector_8611ba457725a51a,
            mid_reduce_02c434fdf2333ad4,
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
