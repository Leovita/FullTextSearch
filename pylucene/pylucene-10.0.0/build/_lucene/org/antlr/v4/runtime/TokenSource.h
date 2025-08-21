#ifndef org_antlr_v4_runtime_TokenSource_H
#define org_antlr_v4_runtime_TokenSource_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class TokenFactory;
        class CharStream;
        class Token;
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

        class TokenSource : public ::java::lang::Object {
         public:
          enum {
            mid_getCharPositionInLine_20fbf7565993c3d7,
            mid_getInputStream_b461eccf8f9c2fcc,
            mid_getLine_20fbf7565993c3d7,
            mid_getSourceName_09a7afff1868fc5e,
            mid_getTokenFactory_c8e0d1a54d80678c,
            mid_nextToken_9ddaacaf798f5cf6,
            mid_setTokenFactory_70a7fa7b38564c5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TokenSource(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TokenSource(const TokenSource& obj) : ::java::lang::Object(obj) {}

          jint getCharPositionInLine() const;
          ::org::antlr::v4::runtime::CharStream getInputStream() const;
          jint getLine() const;
          ::java::lang::String getSourceName() const;
          ::org::antlr::v4::runtime::TokenFactory getTokenFactory() const;
          ::org::antlr::v4::runtime::Token nextToken() const;
          void setTokenFactory(const ::org::antlr::v4::runtime::TokenFactory &) const;
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
        extern PyType_Def PY_TYPE_DEF(TokenSource);
        extern PyTypeObject *PY_TYPE(TokenSource);

        class t_TokenSource {
        public:
          PyObject_HEAD
          TokenSource object;
          static PyObject *wrap_Object(const TokenSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
