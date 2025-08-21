#ifndef org_apache_lucene_monitor_MonitorConfiguration_H
#define org_apache_lucene_monitor_MonitorConfiguration_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class QueryDecomposer;
        class MonitorQuerySerializer;
        class MonitorConfiguration;
      }
      namespace index {
        class IndexWriter;
      }
      namespace util {
        class IOSupplier;
      }
      namespace store {
        class Directory;
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
  namespace util {
    namespace concurrent {
      class TimeUnit;
    }
  }
  namespace nio {
    namespace file {
      class Path;
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
            mid_init$_3720c61b0679eb3e,
            mid_buildIndexWriter_3b7bf1abcd5bd7c1,
            mid_getDirectoryProvider_1dbee8b21f6095f0,
            mid_getPurgeFrequency_16939d9d0a9a9721,
            mid_getPurgeFrequencyUnits_6d3e678510aa5794,
            mid_getQueryDecomposer_af40e520a76d6bc4,
            mid_getQuerySerializer_3f7f932c604adf0f,
            mid_getQueryUpdateBufferSize_20fbf7565993c3d7,
            mid_isReadOnly_947277eca0748c4e,
            mid_setDirectoryProvider_515171a47b250350,
            mid_setDirectoryProvider_dc5cb23d44739abc,
            mid_setIndexPath_0e0652c81712276e,
            mid_setPurgeFrequency_75ee080a170a4225,
            mid_setQueryDecomposer_62b6f44969dad40f,
            mid_setQueryUpdateBufferSize_017b03d56db840c4,
            mid_getIndexWriterConfig_48ddfd77112ab74b,
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
