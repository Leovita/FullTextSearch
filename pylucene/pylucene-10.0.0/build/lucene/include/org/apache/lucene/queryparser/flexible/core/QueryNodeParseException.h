#ifndef org_apache_lucene_queryparser_flexible_core_QueryNodeParseException_H
#define org_apache_lucene_queryparser_flexible_core_QueryNodeParseException_H

#include "org/apache/lucene/queryparser/flexible/core/QueryNodeException.h"

namespace java {
  namespace lang {
    class Class;
    class CharSequence;
    class String;
    class Throwable;
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
                mid_init$_4b71a6d99b73f7d1,
                mid_init$_4c499563a04682ba,
                mid_init$_87e1d8e597060760,
                mid_getBeginColumn_20fbf7565993c3d7,
                mid_getBeginLine_20fbf7565993c3d7,
                mid_getErrorToken_09a7afff1868fc5e,
                mid_getQuery_373f0038978f926b,
                mid_setNonLocalizedMessage_4c499563a04682ba,
                mid_setQuery_5ed8eb2e3024c663,
                mid_setErrorToken_0d82408c6e55bc30,
                mid_setBeginLine_540b2b23d51b1efd,
                mid_setBeginColumn_540b2b23d51b1efd,
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
