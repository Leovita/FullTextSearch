#ifndef org_apache_lucene_queries_payloads_PayloadMatcherFactory_H
#define org_apache_lucene_queries_payloads_PayloadMatcherFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace payloads {
          class SpanPayloadCheckQuery$PayloadType;
          class SpanPayloadCheckQuery$MatchOperation;
          class PayloadMatcher;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace payloads {

          class PayloadMatcherFactory : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_createMatcherForOpAndType_ff21ea0cd2e352b0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadMatcherFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PayloadMatcherFactory(const PayloadMatcherFactory& obj) : ::java::lang::Object(obj) {}

            PayloadMatcherFactory();

            static ::org::apache::lucene::queries::payloads::PayloadMatcher createMatcherForOpAndType(const ::org::apache::lucene::queries::payloads::SpanPayloadCheckQuery$PayloadType &, const ::org::apache::lucene::queries::payloads::SpanPayloadCheckQuery$MatchOperation &);
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
          extern PyType_Def PY_TYPE_DEF(PayloadMatcherFactory);
          extern PyTypeObject *PY_TYPE(PayloadMatcherFactory);

          class t_PayloadMatcherFactory {
          public:
            PyObject_HEAD
            PayloadMatcherFactory object;
            static PyObject *wrap_Object(const PayloadMatcherFactory&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
