#ifndef org_apache_lucene_monitor_MatcherFactory_H
#define org_apache_lucene_monitor_MatcherFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
      }
      namespace monitor {
        class CandidateMatcher;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class MatcherFactory : public ::java::lang::Object {
         public:
          enum {
            mid_createMatcher_3670d5647d6eb334,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MatcherFactory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MatcherFactory(const MatcherFactory& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::monitor::CandidateMatcher createMatcher(const ::org::apache::lucene::search::IndexSearcher &) const;
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
        extern PyType_Def PY_TYPE_DEF(MatcherFactory);
        extern PyTypeObject *PY_TYPE(MatcherFactory);

        class t_MatcherFactory {
        public:
          PyObject_HEAD
          MatcherFactory object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MatcherFactory *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MatcherFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MatcherFactory&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
