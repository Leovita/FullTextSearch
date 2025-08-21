#ifndef org_antlr_v4_runtime_CharStream_H
#define org_antlr_v4_runtime_CharStream_H

#include "org/antlr/v4/runtime/IntStream.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class CharStream : public ::org::antlr::v4::runtime::IntStream {
         public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharStream(jobject obj) : ::org::antlr::v4::runtime::IntStream(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharStream(const CharStream& obj) : ::org::antlr::v4::runtime::IntStream(obj) {}
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
        extern PyType_Def PY_TYPE_DEF(CharStream);
        extern PyTypeObject *PY_TYPE(CharStream);

        class t_CharStream {
        public:
          PyObject_HEAD
          CharStream object;
          static PyObject *wrap_Object(const CharStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
