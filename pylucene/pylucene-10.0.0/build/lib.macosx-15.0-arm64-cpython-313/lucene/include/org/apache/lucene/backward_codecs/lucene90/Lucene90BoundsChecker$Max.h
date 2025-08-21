#ifndef org_apache_lucene_backward_codecs_lucene90_Lucene90BoundsChecker$Max_H
#define org_apache_lucene_backward_codecs_lucene90_Lucene90BoundsChecker$Max_H

#include "org/apache/lucene/backward_codecs/lucene90/Lucene90BoundsChecker.h"

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
        namespace lucene90 {

          class Lucene90BoundsChecker$Max : public ::org::apache::lucene::backward_codecs::lucene90::Lucene90BoundsChecker {
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

            explicit Lucene90BoundsChecker$Max(jobject obj) : ::org::apache::lucene::backward_codecs::lucene90::Lucene90BoundsChecker(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90BoundsChecker$Max(const Lucene90BoundsChecker$Max& obj) : ::org::apache::lucene::backward_codecs::lucene90::Lucene90BoundsChecker(obj) {}

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
        namespace lucene90 {
          extern PyType_Def PY_TYPE_DEF(Lucene90BoundsChecker$Max);
          extern PyTypeObject *PY_TYPE(Lucene90BoundsChecker$Max);

          class t_Lucene90BoundsChecker$Max {
          public:
            PyObject_HEAD
            Lucene90BoundsChecker$Max object;
            static PyObject *wrap_Object(const Lucene90BoundsChecker$Max&);
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
