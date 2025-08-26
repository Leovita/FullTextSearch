#ifndef org_apache_lucene_backward_codecs_lucene90_Lucene90BoundsChecker_H
#define org_apache_lucene_backward_codecs_lucene90_Lucene90BoundsChecker_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene90 {
          class Lucene90BoundsChecker;
        }
      }
    }
  }
}
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

          class Lucene90BoundsChecker : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_check_bf47f881a09da8d2,
              mid_create_580490d563670348,
              mid_set_675f4cb9a2529ee0,
              mid_update_675f4cb9a2529ee0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene90BoundsChecker(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90BoundsChecker(const Lucene90BoundsChecker& obj) : ::java::lang::Object(obj) {}

            Lucene90BoundsChecker();

            jboolean check(jfloat) const;
            static Lucene90BoundsChecker create(jboolean);
            void set(jfloat) const;
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
          extern PyType_Def PY_TYPE_DEF(Lucene90BoundsChecker);
          extern PyTypeObject *PY_TYPE(Lucene90BoundsChecker);

          class t_Lucene90BoundsChecker {
          public:
            PyObject_HEAD
            Lucene90BoundsChecker object;
            static PyObject *wrap_Object(const Lucene90BoundsChecker&);
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
