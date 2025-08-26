#ifndef org_apache_lucene_monitor_MonitorQuerySerializer_H
#define org_apache_lucene_monitor_MonitorQuerySerializer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class MonitorQuery;
        class MonitorQuerySerializer;
      }
      namespace search {
        class Query;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class Function;
    }
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class MonitorQuerySerializer : public ::java::lang::Object {
         public:
          enum {
            mid_deserialize_89b4fa7be4d6d554,
            mid_fromParser_243279dcbb930874,
            mid_serialize_20db1976d720ca4e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MonitorQuerySerializer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MonitorQuerySerializer(const MonitorQuerySerializer& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::monitor::MonitorQuery deserialize(const ::org::apache::lucene::util::BytesRef &) const;
          static MonitorQuerySerializer fromParser(const ::java::util::function::Function &);
          ::org::apache::lucene::util::BytesRef serialize(const ::org::apache::lucene::monitor::MonitorQuery &) const;
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
        extern PyType_Def PY_TYPE_DEF(MonitorQuerySerializer);
        extern PyTypeObject *PY_TYPE(MonitorQuerySerializer);

        class t_MonitorQuerySerializer {
        public:
          PyObject_HEAD
          MonitorQuerySerializer object;
          static PyObject *wrap_Object(const MonitorQuerySerializer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
