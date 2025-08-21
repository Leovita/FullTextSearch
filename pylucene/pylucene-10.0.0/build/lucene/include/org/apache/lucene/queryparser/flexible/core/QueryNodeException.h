#ifndef org_apache_lucene_queryparser_flexible_core_QueryNodeException_H
#define org_apache_lucene_queryparser_flexible_core_QueryNodeException_H

#include "java/lang/Exception.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Throwable;
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
            class NLSException;
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
          namespace core {

            class QueryNodeException : public ::java::lang::Exception {
             public:
              enum {
                mid_init$_4b71a6d99b73f7d1,
                mid_init$_4c499563a04682ba,
                mid_init$_87e1d8e597060760,
                mid_getLocalizedMessage_09a7afff1868fc5e,
                mid_getLocalizedMessage_d2a6991e8d2aa45a,
                mid_getMessage_09a7afff1868fc5e,
                mid_getMessageObject_458c0a6b6c4bb652,
                mid_toString_09a7afff1868fc5e,
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
