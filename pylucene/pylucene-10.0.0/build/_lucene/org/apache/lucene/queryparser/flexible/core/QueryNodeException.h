#ifndef org_apache_lucene_queryparser_flexible_core_QueryNodeException_H
#define org_apache_lucene_queryparser_flexible_core_QueryNodeException_H

#include "java/lang/Exception.h"

namespace java {
  namespace lang {
    class Class;
    class Throwable;
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
            class NLSException;
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
          namespace core {

            class QueryNodeException : public ::java::lang::Exception {
             public:
              enum {
                mid_init$_9b649326a1df01c3,
                mid_init$_18a3d90549745ece,
                mid_init$_bb32ffb7be2fda57,
                mid_getLocalizedMessage_e7df854526d67fa3,
                mid_getLocalizedMessage_dce821ed97c0e930,
                mid_getMessage_e7df854526d67fa3,
                mid_getMessageObject_8445ed3c267746a4,
                mid_toString_e7df854526d67fa3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryNodeException(jobject obj) : ::java::lang::Exception(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QueryNodeException(const QueryNodeException& obj) : ::java::lang::Exception(obj) {}

              QueryNodeException(const ::java::lang::Throwable &);
              QueryNodeException(const ::org::apache::lucene::queryparser::flexible::messages::Message &);
              QueryNodeException(const ::org::apache::lucene::queryparser::flexible::messages::Message &, const ::java::lang::Throwable &);

              ::java::lang::String getLocalizedMessage() const;
              ::java::lang::String getLocalizedMessage(const ::java::util::Locale &) const;
              ::java::lang::String getMessage() const;
              ::org::apache::lucene::queryparser::flexible::messages::Message getMessageObject() const;
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
          namespace core {
            extern PyType_Def PY_TYPE_DEF(QueryNodeException);
            extern PyTypeObject *PY_TYPE(QueryNodeException);

            class t_QueryNodeException {
            public:
              PyObject_HEAD
              QueryNodeException object;
              static PyObject *wrap_Object(const QueryNodeException&);
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
