#ifndef org_apache_lucene_monitor_MultiMatchingQueries_H
#define org_apache_lucene_monitor_MultiMatchingQueries_H

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

        class MultiMatchingQueries : public ::java::lang::Object {
         public:
          enum {
            mid_getBatchSize_bd89ce15dad49192,
            mid_getErrors_5004bdf19ed33453,
            mid_getMatchCount_a3904e10f5bb9437,
            mid_getMatches_92753308dd2e296d,
            mid_getQueriesRun_bd89ce15dad49192,
            mid_getQueryBuildTime_0f176418e3e16541,
            mid_getSearchTime_0f176418e3e16541,
            mid_matches_874ce1098fb1fc99,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiMatchingQueries(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiMatchingQueries(const MultiMatchingQueries& obj) : ::java::lang::Object(obj) {}

          jint getBatchSize() const;
          ::java::util::Map getErrors() const;
          jint getMatchCount(jint) const;
          ::java::util::Collection getMatches(jint) const;
          jint getQueriesRun() const;
          jlong getQueryBuildTime() const;
          jlong getSearchTime() const;
          ::org::apache::lucene::monitor::QueryMatch matches(const ::java::lang::String &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(MultiMatchingQueries);
        extern PyTypeObject *PY_TYPE(MultiMatchingQueries);

        class t_MultiMatchingQueries {
        public:
          PyObject_HEAD
          MultiMatchingQueries object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MultiMatchingQueries *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MultiMatchingQueries&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MultiMatchingQueries&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
