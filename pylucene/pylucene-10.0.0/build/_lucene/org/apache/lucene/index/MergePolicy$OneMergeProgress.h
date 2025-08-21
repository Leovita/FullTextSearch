#ifndef org_apache_lucene_index_MergePolicy$OneMergeProgress_H
#define org_apache_lucene_index_MergePolicy$OneMergeProgress_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergePolicy$OneMergeProgress$PauseReason;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class InterruptedException;
    class Long;
  }
  namespace util {
    namespace function {
      class BooleanSupplier;
    }
    class Map;
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
            mid_init$_3720c61b0679eb3e,
            mid_abort_3720c61b0679eb3e,
            mid_getPauseTimes_f125f26c07a7bec8,
            mid_isAborted_947277eca0748c4e,
            mid_pauseNanos_c5cf46ae70ca1b02,
            mid_wakeup_3720c61b0679eb3e,
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
