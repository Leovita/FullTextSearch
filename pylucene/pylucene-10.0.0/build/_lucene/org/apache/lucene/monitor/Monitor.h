#ifndef org_apache_lucene_monitor_Monitor_H
#define org_apache_lucene_monitor_Monitor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class MatchingQueries;
        class MatcherFactory;
        class Presearcher;
        class MonitorQuery;
        class MonitorUpdateListener;
        class Monitor$QueryCacheStats;
        class PresearcherMatches;
        class MonitorConfiguration;
        class MultiMatchingQueries;
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
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
    class String;
    class Iterable;
  }
  namespace util {
    class List;
    class Set;
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
            mid_init$_07cd0f76cabcf75a,
            mid_init$_fa8294f9ecc5c90b,
            mid_init$_15dd7023193779b5,
            mid_init$_08c9d4cd1214f654,
            mid_addQueryIndexUpdateListener_a70f90c57a7000c4,
            mid_clear_3720c61b0679eb3e,
            mid_close_3720c61b0679eb3e,
            mid_debug_ef43d341336a4ed2,
            mid_debug_03b1065f416c3826,
            mid_deleteById_ce41e621b30e91b1,
            mid_deleteById_9425cd4f62c94bce,
            mid_getDisjunctCount_20fbf7565993c3d7,
            mid_getQuery_5978956539f9ba8e,
            mid_getQueryCacheStats_bc15b79c7406bee3,
            mid_getQueryCount_20fbf7565993c3d7,
            mid_getQueryIds_4df174295554d7bd,
            mid_match_1c87acb0fe0395dd,
            mid_match_4f55c2804a978138,
            mid_purgeCache_3720c61b0679eb3e,
            mid_register_de072233b7ecd14e,
            mid_register_eb4b05d4345caaf0,
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
