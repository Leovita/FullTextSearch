#ifndef org_apache_lucene_queryparser_flexible_core_QueryParserHelper_H
#define org_apache_lucene_queryparser_flexible_core_QueryParserHelper_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace builders {
              class QueryBuilder;
            }
            namespace config {
              class QueryConfigHandler;
            }
            namespace processors {
              class QueryNodeProcessor;
            }
            class QueryNodeException;
            namespace parser {
              class SyntaxParser;
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
                mid_init$_e8367afa60e1d007,
                mid_getQueryBuilder_9d4e5197a672b34a,
                mid_getQueryConfigHandler_2a2d77f833f4beaf,
                mid_getQueryNodeProcessor_2c5b1aaf5f4796ef,
                mid_getSyntaxParser_9ba62d9be5baff98,
                mid_parse_d3d8eff0e0846e60,
                mid_setQueryBuilder_942b0865a74fd61e,
                mid_setQueryConfigHandler_f8d3957fd2e3377b,
                mid_setQueryNodeProcessor_ec672068e99fb3f6,
                mid_setSyntaxParser_45739a37e6d67374,
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
