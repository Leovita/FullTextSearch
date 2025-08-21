#ifndef org_apache_lucene_monitor_MatchingQueries_H
#define org_apache_lucene_monitor_MatchingQueries_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class Map;
  }
  namespace lang {
    class Class;
    class String;
    class Exception;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class QueryMatch;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class MatchingQueries : public ::java::lang::Object {
         public:
          enum {
            mid_getErrors_f125f26c07a7bec8,
            mid_getMatchCount_20fbf7565993c3d7,
            mid_getMatches_aa58b3beec16cbbd,
            mid_getQueriesRun_20fbf7565993c3d7,
            mid_getQueryBuildTime_16939d9d0a9a9721,
            mid_getSearchTime_16939d9d0a9a9721,
            mid_matches_9176bffc6287727c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MatchingQueries(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MatchingQueries(const MatchingQueries& obj) : ::java::lang::Object(obj) {}

          ::java::util::Map getErrors() const;
          jint getMatchCount() const;
          ::java::util::Collection getMatches() const;
          jint getQueriesRun() const;
          jlong getQueryBuildTime() const;
          jlong getSearchTime() const;
          ::org::apache::lucene::monitor::QueryMatch matches(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(MatchingQueries);
        extern PyTypeObject *PY_TYPE(MatchingQueries);

        class t_MatchingQueries {
        public:
          PyObject_HEAD
          MatchingQueries object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MatchingQueries *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MatchingQueries&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MatchingQueries&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
