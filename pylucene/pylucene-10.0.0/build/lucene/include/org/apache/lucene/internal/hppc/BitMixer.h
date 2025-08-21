#ifndef org_apache_lucene_internal_hppc_BitMixer_H
#define org_apache_lucene_internal_hppc_BitMixer_H

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
      namespace internal {
        namespace hppc {

          class BitMixer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_mix_9e29d85df323014f,
              mid_mix_99c33562a336f6e9,
              mid_mix_03c0863338a48004,
              mid_mix_739cf609cad4f3fa,
              mid_mix_3c9bba330f083871,
              mid_mix_657656e6a597f732,
              mid_mix_35c872f03f347c10,
              mid_mix_5b696a917598fdf2,
              mid_mix32_3c9bba330f083871,
              mid_mix64_91d66fa3ea476cea,
              mid_mixPhi_9e29d85df323014f,
              mid_mixPhi_99c33562a336f6e9,
              mid_mixPhi_03c0863338a48004,
              mid_mixPhi_739cf609cad4f3fa,
              mid_mixPhi_3c9bba330f083871,
              mid_mixPhi_657656e6a597f732,
              mid_mixPhi_35c872f03f347c10,
              mid_mixPhi_5b696a917598fdf2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BitMixer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BitMixer(const BitMixer& obj) : ::java::lang::Object(obj) {}

            BitMixer();

            static jint mix(jbyte);
            static jint mix(jchar);
            static jint mix(jdouble);
            static jint mix(jfloat);
            static jint mix(jint);
            static jint mix(const ::java::lang::Object &);
            static jint mix(jlong);
            static jint mix(jshort);
            static jint mix32(jint);
            static jlong mix64(jlong);
            static jint mixPhi(jbyte);
            static jint mixPhi(jchar);
            static jint mixPhi(jdouble);
            static jint mixPhi(jfloat);
            static jint mixPhi(jint);
            static jint mixPhi(const ::java::lang::Object &);
            static jint mixPhi(jlong);
            static jint mixPhi(jshort);
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
      namespace internal {
        namespace hppc {
          extern PyType_Def PY_TYPE_DEF(BitMixer);
          extern PyTypeObject *PY_TYPE(BitMixer);

          class t_BitMixer {
          public:
            PyObject_HEAD
            BitMixer object;
            static PyObject *wrap_Object(const BitMixer&);
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
