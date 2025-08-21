#ifndef org_apache_lucene_sandbox_search_ProfilerCollectorManager_H
#define org_apache_lucene_sandbox_search_ProfilerCollectorManager_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {
          class ProfilerCollector;
          class ProfilerCollectorResult;
        }
      }
      namespace search {
        class CollectorManager;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class ProfilerCollectorManager : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0d82408c6e55bc30,
              mid_newCollector_2ce3cb533ba95c25,
              mid_reduce_0bc48f03981717d6,
              mid_createCollector_4251c3f1d651d6d9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ProfilerCollectorManager(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ProfilerCollectorManager(const ProfilerCollectorManager& obj) : ::java::lang::Object(obj) {}

            ProfilerCollectorManager(const ::java::lang::String &);

            ::org::apache::lucene::sandbox::search::ProfilerCollector newCollector() const;
            ::org::apache::lucene::sandbox::search::ProfilerCollectorResult reduce(const ::java::util::Collection &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(ProfilerCollectorManager);
          extern PyTypeObject *PY_TYPE(ProfilerCollectorManager);

          class t_ProfilerCollectorManager {
          public:
            PyObject_HEAD
            ProfilerCollectorManager object;
            static PyObject *wrap_Object(const ProfilerCollectorManager&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
