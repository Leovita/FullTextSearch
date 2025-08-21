#ifndef org_antlr_v4_runtime_atn_LexerActionType_H
#define org_antlr_v4_runtime_atn_LexerActionType_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class LexerActionType;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class LexerActionType : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_197c24fb67401c0c,
              mid_values_1264a5f3fcae4898,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LexerActionType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LexerActionType(const LexerActionType& obj) : ::java::lang::Enum(obj) {}

            static LexerActionType *CHANNEL;
            static LexerActionType *CUSTOM;
            static LexerActionType *MODE;
            static LexerActionType *MORE;
            static LexerActionType *POP_MODE;
            static LexerActionType *PUSH_MODE;
            static LexerActionType *SKIP;
            static LexerActionType *TYPE;

            static LexerActionType valueOf(const ::java::lang::String &);
            static JArray< LexerActionType > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          extern PyType_Def PY_TYPE_DEF(LexerActionType);
          extern PyTypeObject *PY_TYPE(LexerActionType);

          class t_LexerActionType {
          public:
            PyObject_HEAD
            LexerActionType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_LexerActionType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const LexerActionType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const LexerActionType&, PyTypeObject *);
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
