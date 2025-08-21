#ifndef org_apache_lucene_document_StoredValue$Type_H
#define org_apache_lucene_document_StoredValue$Type_H

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
      namespace document {
        class StoredValue$Type;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class StoredValue$Type : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_a84130c3c8a7132c,
            mid_values_b27741a1fc3be0a2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StoredValue$Type(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StoredValue$Type(const StoredValue$Type& obj) : ::java::lang::Enum(obj) {}

          static StoredValue$Type *BINARY;
          static StoredValue$Type *DOUBLE;
          static StoredValue$Type *FLOAT;
          static StoredValue$Type *INTEGER;
          static StoredValue$Type *LONG;
          static StoredValue$Type *STRING;

          static StoredValue$Type valueOf(const ::java::lang::String &);
          static JArray< StoredValue$Type > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(StoredValue$Type);
        extern PyTypeObject *PY_TYPE(StoredValue$Type);

        class t_StoredValue$Type {
        public:
          PyObject_HEAD
          StoredValue$Type object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_StoredValue$Type *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const StoredValue$Type&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const StoredValue$Type&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
