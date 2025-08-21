#ifndef org_apache_lucene_index_DocValuesSkipIndexType_H
#define org_apache_lucene_index_DocValuesSkipIndexType_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class DocValuesSkipIndexType;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class DocValuesSkipIndexType : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_55a30a3f992d8d8b,
            mid_values_e2d039d33e11b4dd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesSkipIndexType(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesSkipIndexType(const DocValuesSkipIndexType& obj) : ::java::lang::Enum(obj) {}

          static DocValuesSkipIndexType *NONE;
          static DocValuesSkipIndexType *RANGE;

          static DocValuesSkipIndexType valueOf(const ::java::lang::String &);
          static JArray< DocValuesSkipIndexType > values();
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
        extern PyType_Def PY_TYPE_DEF(DocValuesSkipIndexType);
        extern PyTypeObject *PY_TYPE(DocValuesSkipIndexType);

        class t_DocValuesSkipIndexType {
        public:
          PyObject_HEAD
          DocValuesSkipIndexType object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DocValuesSkipIndexType *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DocValuesSkipIndexType&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DocValuesSkipIndexType&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
