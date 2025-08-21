#ifndef org_apache_lucene_queryparser_flexible_messages_Message_H
#define org_apache_lucene_queryparser_flexible_messages_Message_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Locale;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace messages {

            class Message : public ::java::lang::Object {
             public:
              enum {
                mid_getArguments_e6b839682a4610a6,
                mid_getKey_09a7afff1868fc5e,
                mid_getLocalizedMessage_09a7afff1868fc5e,
                mid_getLocalizedMessage_d2a6991e8d2aa45a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Message(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Message(const Message& obj) : ::java::lang::Object(obj) {}

              JArray< ::java::lang::Object > getArguments() const;
              ::java::lang::String getKey() const;
              ::java::lang::String getLocalizedMessage() const;
              ::java::lang::String getLocalizedMessage(const ::java::util::Locale &) const;
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
      namespace queryparser {
        namespace flexible {
          namespace messages {
            extern PyType_Def PY_TYPE_DEF(Message);
            extern PyTypeObject *PY_TYPE(Message);

            class t_Message {
            public:
              PyObject_HEAD
              Message object;
              static PyObject *wrap_Object(const Message&);
              static PyObject *wrap_jobject(const jobject&);
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
