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
                  mid_clear_3720c61b0679eb3e,
                  mid_freeze_3720c61b0679eb3e,
                  mid_get_ae22d3a856ad56f1,
                  mid_nextOrd_20fbf7565993c3d7,
                  mid_set_540b2b23d51b1efd,
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
