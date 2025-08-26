#ifndef org_apache_lucene_search_FilterLeafCollector_H
#define org_apache_lucene_search_FilterLeafCollector_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable;
        class LeafCollector;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FilterLeafCollector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_687d9d1ce59ed6e0,
            mid_collect_8226bd0b0fc13dba,
            mid_finish_e7bdbe105ce1bafb,
            mid_setScorer_c06bdf7d53c6460a,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterLeafCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterLeafCollector(const FilterLeafCollector& obj) : ::java::lang::Object(obj) {}

          FilterLeafCollector(const ::org::apache::lucene::search::LeafCollector &);

          void collect(jint) const;
          void finish() const;
          void setScorer(const ::org::apache::lucene::search::Scorable &) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterLeafCollector);
        extern PyTypeObject *PY_TYPE(FilterLeafCollector);

        class t_FilterLeafCollector {
        public:
          PyObject_HEAD
          FilterLeafCollector object;
          static PyObject *wrap_Object(const FilterLeafCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
