#ifndef org_tartarus_snowball_ext_ItalianStemmer_H
#define org_tartarus_snowball_ext_ItalianStemmer_H

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

        class ItalianStemmer : public ::org::tartarus::snowball::SnowballStemmer {
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

          explicit ItalianStemmer(jobject obj) : ::org::tartarus::snowball::SnowballStemmer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ItalianStemmer(const ItalianStemmer& obj) : ::org::tartarus::snowball::SnowballStemmer(obj) {}

          ItalianStemmer();

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
        extern PyType_Def PY_TYPE_DEF(ItalianStemmer);
        extern PyTypeObject *PY_TYPE(ItalianStemmer);

        class t_ItalianStemmer {
        public:
          PyObject_HEAD
          ItalianStemmer object;
          static PyObject *wrap_Object(const ItalianStemmer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
