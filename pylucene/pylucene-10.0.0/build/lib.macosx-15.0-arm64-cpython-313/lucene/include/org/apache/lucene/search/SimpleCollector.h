#ifndef org_apache_lucene_search_SimpleCollector_H
#define org_apache_lucene_search_SimpleCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable;
        class LeafCollector;
        class Collector;
      }
      namespace index {
        class LeafReaderContext;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class SimpleCollector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_collect_540b2b23d51b1efd,
            mid_getLeafCollector_aca3f888603431e1,
            mid_setScorer_dd42dde4c0a7db1e,
            mid_doSetNextReader_b7b06dce0a4097ed,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SimpleCollector(const SimpleCollector& obj) : ::java::lang::Object(obj) {}

          SimpleCollector();

          void collect(jint) const;
          ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
          void setScorer(const ::org::apache::lucene::search::Scorable &) const;
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
        extern PyType_Def PY_TYPE_DEF(SimpleCollector);
        extern PyTypeObject *PY_TYPE(SimpleCollector);

        class t_SimpleCollector {
        public:
          PyObject_HEAD
          SimpleCollector object;
          static PyObject *wrap_Object(const SimpleCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
