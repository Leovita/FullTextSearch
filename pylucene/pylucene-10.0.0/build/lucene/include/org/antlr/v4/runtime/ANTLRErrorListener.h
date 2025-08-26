#ifndef org_antlr_v4_runtime_ANTLRErrorListener_H
#define org_antlr_v4_runtime_ANTLRErrorListener_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Recognizer;
        class Parser;
        class RecognitionException;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class ANTLRErrorListener : public ::java::lang::Object {
         public:
          enum {
            mid_syntaxError_0482a45c87bd68ee,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ANTLRErrorListener(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ANTLRErrorListener(const ANTLRErrorListener& obj) : ::java::lang::Object(obj) {}

          void syntaxError(const ::org::antlr::v4::runtime::Recognizer &, const ::java::lang::Object &, jint, jint, const ::java::lang::String &, const ::org::antlr::v4::runtime::RecognitionException &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        extern PyType_Def PY_TYPE_DEF(ANTLRErrorListener);
        extern PyTypeObject *PY_TYPE(ANTLRErrorListener);

        class t_ANTLRErrorListener {
        public:
          PyObject_HEAD
          ANTLRErrorListener object;
          static PyObject *wrap_Object(const ANTLRErrorListener&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
