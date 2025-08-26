#ifndef org_apache_lucene_backward_codecs_lucene91_Lucene91BoundsChecker$Min_H
#define org_apache_lucene_backward_codecs_lucene91_Lucene91BoundsChecker$Min_H

#include "org/apache/lucene/backward_codecs/lucene91/Lucene91BoundsChecker.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene91 {

          class Lucene91BoundsChecker$Min : public ::org::apache::lucene::backward_codecs::lucene91::Lucene91BoundsChecker {
           public:
            enum {
              mid_check_bf47f881a09da8d2,
              mid_update_675f4cb9a2529ee0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene91BoundsChecker$Min(jobject obj) : ::org::apache::lucene::backward_codecs::lucene91::Lucene91BoundsChecker(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene91BoundsChecker$Min(const Lucene91BoundsChecker$Min& obj) : ::org::apache::lucene::backward_codecs::lucene91::Lucene91BoundsChecker(obj) {}

            jboolean check(jfloat) const;
            void update(jfloat) const;
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
      namespace backward_codecs {
        namespace lucene91 {
          extern PyType_Def PY_TYPE_DEF(Lucene91BoundsChecker$Min);
          extern PyTypeObject *PY_TYPE(Lucene91BoundsChecker$Min);

          class t_Lucene91BoundsChecker$Min {
          public:
            PyObject_HEAD
            Lucene91BoundsChecker$Min object;
            static PyObject *wrap_Object(const Lucene91BoundsChecker$Min&);
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
