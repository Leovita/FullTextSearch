#ifndef org_apache_lucene_queryparser_flexible_standard_parser_StandardSyntaxParser_H
#define org_apache_lucene_queryparser_flexible_standard_parser_StandardSyntaxParser_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class CharSequence;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace parser {
              class StandardSyntaxParserTokenManager;
              class Token;
              class StandardSyntaxParserConstants;
              class ParseException;
            }
          }
          namespace core {
            class QueryNodeParseException;
            namespace nodes {
              class QueryNode;
            }
            namespace parser {
              class SyntaxParser;
            }
          }
        }
        namespace charstream {
          class CharStream;
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
          namespace standard {
            namespace parser {

              class StandardSyntaxParser : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_e7bdbe105ce1bafb,
                  mid_init$_381cc8630ca22e24,
                  mid_init$_e62548278c2da79e,
                  mid_ReInit_381cc8630ca22e24,
                  mid_ReInit_e62548278c2da79e,
                  mid_TopLevelQuery_b894e0cea78cac40,
                  mid_disable_tracing_e7bdbe105ce1bafb,
                  mid_enable_tracing_e7bdbe105ce1bafb,
                  mid_generateParseException_5faaeb6ec2c3e850,
                  mid_getNextToken_e442c4726cb124e9,
                  mid_getToken_0a5a72a4fbab0597,
                  mid_parse_e78d57446f1c745f,
                  mid_parseFloat_b66efec330017718,
                  mid_parseInt_e378eadb3a975da3,
                  mid_trace_enabled_9aa4f33e82ea333f,
                  max_mid
                };

                enum {
                  fid_jj_nt,
                  fid_token,
                  fid_token_source,
                  max_fid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static jfieldID *fids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StandardSyntaxParser(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                StandardSyntaxParser(const StandardSyntaxParser& obj) : ::java::lang::Object(obj) {}

                ::org::apache::lucene::queryparser::flexible::standard::parser::Token _get_jj_nt() const;
                void _set_jj_nt(const ::org::apache::lucene::queryparser::flexible::standard::parser::Token &) const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::Token _get_token() const;
                void _set_token(const ::org::apache::lucene::queryparser::flexible::standard::parser::Token &) const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::StandardSyntaxParserTokenManager _get_token_source() const;
                void _set_token_source(const ::org::apache::lucene::queryparser::flexible::standard::parser::StandardSyntaxParserTokenManager &) const;

                StandardSyntaxParser();
                StandardSyntaxParser(const ::org::apache::lucene::queryparser::flexible::standard::parser::StandardSyntaxParserTokenManager &);
                StandardSyntaxParser(const ::org::apache::lucene::queryparser::charstream::CharStream &);

                void ReInit(const ::org::apache::lucene::queryparser::flexible::standard::parser::StandardSyntaxParserTokenManager &) const;
                void ReInit(const ::org::apache::lucene::queryparser::charstream::CharStream &) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode TopLevelQuery(const ::java::lang::CharSequence &) const;
                void disable_tracing() const;
                void enable_tracing() const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::ParseException generateParseException() const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::Token getNextToken() const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::Token getToken(jint) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode parse(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &) const;
                static jfloat parseFloat(const ::org::apache::lucene::queryparser::flexible::standard::parser::Token &);
                static jint parseInt(const ::org::apache::lucene::queryparser::flexible::standard::parser::Token &);
                jboolean trace_enabled() const;
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
          namespace standard {
            namespace parser {
              extern PyType_Def PY_TYPE_DEF(StandardSyntaxParser);
              extern PyTypeObject *PY_TYPE(StandardSyntaxParser);

              class t_StandardSyntaxParser {
              public:
                PyObject_HEAD
                StandardSyntaxParser object;
                static PyObject *wrap_Object(const StandardSyntaxParser&);
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
