#ifndef org_apache_lucene_monitor_Monitor$QueryCacheStats_H
#define org_apache_lucene_monitor_Monitor$QueryCacheStats_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class Monitor$QueryCacheStats : public ::java::lang::Record {
         public:
          enum {
            mid_init$_d02046eceb4997f8,
            mid_cachedQueries_20fbf7565993c3d7,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_lastPurged_16939d9d0a9a9721,
            mid_queries_20fbf7565993c3d7,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Monitor$QueryCacheStats(jobject obj) : ::java::lang::Record(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Monitor$QueryCacheStats(const Monitor$QueryCacheStats& obj) : ::java::lang::Record(obj) {}

          Monitor$QueryCacheStats(jint, jint, jlong);

          jint cachedQueries() const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jlong lastPurged() const;
          jint queries() const;
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
        extern PyType_Def PY_TYPE_DEF(Monitor$QueryCacheStats);
        extern PyTypeObject *PY_TYPE(Monitor$QueryCacheStats);

        class t_Monitor$QueryCacheStats {
        public:
          PyObject_HEAD
          Monitor$QueryCacheStats object;
          static PyObject *wrap_Object(const Monitor$QueryCacheStats&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
