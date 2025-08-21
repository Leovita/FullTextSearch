#ifndef org_apache_lucene_backward_codecs_lucene91_Lucene91BoundsChecker_H
#define org_apache_lucene_backward_codecs_lucene91_Lucene91BoundsChecker_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene91 {
          class Lucene91BoundsChecker;
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
        namespace lucene91 {

          class Lucene91BoundsChecker : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_check_ed8290af1db6b7df,
              mid_create_7fe0ac521d6c34ea,
              mid_set_c771a95b0227fb6a,
              mid_update_c771a95b0227fb6a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene91BoundsChecker(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene91BoundsChecker(const Lucene91BoundsChecker& obj) : ::java::lang::Object(obj) {}

            Lucene91BoundsChecker();

            jboolean check(jfloat) const;
            static Lucene91BoundsChecker create(jboolean);
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
        namespace lucene91 {
          extern PyType_Def PY_TYPE_DEF(Lucene91BoundsChecker);
          extern PyTypeObject *PY_TYPE(Lucene91BoundsChecker);

          class t_Lucene91BoundsChecker {
          public:
            PyObject_HEAD
            Lucene91BoundsChecker object;
            static PyObject *wrap_Object(const Lucene91BoundsChecker&);
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
