#ifndef org_apache_lucene_index_CheckIndex$Status$VectorValuesStatus_H
#define org_apache_lucene_index_CheckIndex$Status$VectorValuesStatus_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CheckIndex$Status$VectorValuesStatus : public ::java::lang::Object {
         public:

          enum {
            fid_error,
            fid_totalKnnVectorFields,
            fid_totalVectorValues,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex$Status$VectorValuesStatus(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CheckIndex$Status$VectorValuesStatus(const CheckIndex$Status$VectorValuesStatus& obj) : ::java::lang::Object(obj) {}

          ::java::lang::Throwable _get_error() const;
          void _set_error(const ::java::lang::Throwable &) const;
          jint _get_totalKnnVectorFields() const;
          void _set_totalKnnVectorFields(jint) const;
          jlong _get_totalVectorValues() const;
          void _set_totalVectorValues(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(CheckIndex$Status$VectorValuesStatus);
        extern PyTypeObject *PY_TYPE(CheckIndex$Status$VectorValuesStatus);

        class t_CheckIndex$Status$VectorValuesStatus {
        public:
          PyObject_HEAD
          CheckIndex$Status$VectorValuesStatus object;
          static PyObject *wrap_Object(const CheckIndex$Status$VectorValuesStatus&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
