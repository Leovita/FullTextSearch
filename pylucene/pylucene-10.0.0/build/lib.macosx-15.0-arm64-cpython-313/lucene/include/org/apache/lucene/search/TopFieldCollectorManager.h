#ifndef org_apache_lucene_search_TopFieldCollectorManager_H
#define org_apache_lucene_search_TopFieldCollectorManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
        class FieldDoc;
        class CollectorManager;
        class TopFieldDocs;
        class TopFieldCollector;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
    class List;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
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
            mid_init$_44e666c68b741aad,
            mid_init$_a159a4109111ac92,
            mid_init$_4cd2517c79142b57,
            mid_getCollectors_36830460e10839eb,
            mid_newCollector_ac1b40519f46310d,
            mid_reduce_f140638060f9632c,
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
