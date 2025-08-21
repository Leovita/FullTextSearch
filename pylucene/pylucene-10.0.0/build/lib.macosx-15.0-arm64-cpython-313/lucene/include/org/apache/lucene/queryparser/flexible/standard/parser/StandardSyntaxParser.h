#ifndef org_apache_lucene_queryparser_flexible_standard_parser_StandardSyntaxParser_H
#define org_apache_lucene_queryparser_flexible_standard_parser_StandardSyntaxParser_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            class QueryNodeParseException;
            namespace parser {
              class SyntaxParser;
            }
            namespace nodes {
              class QueryNode;
            }
          }
          namespace standard {
            namespace parser {
              class StandardSyntaxParserTokenManager;
              class StandardSyntaxParserConstants;
              class ParseException;
              class Token;
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
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
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
                  mid_init$_3720c61b0679eb3e,
                  mid_init$_d0b9729d7a93fedb,
                  mid_init$_c2b02911839614e6,
                  mid_ReInit_d0b9729d7a93fedb,
                  mid_ReInit_c2b02911839614e6,
                  mid_TopLevelQuery_e5ac05b1c48f48c8,
                  mid_disable_tracing_3720c61b0679eb3e,
                  mid_enable_tracing_3720c61b0679eb3e,
                  mid_generateParseException_fb5b3e6aa905630b,
                  mid_getNextToken_8c19844f992b0880,
                  mid_getToken_919c1fd6bacb7fca,
                  mid_parse_47ae7defeafa3cb7,
                  mid_parseFloat_abe0ecf86d7ddb3e,
                  mid_parseInt_b72a753f2ca9466e,
                  mid_trace_enabled_947277eca0748c4e,
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
