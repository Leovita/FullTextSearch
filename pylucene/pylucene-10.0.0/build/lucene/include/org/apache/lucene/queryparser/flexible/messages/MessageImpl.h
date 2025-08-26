#ifndef org_apache_lucene_queryparser_flexible_messages_MessageImpl_H
#define org_apache_lucene_queryparser_flexible_messages_MessageImpl_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Locale;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace messages {
            class Message;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace messages {

            class MessageImpl : public ::java::lang::Object {
             public:
              enum {
                mid_init$_ee46a189998009d6,
                mid_init$_450414b70aae8f27,
                mid_getArguments_1e688954528bc160,
                mid_getKey_e7df854526d67fa3,
                mid_getLocalizedMessage_e7df854526d67fa3,
                mid_getLocalizedMessage_dce821ed97c0e930,
                mid_toString_e7df854526d67fa3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MessageImpl(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MessageImpl(const MessageImpl& obj) : ::java::lang::Object(obj) {}

              MessageImpl(const ::java::lang::String &);
              MessageImpl(const ::java::lang::String &, const JArray< ::java::lang::Object > &);

              JArray< ::java::lang::Object > getArguments() const;
              ::java::lang::String getKey() const;
              ::java::lang::String getLocalizedMessage() const;
              ::java::lang::String getLocalizedMessage(const ::java::util::Locale &) const;
              ::java::lang::String toString() const;
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
            extern PyType_Def PY_TYPE_DEF(MessageImpl);
            extern PyTypeObject *PY_TYPE(MessageImpl);

            class t_MessageImpl {
            public:
              PyObject_HEAD
              MessageImpl object;
              static PyObject *wrap_Object(const MessageImpl&);
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
