#ifndef org_apache_lucene_queries_payloads_MaxPayloadFunction_H
#define org_apache_lucene_queries_payloads_MaxPayloadFunction_H

#include "org/apache/lucene/queries/payloads/PayloadFunction.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace payloads {

          class MaxPayloadFunction : public ::org::apache::lucene::queries::payloads::PayloadFunction {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_currentScore_0f6c9cf58af489b0,
              mid_docScore_170195d7c9e97239,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MaxPayloadFunction(jobject obj) : ::org::apache::lucene::queries::payloads::PayloadFunction(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MaxPayloadFunction(const MaxPayloadFunction& obj) : ::org::apache::lucene::queries::payloads::PayloadFunction(obj) {}

            MaxPayloadFunction();

            jfloat currentScore(jint, const ::java::lang::String &, jint, jint, jint, jfloat, jfloat) const;
            jfloat docScore(jint, const ::java::lang::String &, jint, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
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
          extern PyType_Def PY_TYPE_DEF(MaxPayloadFunction);
          extern PyTypeObject *PY_TYPE(MaxPayloadFunction);

          class t_MaxPayloadFunction {
          public:
            PyObject_HEAD
            MaxPayloadFunction object;
            static PyObject *wrap_Object(const MaxPayloadFunction&);
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
