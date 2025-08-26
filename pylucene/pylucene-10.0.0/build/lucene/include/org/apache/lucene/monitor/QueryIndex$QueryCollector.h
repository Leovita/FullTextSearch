#ifndef org_apache_lucene_monitor_QueryIndex$QueryCollector_H
#define org_apache_lucene_monitor_QueryIndex$QueryCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class QueryIndex$QueryCollector : public ::java::lang::Object {
         public:
          enum {
            mid_scoreMode_23e7061dcdc84768,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryIndex$QueryCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryIndex$QueryCollector(const QueryIndex$QueryCollector& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::search::ScoreMode scoreMode() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        extern PyType_Def PY_TYPE_DEF(QueryIndex$QueryCollector);
        extern PyTypeObject *PY_TYPE(QueryIndex$QueryCollector);

        class t_QueryIndex$QueryCollector {
        public:
          PyObject_HEAD
          QueryIndex$QueryCollector object;
          static PyObject *wrap_Object(const QueryIndex$QueryCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
