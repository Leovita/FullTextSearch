#ifndef org_apache_lucene_analysis_morph_TokenType_H
#define org_apache_lucene_analysis_morph_TokenType_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace morph {
          class TokenType;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace morph {

          class TokenType : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_76721a2eaeb1db20,
              mid_values_71203eb2d5116045,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TokenType(const TokenType& obj) : ::java::lang::Enum(obj) {}

            static TokenType *KNOWN;
            static TokenType *UNKNOWN;
            static TokenType *USER;

            static TokenType valueOf(const ::java::lang::String &);
            static JArray< TokenType > values();
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
        namespace morph {
          extern PyType_Def PY_TYPE_DEF(TokenType);
          extern PyTypeObject *PY_TYPE(TokenType);

          class t_TokenType {
          public:
            PyObject_HEAD
            TokenType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_TokenType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const TokenType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const TokenType&, PyTypeObject *);
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
