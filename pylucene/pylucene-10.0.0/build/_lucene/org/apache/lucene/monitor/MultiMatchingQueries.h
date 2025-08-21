#ifndef org_apache_lucene_monitor_MultiMatchingQueries_H
#define org_apache_lucene_monitor_MultiMatchingQueries_H

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

        class MultiMatchingQueries : public ::java::lang::Object {
         public:
          enum {
            mid_getBatchSize_20fbf7565993c3d7,
            mid_getErrors_f125f26c07a7bec8,
            mid_getMatchCount_3c9bba330f083871,
            mid_getMatches_2e794aa7732e7a67,
            mid_getQueriesRun_20fbf7565993c3d7,
            mid_getQueryBuildTime_16939d9d0a9a9721,
            mid_getSearchTime_16939d9d0a9a9721,
            mid_matches_c4c506afc337af7e,
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
