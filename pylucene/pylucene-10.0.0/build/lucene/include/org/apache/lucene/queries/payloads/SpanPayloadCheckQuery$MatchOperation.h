#ifndef org_apache_lucene_queries_payloads_SpanPayloadCheckQuery$MatchOperation_H
#define org_apache_lucene_queries_payloads_SpanPayloadCheckQuery$MatchOperation_H

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
          class SpanPayloadCheckQuery$MatchOperation;
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

          class SpanPayloadCheckQuery$MatchOperation : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_bdeea44d08ab734a,
              mid_values_ed611eeea27955f8,
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
