#ifndef org_apache_lucene_queries_payloads_SpanPayloadCheckQuery$PayloadType_H
#define org_apache_lucene_queries_payloads_SpanPayloadCheckQuery$PayloadType_H

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
      namespace queries {
        namespace payloads {
          class SpanPayloadCheckQuery$PayloadType;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace payloads {

          class SpanPayloadCheckQuery$PayloadType : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_62509b4009df92a0,
              mid_values_5a00227d13ed5180,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanPayloadCheckQuery$PayloadType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanPayloadCheckQuery$PayloadType(const SpanPayloadCheckQuery$PayloadType& obj) : ::java::lang::Enum(obj) {}

            static SpanPayloadCheckQuery$PayloadType *FLOAT;
            static SpanPayloadCheckQuery$PayloadType *INT;
            static SpanPayloadCheckQuery$PayloadType *STRING;

            static SpanPayloadCheckQuery$PayloadType valueOf(const ::java::lang::String &);
            static JArray< SpanPayloadCheckQuery$PayloadType > values();
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
      namespace queries {
        namespace payloads {
          extern PyType_Def PY_TYPE_DEF(SpanPayloadCheckQuery$PayloadType);
          extern PyTypeObject *PY_TYPE(SpanPayloadCheckQuery$PayloadType);

          class t_SpanPayloadCheckQuery$PayloadType {
          public:
            PyObject_HEAD
            SpanPayloadCheckQuery$PayloadType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SpanPayloadCheckQuery$PayloadType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SpanPayloadCheckQuery$PayloadType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SpanPayloadCheckQuery$PayloadType&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
