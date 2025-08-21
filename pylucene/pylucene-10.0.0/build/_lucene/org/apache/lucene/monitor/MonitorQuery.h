#ifndef org_apache_lucene_monitor_MonitorQuery_H
#define org_apache_lucene_monitor_MonitorQuery_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
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
    class Map;
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
            mid_init$_3a7caebbff9089ff,
            mid_init$_dc0fec6b20e6ea08,
            mid_equals_570b5248a6da3ef6,
            mid_getId_09a7afff1868fc5e,
            mid_getMetadata_f125f26c07a7bec8,
            mid_getQuery_a3eacfacada795d4,
            mid_getQueryString_09a7afff1868fc5e,
            mid_hashCode_20fbf7565993c3d7,
            mid_toString_09a7afff1868fc5e,
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
