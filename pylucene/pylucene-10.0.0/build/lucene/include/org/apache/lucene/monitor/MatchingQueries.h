#ifndef org_apache_lucene_monitor_MatchingQueries_H
#define org_apache_lucene_monitor_MatchingQueries_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Exception;
    class String;
  }
  namespace util {
    class Map;
    class Collection;
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
            mid_getErrors_5004bdf19ed33453,
            mid_getMatchCount_bd89ce15dad49192,
            mid_getMatches_4a269b968b3a511f,
            mid_getQueriesRun_bd89ce15dad49192,
            mid_getQueryBuildTime_0f176418e3e16541,
            mid_getSearchTime_0f176418e3e16541,
            mid_matches_5072618011af1efe,
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
