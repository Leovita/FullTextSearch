#ifndef org_antlr_v4_runtime_TokenFactory_H
#define org_antlr_v4_runtime_TokenFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Token;
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
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class TokenFactory : public ::java::lang::Object {
         public:
          enum {
            mid_create_343ce57170fc55ff,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TokenFactory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TokenFactory(const TokenFactory& obj) : ::java::lang::Object(obj) {}

          ::org::antlr::v4::runtime::Token create(jint, const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(TokenFactory);
        extern PyTypeObject *PY_TYPE(TokenFactory);

        class t_TokenFactory {
        public:
          PyObject_HEAD
          TokenFactory object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TokenFactory *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TokenFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TokenFactory&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
