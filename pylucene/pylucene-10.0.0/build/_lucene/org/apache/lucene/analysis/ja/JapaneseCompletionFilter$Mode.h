#ifndef org_apache_lucene_analysis_ja_JapaneseCompletionFilter$Mode_H
#define org_apache_lucene_analysis_ja_JapaneseCompletionFilter$Mode_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          class JapaneseCompletionFilter$Mode;
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
        namespace ja {

          class JapaneseCompletionFilter$Mode : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_1246fe9def71a403,
              mid_values_40061517d6a4264c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseCompletionFilter$Mode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseCompletionFilter$Mode(const JapaneseCompletionFilter$Mode& obj) : ::java::lang::Enum(obj) {}

            static JapaneseCompletionFilter$Mode *INDEX;
            static JapaneseCompletionFilter$Mode *QUERY;

            static JapaneseCompletionFilter$Mode valueOf(const ::java::lang::String &);
            static JArray< JapaneseCompletionFilter$Mode > values();
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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapaneseCompletionFilter$Mode);
          extern PyTypeObject *PY_TYPE(JapaneseCompletionFilter$Mode);

          class t_JapaneseCompletionFilter$Mode {
          public:
            PyObject_HEAD
            JapaneseCompletionFilter$Mode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_JapaneseCompletionFilter$Mode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const JapaneseCompletionFilter$Mode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const JapaneseCompletionFilter$Mode&, PyTypeObject *);
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
