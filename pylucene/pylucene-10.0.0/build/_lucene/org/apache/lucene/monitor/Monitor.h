#ifndef org_apache_lucene_monitor_Monitor_H
#define org_apache_lucene_monitor_Monitor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class Monitor$QueryCacheStats;
        class MonitorConfiguration;
        class MonitorUpdateListener;
        class MonitorQuery;
        class MatchingQueries;
        class MatcherFactory;
        class MultiMatchingQueries;
        class PresearcherMatches;
        class Presearcher;
      }
      namespace document {
        class Document;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace io {
    class Closeable;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Iterable;
  }
  namespace util {
    class Set;
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class Monitor : public ::java::lang::Object {
         public:
          enum {
            mid_init$_1aaca852402a5069,
            mid_init$_16c67e4249a1ea2d,
            mid_init$_75e6172fe8c9364f,
            mid_init$_5e1958fd07ce7a5b,
            mid_addQueryIndexUpdateListener_b21aff73e74046d9,
            mid_clear_e7bdbe105ce1bafb,
            mid_close_e7bdbe105ce1bafb,
            mid_debug_5f779b935934a60a,
            mid_debug_31e0035cd08bc39c,
            mid_deleteById_1f90f2fcbe43e50d,
            mid_deleteById_acbb405b60a30822,
            mid_getDisjunctCount_bd89ce15dad49192,
            mid_getQuery_d5001b602b9f278e,
            mid_getQueryCacheStats_5fd495034e682e2e,
            mid_getQueryCount_bd89ce15dad49192,
            mid_getQueryIds_79131c6bbcf08916,
            mid_match_0fdcb8a3e3c149a2,
            mid_match_cd7500f190189686,
            mid_purgeCache_e7bdbe105ce1bafb,
            mid_register_28c83f9eb1d4cb4e,
            mid_register_e14ca79f217d88d0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Monitor(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Monitor(const Monitor& obj) : ::java::lang::Object(obj) {}

          Monitor(const ::org::apache::lucene::analysis::Analyzer &);
          Monitor(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::monitor::MonitorConfiguration &);
          Monitor(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::monitor::Presearcher &);
          Monitor(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::monitor::Presearcher &, const ::org::apache::lucene::monitor::MonitorConfiguration &);

          void addQueryIndexUpdateListener(const ::org::apache::lucene::monitor::MonitorUpdateListener &) const;
          void clear() const;
          void close() const;
          ::org::apache::lucene::monitor::PresearcherMatches debug(const JArray< ::org::apache::lucene::document::Document > &, const ::org::apache::lucene::monitor::MatcherFactory &) const;
          ::org::apache::lucene::monitor::PresearcherMatches debug(const ::org::apache::lucene::document::Document &, const ::org::apache::lucene::monitor::MatcherFactory &) const;
          void deleteById(const JArray< ::java::lang::String > &) const;
          void deleteById(const ::java::util::List &) const;
          jint getDisjunctCount() const;
          ::org::apache::lucene::monitor::MonitorQuery getQuery(const ::java::lang::String &) const;
          ::org::apache::lucene::monitor::Monitor$QueryCacheStats getQueryCacheStats() const;
          jint getQueryCount() const;
          ::java::util::Set getQueryIds() const;
          ::org::apache::lucene::monitor::MultiMatchingQueries match(const JArray< ::org::apache::lucene::document::Document > &, const ::org::apache::lucene::monitor::MatcherFactory &) const;
          ::org::apache::lucene::monitor::MatchingQueries match(const ::org::apache::lucene::document::Document &, const ::org::apache::lucene::monitor::MatcherFactory &) const;
          void purgeCache() const;
          void register$(const JArray< ::org::apache::lucene::monitor::MonitorQuery > &) const;
          void register$(const ::java::lang::Iterable &) const;
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
        extern PyType_Def PY_TYPE_DEF(Monitor);
        extern PyTypeObject *PY_TYPE(Monitor);

        class t_Monitor {
        public:
          PyObject_HEAD
          Monitor object;
          static PyObject *wrap_Object(const Monitor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
