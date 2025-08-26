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
              mid_init$_e7bdbe105ce1bafb,
              mid_mix_a06f8b67893a843a,
              mid_mix_71dc1db9b5187263,
              mid_mix_3f0c00a187968ea1,
              mid_mix_96b611d51a3ba940,
              mid_mix_a3904e10f5bb9437,
              mid_mix_3b738b91667a06c2,
              mid_mix_7af44747c1921bd4,
              mid_mix_2220ba279dc28466,
              mid_mix32_a3904e10f5bb9437,
              mid_mix64_3dc1c6e3a5a0baf0,
              mid_mixPhi_a06f8b67893a843a,
              mid_mixPhi_71dc1db9b5187263,
              mid_mixPhi_3f0c00a187968ea1,
              mid_mixPhi_96b611d51a3ba940,
              mid_mixPhi_a3904e10f5bb9437,
              mid_mixPhi_3b738b91667a06c2,
              mid_mixPhi_7af44747c1921bd4,
              mid_mixPhi_2220ba279dc28466,
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
