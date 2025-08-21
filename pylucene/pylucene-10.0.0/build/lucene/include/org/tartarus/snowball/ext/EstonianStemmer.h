#ifndef org_tartarus_snowball_ext_EstonianStemmer_H
#define org_tartarus_snowball_ext_EstonianStemmer_H

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

        class EstonianStemmer : public ::org::tartarus::snowball::SnowballStemmer {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_stem_947277eca0748c4e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EstonianStemmer(jobject obj) : ::org::tartarus::snowball::SnowballStemmer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EstonianStemmer(const EstonianStemmer& obj) : ::org::tartarus::snowball::SnowballStemmer(obj) {}

          EstonianStemmer();

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(EstonianStemmer);
        extern PyTypeObject *PY_TYPE(EstonianStemmer);

        class t_EstonianStemmer {
        public:
          PyObject_HEAD
          EstonianStemmer object;
          static PyObject *wrap_Object(const EstonianStemmer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
