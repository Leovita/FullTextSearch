#ifndef org_apache_lucene_queries_payloads_SpanPayloadCheckQuery$MatchOperation_H
#define org_apache_lucene_queries_payloads_SpanPayloadCheckQuery$MatchOperation_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace payloads {
          class SpanPayloadCheckQuery$MatchOperation;
        }
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
      namespace queries {
        namespace payloads {

          class SpanPayloadCheckQuery$MatchOperation : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_acd039bfe78eb280,
              mid_values_b589652a5dd2746f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanPayloadCheckQuery$MatchOperation(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanPayloadCheckQuery$MatchOperation(const SpanPayloadCheckQuery$MatchOperation& obj) : ::java::lang::Enum(obj) {}

            static SpanPayloadCheckQuery$MatchOperation *EQ;
            static SpanPayloadCheckQuery$MatchOperation *GT;
            static SpanPayloadCheckQuery$MatchOperation *GTE;
            static SpanPayloadCheckQuery$MatchOperation *LT;
            static SpanPayloadCheckQuery$MatchOperation *LTE;

            static SpanPayloadCheckQuery$MatchOperation valueOf(const ::java::lang::String &);
            static JArray< SpanPayloadCheckQuery$MatchOperation > values();
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
          extern PyType_Def PY_TYPE_DEF(SpanPayloadCheckQuery$MatchOperation);
          extern PyTypeObject *PY_TYPE(SpanPayloadCheckQuery$MatchOperation);

          class t_SpanPayloadCheckQuery$MatchOperation {
          public:
            PyObject_HEAD
            SpanPayloadCheckQuery$MatchOperation object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SpanPayloadCheckQuery$MatchOperation *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SpanPayloadCheckQuery$MatchOperation&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SpanPayloadCheckQuery$MatchOperation&, PyTypeObject *);
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
