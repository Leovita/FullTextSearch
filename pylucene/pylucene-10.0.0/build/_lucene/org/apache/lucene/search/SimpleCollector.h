#ifndef org_apache_lucene_search_SimpleCollector_H
#define org_apache_lucene_search_SimpleCollector_H

#include "java/lang/Object.h"

namespace java {
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class SimpleCollector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_collect_8226bd0b0fc13dba,
            mid_getLeafCollector_0a34433e6da38be9,
            mid_setScorer_c06bdf7d53c6460a,
            mid_doSetNextReader_32243afefe6b151f,
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
