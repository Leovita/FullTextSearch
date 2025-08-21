#ifndef org_apache_lucene_queryparser_flexible_core_QueryParserHelper_H
#define org_apache_lucene_queryparser_flexible_core_QueryParserHelper_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace parser {
              class SyntaxParser;
            }
            namespace config {
              class QueryConfigHandler;
            }
            namespace builders {
              class QueryBuilder;
            }
            class QueryNodeException;
            namespace processors {
              class QueryNodeProcessor;
            }
          }
        }
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
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {

            class QueryParserHelper : public ::java::lang::Object {
             public:
              enum {
                mid_init$_f13017d5584aec93,
                mid_getQueryBuilder_858b0349f7c357f3,
                mid_getQueryConfigHandler_30bdf25ce42207ac,
                mid_getQueryNodeProcessor_8090fa815b44148e,
                mid_getSyntaxParser_2b04c7d4bc1e29cd,
                mid_parse_fb511a2c917868ea,
                mid_setQueryBuilder_32e7bee7810e6425,
                mid_setQueryConfigHandler_0fc7dbcdbf111f0f,
                mid_setQueryNodeProcessor_0d4188bade86aa26,
                mid_setSyntaxParser_6405b94b65bfd980,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryParserHelper(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QueryParserHelper(const QueryParserHelper& obj) : ::java::lang::Object(obj) {}

              QueryParserHelper(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &, const ::org::apache::lucene::queryparser::flexible::core::parser::SyntaxParser &, const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &, const ::org::apache::lucene::queryparser::flexible::core::builders::QueryBuilder &);

              ::org::apache::lucene::queryparser::flexible::core::builders::QueryBuilder getQueryBuilder() const;
              ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler getQueryConfigHandler() const;
              ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor getQueryNodeProcessor() const;
              ::org::apache::lucene::queryparser::flexible::core::parser::SyntaxParser getSyntaxParser() const;
              ::java::lang::Object parse(const ::java::lang::String &, const ::java::lang::String &) const;
              void setQueryBuilder(const ::org::apache::lucene::queryparser::flexible::core::builders::QueryBuilder &) const;
              void setQueryConfigHandler(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &) const;
              void setQueryNodeProcessor(const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &) const;
              void setSyntaxParser(const ::org::apache::lucene::queryparser::flexible::core::parser::SyntaxParser &) const;
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
            extern PyType_Def PY_TYPE_DEF(QueryParserHelper);
            extern PyTypeObject *PY_TYPE(QueryParserHelper);

            class t_QueryParserHelper {
            public:
              PyObject_HEAD
              QueryParserHelper object;
              static PyObject *wrap_Object(const QueryParserHelper&);
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
