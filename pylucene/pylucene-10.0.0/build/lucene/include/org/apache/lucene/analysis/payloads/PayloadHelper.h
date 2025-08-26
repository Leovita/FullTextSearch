#ifndef org_apache_lucene_analysis_payloads_PayloadHelper_H
#define org_apache_lucene_analysis_payloads_PayloadHelper_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace payloads {

          class PayloadHelper : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_decodeFloat_d5d6cd17d22cd29f,
              mid_decodeFloat_5a5c564d6d4c0b92,
              mid_decodeInt_ae2551807aeb85ef,
              mid_encodeFloat_bb9b7c6451c9d006,
              mid_encodeFloat_5d90cfc9e65d03e9,
              mid_encodeInt_d94c1f1d0c66928c,
              mid_encodeInt_c5b8ed4b031b9774,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadHelper(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PayloadHelper(const PayloadHelper& obj) : ::java::lang::Object(obj) {}

            PayloadHelper();

            static jfloat decodeFloat(const JArray< jbyte > &);
            static jfloat decodeFloat(const JArray< jbyte > &, jint);
            static jint decodeInt(const JArray< jbyte > &, jint);
            static JArray< jbyte > encodeFloat(jfloat);
            static JArray< jbyte > encodeFloat(jfloat, const JArray< jbyte > &, jint);
            static JArray< jbyte > encodeInt(jint);
            static JArray< jbyte > encodeInt(jint, const JArray< jbyte > &, jint);
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
      namespace analysis {
        namespace payloads {
          extern PyType_Def PY_TYPE_DEF(PayloadHelper);
          extern PyTypeObject *PY_TYPE(PayloadHelper);

          class t_PayloadHelper {
          public:
            PyObject_HEAD
            PayloadHelper object;
            static PyObject *wrap_Object(const PayloadHelper&);
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
