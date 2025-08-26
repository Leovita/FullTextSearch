#ifndef org_tartarus_snowball_ext_RussianStemmer_H
#define org_tartarus_snowball_ext_RussianStemmer_H

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

        class RussianStemmer : public ::org::tartarus::snowball::SnowballStemmer {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_stem_9aa4f33e82ea333f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RussianStemmer(jobject obj) : ::org::tartarus::snowball::SnowballStemmer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RussianStemmer(const RussianStemmer& obj) : ::org::tartarus::snowball::SnowballStemmer(obj) {}

          RussianStemmer();

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
        extern PyType_Def PY_TYPE_DEF(RussianStemmer);
        extern PyTypeObject *PY_TYPE(RussianStemmer);

        class t_RussianStemmer {
        public:
          PyObject_HEAD
          RussianStemmer object;
          static PyObject *wrap_Object(const RussianStemmer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
