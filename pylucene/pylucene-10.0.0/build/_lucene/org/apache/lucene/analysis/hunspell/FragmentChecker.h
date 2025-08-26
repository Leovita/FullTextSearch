#ifndef org_apache_lucene_analysis_hunspell_FragmentChecker_H
#define org_apache_lucene_analysis_hunspell_FragmentChecker_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          class FragmentChecker;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class CharSequence;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {

          class FragmentChecker : public ::java::lang::Object {
           public:
            enum {
              mid_hasImpossibleFragmentAround_c917c37a1748281e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FragmentChecker(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FragmentChecker(const FragmentChecker& obj) : ::java::lang::Object(obj) {}

            static FragmentChecker *EVERYTHING_POSSIBLE;

            jboolean hasImpossibleFragmentAround(const ::java::lang::CharSequence &, jint, jint) const;
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
      namespace analysis {
        namespace hunspell {
          extern PyType_Def PY_TYPE_DEF(FragmentChecker);
          extern PyTypeObject *PY_TYPE(FragmentChecker);

          class t_FragmentChecker {
          public:
            PyObject_HEAD
            FragmentChecker object;
            static PyObject *wrap_Object(const FragmentChecker&);
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
