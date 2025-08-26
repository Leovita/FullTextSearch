#ifndef org_apache_lucene_monitor_MonitorConfiguration_H
#define org_apache_lucene_monitor_MonitorConfiguration_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class MonitorConfiguration;
        class QueryDecomposer;
        class MonitorQuerySerializer;
      }
      namespace store {
        class Directory;
      }
      namespace index {
        class IndexWriter;
      }
      namespace util {
        class IOSupplier;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Boolean;
  }
  namespace io {
    class IOException;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
  namespace util {
    namespace concurrent {
      class TimeUnit;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class MonitorConfiguration : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_buildIndexWriter_7f6c4f10208f72b7,
            mid_getDirectoryProvider_25300918e0bc2501,
            mid_getPurgeFrequency_0f176418e3e16541,
            mid_getPurgeFrequencyUnits_f75da27545d7a3b0,
            mid_getQueryDecomposer_27b3aa9f7dba2fa4,
            mid_getQuerySerializer_444a73dcab46a928,
            mid_getQueryUpdateBufferSize_bd89ce15dad49192,
            mid_isReadOnly_9aa4f33e82ea333f,
            mid_setDirectoryProvider_e0383ba0e1a82a1e,
            mid_setDirectoryProvider_5cf89d6ad66e825a,
            mid_setIndexPath_267594603a8cb465,
            mid_setPurgeFrequency_1af7371e7f5c5d61,
            mid_setQueryDecomposer_852a8d2d9e8e193b,
            mid_setQueryUpdateBufferSize_d0c894c96c176488,
            mid_getIndexWriterConfig_da28bb1eeb056abd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MonitorConfiguration(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MonitorConfiguration(const MonitorConfiguration& obj) : ::java::lang::Object(obj) {}

          MonitorConfiguration();

          ::org::apache::lucene::index::IndexWriter buildIndexWriter() const;
          ::org::apache::lucene::util::IOSupplier getDirectoryProvider() const;
          jlong getPurgeFrequency() const;
          ::java::util::concurrent::TimeUnit getPurgeFrequencyUnits() const;
          ::org::apache::lucene::monitor::QueryDecomposer getQueryDecomposer() const;
          ::org::apache::lucene::monitor::MonitorQuerySerializer getQuerySerializer() const;
          jint getQueryUpdateBufferSize() const;
          jboolean isReadOnly() const;
          MonitorConfiguration setDirectoryProvider(const ::org::apache::lucene::util::IOSupplier &, const ::org::apache::lucene::monitor::MonitorQuerySerializer &) const;
          MonitorConfiguration setDirectoryProvider(const ::org::apache::lucene::util::IOSupplier &, const ::org::apache::lucene::monitor::MonitorQuerySerializer &, const ::java::lang::Boolean &) const;
          MonitorConfiguration setIndexPath(const ::java::nio::file::Path &, const ::org::apache::lucene::monitor::MonitorQuerySerializer &) const;
          MonitorConfiguration setPurgeFrequency(jlong, const ::java::util::concurrent::TimeUnit &) const;
          MonitorConfiguration setQueryDecomposer(const ::org::apache::lucene::monitor::QueryDecomposer &) const;
          MonitorConfiguration setQueryUpdateBufferSize(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(MonitorConfiguration);
        extern PyTypeObject *PY_TYPE(MonitorConfiguration);

        class t_MonitorConfiguration {
        public:
          PyObject_HEAD
          MonitorConfiguration object;
          static PyObject *wrap_Object(const MonitorConfiguration&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
