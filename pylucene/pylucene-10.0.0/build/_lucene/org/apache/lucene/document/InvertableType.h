#ifndef org_apache_lucene_document_InvertableType_H
#define org_apache_lucene_document_InvertableType_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class InvertableType;
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
      namespace document {

        class InvertableType : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_b3b1448c10b1e236,
            mid_values_1624f35bd8231b99,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InvertableType(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          InvertableType(const InvertableType& obj) : ::java::lang::Enum(obj) {}

          static InvertableType *BINARY;
          static InvertableType *TOKEN_STREAM;

          static InvertableType valueOf(const ::java::lang::String &);
          static JArray< InvertableType > values();
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
        extern PyType_Def PY_TYPE_DEF(InvertableType);
        extern PyTypeObject *PY_TYPE(InvertableType);

        class t_InvertableType {
        public:
          PyObject_HEAD
          InvertableType object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_InvertableType *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const InvertableType&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const InvertableType&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
