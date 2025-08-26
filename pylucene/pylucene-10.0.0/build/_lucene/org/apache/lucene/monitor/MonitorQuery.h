#ifndef org_apache_lucene_monitor_MonitorQuery_H
#define org_apache_lucene_monitor_MonitorQuery_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class MonitorQuery : public ::java::lang::Object {
         public:
          enum {
            mid_init$_526f2ae9dd799047,
            mid_init$_890a6a390eb7ae17,
            mid_equals_00d17418847797d4,
            mid_getId_e7df854526d67fa3,
            mid_getMetadata_5004bdf19ed33453,
            mid_getQuery_ffa7bd087b2a75aa,
            mid_getQueryString_e7df854526d67fa3,
            mid_hashCode_bd89ce15dad49192,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MonitorQuery(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MonitorQuery(const MonitorQuery& obj) : ::java::lang::Object(obj) {}

          MonitorQuery(const ::java::lang::String &, const ::org::apache::lucene::search::Query &);
          MonitorQuery(const ::java::lang::String &, const ::org::apache::lucene::search::Query &, const ::java::lang::String &, const ::java::util::Map &);

          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String getId() const;
          ::java::util::Map getMetadata() const;
          ::org::apache::lucene::search::Query getQuery() const;
          ::java::lang::String getQueryString() const;
          jint hashCode() const;
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
      namespace monitor {
        extern PyType_Def PY_TYPE_DEF(MonitorQuery);
        extern PyTypeObject *PY_TYPE(MonitorQuery);

        class t_MonitorQuery {
        public:
          PyObject_HEAD
          MonitorQuery object;
          static PyObject *wrap_Object(const MonitorQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
