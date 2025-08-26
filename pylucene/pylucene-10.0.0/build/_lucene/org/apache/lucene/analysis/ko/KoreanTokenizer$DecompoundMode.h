#ifndef org_apache_lucene_analysis_ko_KoreanTokenizer$DecompoundMode_H
#define org_apache_lucene_analysis_ko_KoreanTokenizer$DecompoundMode_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          class KoreanTokenizer$DecompoundMode;
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
        namespace ko {

          class KoreanTokenizer$DecompoundMode : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_d270756e8e1bfaa6,
              mid_values_5504d1b0720a69f6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KoreanTokenizer$DecompoundMode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KoreanTokenizer$DecompoundMode(const KoreanTokenizer$DecompoundMode& obj) : ::java::lang::Enum(obj) {}

            static KoreanTokenizer$DecompoundMode *DISCARD;
            static KoreanTokenizer$DecompoundMode *MIXED;
            static KoreanTokenizer$DecompoundMode *NONE;

            static KoreanTokenizer$DecompoundMode valueOf(const ::java::lang::String &);
            static JArray< KoreanTokenizer$DecompoundMode > values();
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
        namespace ko {
          extern PyType_Def PY_TYPE_DEF(KoreanTokenizer$DecompoundMode);
          extern PyTypeObject *PY_TYPE(KoreanTokenizer$DecompoundMode);

          class t_KoreanTokenizer$DecompoundMode {
          public:
            PyObject_HEAD
            KoreanTokenizer$DecompoundMode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_KoreanTokenizer$DecompoundMode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const KoreanTokenizer$DecompoundMode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const KoreanTokenizer$DecompoundMode&, PyTypeObject *);
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
