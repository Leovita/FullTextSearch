#ifndef org_apache_lucene_queryparser_flexible_core_parser_SyntaxParser_H
#define org_apache_lucene_queryparser_flexible_core_parser_SyntaxParser_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class QueryNode;
            }
            class QueryNodeParseException;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class CharSequence;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace parser {

              class SyntaxParser : public ::java::lang::Object {
               public:
                enum {
                  mid_parse_e78d57446f1c745f,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SyntaxParser(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SyntaxParser(const SyntaxParser& obj) : ::java::lang::Object(obj) {}

                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode parse(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &) const;
              };
            }
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
            namespace parser {
              extern PyType_Def PY_TYPE_DEF(SyntaxParser);
              extern PyTypeObject *PY_TYPE(SyntaxParser);

              class t_SyntaxParser {
              public:
                PyObject_HEAD
                SyntaxParser object;
                static PyObject *wrap_Object(const SyntaxParser&);
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
}

#endif
