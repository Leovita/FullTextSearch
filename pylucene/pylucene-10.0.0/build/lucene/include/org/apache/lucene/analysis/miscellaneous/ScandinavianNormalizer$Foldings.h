#ifndef org_apache_lucene_analysis_miscellaneous_ScandinavianNormalizer$Foldings_H
#define org_apache_lucene_analysis_miscellaneous_ScandinavianNormalizer$Foldings_H

#include "java/lang/Enum.h"

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
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class ScandinavianNormalizer$Foldings : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_42fae0dc6cc6d2be,
              mid_values_291137b43a516c74,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ScandinavianNormalizer$Foldings(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ScandinavianNormalizer$Foldings(const ScandinavianNormalizer$Foldings& obj) : ::java::lang::Enum(obj) {}

            static ScandinavianNormalizer$Foldings *AA;
            static ScandinavianNormalizer$Foldings *AE;
            static ScandinavianNormalizer$Foldings *AO;
            static ScandinavianNormalizer$Foldings *OE;
            static ScandinavianNormalizer$Foldings *OO;

            static ScandinavianNormalizer$Foldings valueOf(const ::java::lang::String &);
            static JArray< ScandinavianNormalizer$Foldings > values();
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
          extern PyType_Def PY_TYPE_DEF(ScandinavianNormalizer$Foldings);
          extern PyTypeObject *PY_TYPE(ScandinavianNormalizer$Foldings);

          class t_ScandinavianNormalizer$Foldings {
          public:
            PyObject_HEAD
            ScandinavianNormalizer$Foldings object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ScandinavianNormalizer$Foldings *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ScandinavianNormalizer$Foldings&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ScandinavianNormalizer$Foldings&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
