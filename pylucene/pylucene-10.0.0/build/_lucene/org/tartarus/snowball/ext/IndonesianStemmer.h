#ifndef org_tartarus_snowball_ext_IndonesianStemmer_H
#define org_tartarus_snowball_ext_IndonesianStemmer_H

#include "org/tartarus/snowball/SnowballStemmer.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace tartarus {
    namespace snowball {
      namespace ext {

        class IndonesianStemmer : public ::org::tartarus::snowball::SnowballStemmer {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_r_KER_9aa4f33e82ea333f,
            mid_r_SUFFIX_AN_OK_9aa4f33e82ea333f,
            mid_r_SUFFIX_I_OK_9aa4f33e82ea333f,
            mid_r_SUFFIX_KAN_OK_9aa4f33e82ea333f,
            mid_r_VOWEL_9aa4f33e82ea333f,
            mid_stem_9aa4f33e82ea333f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndonesianStemmer(jobject obj) : ::org::tartarus::snowball::SnowballStemmer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndonesianStemmer(const IndonesianStemmer& obj) : ::org::tartarus::snowball::SnowballStemmer(obj) {}

          IndonesianStemmer();

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jboolean r_KER() const;
          jboolean r_SUFFIX_AN_OK() const;
          jboolean r_SUFFIX_I_OK() const;
          jboolean r_SUFFIX_KAN_OK() const;
          jboolean r_VOWEL() const;
          jboolean stem() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace tartarus {
    namespace snowball {
      namespace ext {
        extern PyType_Def PY_TYPE_DEF(IndonesianStemmer);
        extern PyTypeObject *PY_TYPE(IndonesianStemmer);

        class t_IndonesianStemmer {
        public:
          PyObject_HEAD
          IndonesianStemmer object;
          static PyObject *wrap_Object(const IndonesianStemmer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
