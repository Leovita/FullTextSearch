#ifndef org_apache_lucene_backward_codecs_lucene91_Lucene91BoundsChecker$Max_H
#define org_apache_lucene_backward_codecs_lucene91_Lucene91BoundsChecker$Max_H

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

          class Lucene91BoundsChecker$Max : public ::org::apache::lucene::backward_codecs::lucene91::Lucene91BoundsChecker {
           public:
            enum {
              mid_check_ed8290af1db6b7df,
              mid_update_c771a95b0227fb6a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene91BoundsChecker$Max(jobject obj) : ::org::apache::lucene::backward_codecs::lucene91::Lucene91BoundsChecker(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene91BoundsChecker$Max(const Lucene91BoundsChecker$Max& obj) : ::org::apache::lucene::backward_codecs::lucene91::Lucene91BoundsChecker(obj) {}

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
          extern PyType_Def PY_TYPE_DEF(Lucene91BoundsChecker$Max);
          extern PyTypeObject *PY_TYPE(Lucene91BoundsChecker$Max);

          class t_Lucene91BoundsChecker$Max {
          public:
            PyObject_HEAD
            Lucene91BoundsChecker$Max object;
            static PyObject *wrap_Object(const Lucene91BoundsChecker$Max&);
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
