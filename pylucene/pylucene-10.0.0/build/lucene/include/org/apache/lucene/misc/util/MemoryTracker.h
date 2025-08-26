#ifndef org_apache_lucene_misc_util_MemoryTracker_H
#define org_apache_lucene_misc_util_MemoryTracker_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace util {

          class MemoryTracker : public ::java::lang::Object {
           public:
            enum {
              mid_getBytes_0f176418e3e16541,
              mid_updateBytes_1d3149fac12f2af3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MemoryTracker(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MemoryTracker(const MemoryTracker& obj) : ::java::lang::Object(obj) {}

            jlong getBytes() const;
            void updateBytes(jlong) const;
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
      namespace misc {
        namespace util {
          extern PyType_Def PY_TYPE_DEF(MemoryTracker);
          extern PyTypeObject *PY_TYPE(MemoryTracker);

          class t_MemoryTracker {
          public:
            PyObject_HEAD
            MemoryTracker object;
            static PyObject *wrap_Object(const MemoryTracker&);
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
