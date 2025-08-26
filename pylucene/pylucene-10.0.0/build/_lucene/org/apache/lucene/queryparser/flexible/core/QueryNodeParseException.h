#ifndef org_apache_lucene_queryparser_flexible_core_QueryNodeParseException_H
#define org_apache_lucene_queryparser_flexible_core_QueryNodeParseException_H

#include "org/apache/lucene/queryparser/flexible/core/QueryNodeException.h"

namespace java {
  namespace lang {
    class Class;
    class Throwable;
    class String;
    class CharSequence;
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
          namespace core {

            class QueryNodeParseException : public ::org::apache::lucene::queryparser::flexible::core::QueryNodeException {
             public:
              enum {
                mid_init$_9b649326a1df01c3,
                mid_init$_18a3d90549745ece,
                mid_init$_bb32ffb7be2fda57,
                mid_getBeginColumn_bd89ce15dad49192,
                mid_getBeginLine_bd89ce15dad49192,
                mid_getErrorToken_e7df854526d67fa3,
                mid_getQuery_f2e5418fe0d66c69,
                mid_setNonLocalizedMessage_18a3d90549745ece,
                mid_setQuery_fe2ab7d27aa3fe1a,
                mid_setErrorToken_ee46a189998009d6,
                mid_setBeginLine_8226bd0b0fc13dba,
                mid_setBeginColumn_8226bd0b0fc13dba,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryNodeParseException(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::QueryNodeException(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QueryNodeParseException(const QueryNodeParseException& obj) : ::org::apache::lucene::queryparser::flexible::core::QueryNodeException(obj) {}

              QueryNodeParseException(const ::java::lang::Throwable &);
              QueryNodeParseException(const ::org::apache::lucene::queryparser::flexible::messages::Message &);
              QueryNodeParseException(const ::org::apache::lucene::queryparser::flexible::messages::Message &, const ::java::lang::Throwable &);

              jint getBeginColumn() const;
              jint getBeginLine() const;
              ::java::lang::String getErrorToken() const;
              ::java::lang::CharSequence getQuery() const;
              void setNonLocalizedMessage(const ::org::apache::lucene::queryparser::flexible::messages::Message &) const;
              void setQuery(const ::java::lang::CharSequence &) const;
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
            extern PyType_Def PY_TYPE_DEF(QueryNodeParseException);
            extern PyTypeObject *PY_TYPE(QueryNodeParseException);

            class t_QueryNodeParseException {
            public:
              PyObject_HEAD
              QueryNodeParseException object;
              static PyObject *wrap_Object(const QueryNodeParseException&);
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
