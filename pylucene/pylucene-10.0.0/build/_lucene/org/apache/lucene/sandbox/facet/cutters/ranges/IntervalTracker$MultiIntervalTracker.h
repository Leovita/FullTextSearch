#ifndef org_apache_lucene_sandbox_facet_cutters_ranges_IntervalTracker$MultiIntervalTracker_H
#define org_apache_lucene_sandbox_facet_cutters_ranges_IntervalTracker$MultiIntervalTracker_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace cutters {
            namespace ranges {

              class IntervalTracker$MultiIntervalTracker : public ::java::lang::Object {
               public:
                enum {
                  mid_clear_e7bdbe105ce1bafb,
                  mid_freeze_e7bdbe105ce1bafb,
                  mid_get_a8281eb3b9d9672d,
                  mid_nextOrd_bd89ce15dad49192,
                  mid_set_8226bd0b0fc13dba,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit IntervalTracker$MultiIntervalTracker(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                IntervalTracker$MultiIntervalTracker(const IntervalTracker$MultiIntervalTracker& obj) : ::java::lang::Object(obj) {}

                void clear() const;
                void freeze() const;
                jboolean get(jint) const;
                jint nextOrd() const;
                void set(jint) const;
              };
            }
          }
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
        namespace facet {
          namespace cutters {
            namespace ranges {
              extern PyType_Def PY_TYPE_DEF(IntervalTracker$MultiIntervalTracker);
              extern PyTypeObject *PY_TYPE(IntervalTracker$MultiIntervalTracker);

              class t_IntervalTracker$MultiIntervalTracker {
              public:
                PyObject_HEAD
                IntervalTracker$MultiIntervalTracker object;
                static PyObject *wrap_Object(const IntervalTracker$MultiIntervalTracker&);
                static PyObject *wrap_jobject(const jobject&);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif
