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
            mid_init$_3720c61b0679eb3e,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_r_KER_947277eca0748c4e,
            mid_r_SUFFIX_AN_OK_947277eca0748c4e,
            mid_r_SUFFIX_I_OK_947277eca0748c4e,
            mid_r_SUFFIX_KAN_OK_947277eca0748c4e,
            mid_r_VOWEL_947277eca0748c4e,
            mid_stem_947277eca0748c4e,
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
