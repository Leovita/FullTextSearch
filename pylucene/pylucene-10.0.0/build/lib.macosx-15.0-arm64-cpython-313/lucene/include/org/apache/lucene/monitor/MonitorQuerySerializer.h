#ifndef org_apache_lucene_monitor_MonitorQuerySerializer_H
#define org_apache_lucene_monitor_MonitorQuerySerializer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace util {
        class BytesRef;
      }
      namespace monitor {
        class MonitorQuery;
        class MonitorQuerySerializer;
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
    namespace function {
      class Function;
    }
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
            mid_deserialize_7cd403c61c10d0ec,
            mid_fromParser_34e81447294c7f42,
            mid_serialize_28eb3b82dece866f,
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
