#ifndef org_apache_lucene_analysis_miscellaneous_ScandinavianNormalizer_H
#define org_apache_lucene_analysis_miscellaneous_ScandinavianNormalizer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {
          class ScandinavianNormalizer$Foldings;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Set;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class ScandinavianNormalizer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_478519f7d4301fc7,
              mid_processToken_7146aefdd22b4b29,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ScandinavianNormalizer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ScandinavianNormalizer(const ScandinavianNormalizer& obj) : ::java::lang::Object(obj) {}

            static ::java::util::Set *ALL_FOLDINGS;

            ScandinavianNormalizer(const ::java::util::Set &);

            jint processToken(const JArray< jchar > &, jint) const;
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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(ScandinavianNormalizer);
          extern PyTypeObject *PY_TYPE(ScandinavianNormalizer);

          class t_ScandinavianNormalizer {
          public:
            PyObject_HEAD
            ScandinavianNormalizer object;
            static PyObject *wrap_Object(const ScandinavianNormalizer&);
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
