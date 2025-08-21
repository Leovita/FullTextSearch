#ifndef org_apache_lucene_monitor_PartitionMatcher_H
#define org_apache_lucene_monitor_PartitionMatcher_H

#include "org/apache/lucene/monitor/CandidateMatcher.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace monitor {
        class MatcherFactory;
        class QueryMatch;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    namespace concurrent {
      class ExecutorService;
    }
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class PartitionMatcher : public ::org::apache::lucene::monitor::CandidateMatcher {
         public:
          enum {
            mid_factory_7aff88c772c205b4,
            mid_factory_e535dfce16e7081e,
            mid_matchQuery_5f33980d0e5d47c7,
            mid_resolve_bdef7bbdb2bb527e,
            mid_doFinish_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PartitionMatcher(jobject obj) : ::org::apache::lucene::monitor::CandidateMatcher(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PartitionMatcher(const PartitionMatcher& obj) : ::org::apache::lucene::monitor::CandidateMatcher(obj) {}

          static ::org::apache::lucene::monitor::MatcherFactory factory(const ::java::util::concurrent::ExecutorService &, const ::org::apache::lucene::monitor::MatcherFactory &);
          static ::org::apache::lucene::monitor::MatcherFactory factory(const ::java::util::concurrent::ExecutorService &, const ::org::apache::lucene::monitor::MatcherFactory &, jint);
          void matchQuery(const ::java::lang::String &, const ::org::apache::lucene::search::Query &, const ::java::util::Map &) const;
          ::org::apache::lucene::monitor::QueryMatch resolve(const ::org::apache::lucene::monitor::QueryMatch &, const ::org::apache::lucene::monitor::QueryMatch &) const;
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
        extern PyType_Def PY_TYPE_DEF(PartitionMatcher);
        extern PyTypeObject *PY_TYPE(PartitionMatcher);

        class t_PartitionMatcher {
        public:
          PyObject_HEAD
          PartitionMatcher object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PartitionMatcher *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PartitionMatcher&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PartitionMatcher&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
