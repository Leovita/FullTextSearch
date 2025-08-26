#ifndef org_apache_lucene_index_MergePolicy$OneMergeProgress_H
#define org_apache_lucene_index_MergePolicy$OneMergeProgress_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class InterruptedException;
    class Class;
    class Long;
  }
  namespace util {
    class Map;
    namespace function {
      class BooleanSupplier;
    }
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergePolicy$OneMergeProgress$PauseReason;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MergePolicy$OneMergeProgress : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_abort_e7bdbe105ce1bafb,
            mid_getPauseTimes_5004bdf19ed33453,
            mid_isAborted_9aa4f33e82ea333f,
            mid_pauseNanos_6adcd456b250cace,
            mid_wakeup_e7bdbe105ce1bafb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergePolicy$OneMergeProgress(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergePolicy$OneMergeProgress(const MergePolicy$OneMergeProgress& obj) : ::java::lang::Object(obj) {}

          MergePolicy$OneMergeProgress();

          void abort() const;
          ::java::util::Map getPauseTimes() const;
          jboolean isAborted() const;
          void pauseNanos(jlong, const ::org::apache::lucene::index::MergePolicy$OneMergeProgress$PauseReason &, const ::java::util::function::BooleanSupplier &) const;
          void wakeup() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(MergePolicy$OneMergeProgress);
        extern PyTypeObject *PY_TYPE(MergePolicy$OneMergeProgress);

        class t_MergePolicy$OneMergeProgress {
        public:
          PyObject_HEAD
          MergePolicy$OneMergeProgress object;
          static PyObject *wrap_Object(const MergePolicy$OneMergeProgress&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
