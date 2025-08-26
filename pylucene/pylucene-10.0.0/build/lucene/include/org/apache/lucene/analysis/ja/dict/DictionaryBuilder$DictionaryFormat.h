#ifndef org_apache_lucene_analysis_ja_dict_DictionaryBuilder$DictionaryFormat_H
#define org_apache_lucene_analysis_ja_dict_DictionaryBuilder$DictionaryFormat_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            class DictionaryBuilder$DictionaryFormat;
          }
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
          namespace dict {

            class DictionaryBuilder$DictionaryFormat : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_b099ffd6f882448f,
                mid_values_8e2f368825a22c73,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DictionaryBuilder$DictionaryFormat(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DictionaryBuilder$DictionaryFormat(const DictionaryBuilder$DictionaryFormat& obj) : ::java::lang::Enum(obj) {}

              static DictionaryBuilder$DictionaryFormat *IPADIC;
              static DictionaryBuilder$DictionaryFormat *UNIDIC;

              static DictionaryBuilder$DictionaryFormat valueOf(const ::java::lang::String &);
              static JArray< DictionaryBuilder$DictionaryFormat > values();
            };
          }
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
          namespace dict {
            extern PyType_Def PY_TYPE_DEF(DictionaryBuilder$DictionaryFormat);
            extern PyTypeObject *PY_TYPE(DictionaryBuilder$DictionaryFormat);

            class t_DictionaryBuilder$DictionaryFormat {
            public:
              PyObject_HEAD
              DictionaryBuilder$DictionaryFormat object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_DictionaryBuilder$DictionaryFormat *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const DictionaryBuilder$DictionaryFormat&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const DictionaryBuilder$DictionaryFormat&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
