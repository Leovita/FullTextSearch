#ifndef org_apache_lucene_search_TopFieldCollectorManager_H
#define org_apache_lucene_search_TopFieldCollectorManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TopFieldCollector;
        class TopFieldDocs;
        class FieldDoc;
        class Sort;
        class CollectorManager;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Collection;
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TopFieldCollectorManager : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fc7a1388a7e625b,
            mid_init$_3d4b0c0789ad27a3,
            mid_init$_166c659f22cfe178,
            mid_getCollectors_1387e1e2702ac173,
            mid_newCollector_7a01224a232cd87c,
            mid_reduce_88adba6e169c6456,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopFieldCollectorManager(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopFieldCollectorManager(const TopFieldCollectorManager& obj) : ::java::lang::Object(obj) {}

          TopFieldCollectorManager(const ::org::apache::lucene::search::Sort &, jint, jint);
          TopFieldCollectorManager(const ::org::apache::lucene::search::Sort &, jint, const ::org::apache::lucene::search::FieldDoc &, jint);
          TopFieldCollectorManager(const ::org::apache::lucene::search::Sort &, jint, const ::org::apache::lucene::search::FieldDoc &, jint, jboolean);

          ::java::util::List getCollectors() const;
          ::org::apache::lucene::search::TopFieldCollector newCollector() const;
          ::org::apache::lucene::search::TopFieldDocs reduce(const ::java::util::Collection &) const;
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
        extern PyType_Def PY_TYPE_DEF(TopFieldCollectorManager);
        extern PyTypeObject *PY_TYPE(TopFieldCollectorManager);

        class t_TopFieldCollectorManager {
        public:
          PyObject_HEAD
          TopFieldCollectorManager object;
          static PyObject *wrap_Object(const TopFieldCollectorManager&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
