#ifndef org_apache_lucene_search_FilterLeafCollector_H
#define org_apache_lucene_search_FilterLeafCollector_H

#include "java/lang/Object.h"

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
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class String;
    class Class;
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
            mid_init$_e9ba8d169ee31d75,
            mid_collect_540b2b23d51b1efd,
            mid_finish_3720c61b0679eb3e,
            mid_setScorer_dd42dde4c0a7db1e,
            mid_toString_09a7afff1868fc5e,
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
