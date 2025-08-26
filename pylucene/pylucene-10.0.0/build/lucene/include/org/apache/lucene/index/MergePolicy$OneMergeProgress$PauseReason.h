#ifndef org_apache_lucene_index_MergePolicy$OneMergeProgress$PauseReason_H
#define org_apache_lucene_index_MergePolicy$OneMergeProgress$PauseReason_H

#include "java/lang/Enum.h"

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
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MergePolicy$OneMergeProgress$PauseReason : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_35993fa1f3a6b9ad,
            mid_values_67cd7f4af1202739,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergePolicy$OneMergeProgress$PauseReason(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergePolicy$OneMergeProgress$PauseReason(const MergePolicy$OneMergeProgress$PauseReason& obj) : ::java::lang::Enum(obj) {}

          static MergePolicy$OneMergeProgress$PauseReason *OTHER;
          static MergePolicy$OneMergeProgress$PauseReason *PAUSED;
          static MergePolicy$OneMergeProgress$PauseReason *STOPPED;

          static MergePolicy$OneMergeProgress$PauseReason valueOf(const ::java::lang::String &);
          static JArray< MergePolicy$OneMergeProgress$PauseReason > values();
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
        extern PyType_Def PY_TYPE_DEF(MergePolicy$OneMergeProgress$PauseReason);
        extern PyTypeObject *PY_TYPE(MergePolicy$OneMergeProgress$PauseReason);

        class t_MergePolicy$OneMergeProgress$PauseReason {
        public:
          PyObject_HEAD
          MergePolicy$OneMergeProgress$PauseReason object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MergePolicy$OneMergeProgress$PauseReason *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MergePolicy$OneMergeProgress$PauseReason&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MergePolicy$OneMergeProgress$PauseReason&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
