#ifndef org_apache_lucene_sandbox_search_ProfilerCollector_H
#define org_apache_lucene_sandbox_search_ProfilerCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class LeafCollector;
        class ScoreMode;
        class Weight;
        class Collector;
      }
      namespace sandbox {
        namespace search {
          class ProfilerCollector;
          class ProfilerCollectorResult;
        }
      }
      namespace index {
        class LeafReaderContext;
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
    class List;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class ProfilerCollector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_1d03ed82d1882763,
              mid_getLeafCollector_aca3f888603431e1,
              mid_getName_09a7afff1868fc5e,
              mid_getProfileResult_c8368368d57b8b5f,
              mid_getReason_09a7afff1868fc5e,
              mid_getTime_16939d9d0a9a9721,
              mid_scoreMode_45dfdcf7e901559d,
              mid_setWeight_6d6ab2df81fdc63f,
              mid_deriveCollectorName_4db8b3367abb602e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ProfilerCollector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ProfilerCollector(const ProfilerCollector& obj) : ::java::lang::Object(obj) {}

            ProfilerCollector(const ::org::apache::lucene::search::Collector &, const ::java::lang::String &, const ::java::util::List &);

            ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::java::lang::String getName() const;
            ::org::apache::lucene::sandbox::search::ProfilerCollectorResult getProfileResult() const;
            ::java::lang::String getReason() const;
            jlong getTime() const;
            ::org::apache::lucene::search::ScoreMode scoreMode() const;
            void setWeight(const ::org::apache::lucene::search::Weight &) const;
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
          extern PyType_Def PY_TYPE_DEF(ProfilerCollector);
          extern PyTypeObject *PY_TYPE(ProfilerCollector);

          class t_ProfilerCollector {
          public:
            PyObject_HEAD
            ProfilerCollector object;
            static PyObject *wrap_Object(const ProfilerCollector&);
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
