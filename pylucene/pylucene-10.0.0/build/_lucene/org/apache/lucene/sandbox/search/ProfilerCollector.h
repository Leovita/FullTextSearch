#ifndef org_apache_lucene_sandbox_search_ProfilerCollector_H
#define org_apache_lucene_sandbox_search_ProfilerCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class LeafCollector;
        class Collector;
        class Weight;
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
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
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
              mid_init$_f32de3721f345fcf,
              mid_getLeafCollector_0a34433e6da38be9,
              mid_getName_e7df854526d67fa3,
              mid_getProfileResult_a73c846bcc32fa5c,
              mid_getReason_e7df854526d67fa3,
              mid_getTime_0f176418e3e16541,
              mid_scoreMode_23e7061dcdc84768,
              mid_setWeight_36438df74a772106,
              mid_deriveCollectorName_56a2e8214ba47b1e,
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
