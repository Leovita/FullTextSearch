#ifndef org_apache_lucene_queryparser_surround_parser_QueryParser_H
#define org_apache_lucene_queryparser_surround_parser_QueryParser_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {
            class SrndQuery;
          }
          namespace parser {
            class QueryParserConstants;
            class QueryParserTokenManager;
            class ParseException;
            class Token;
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
    class String;
  }
  namespace util {
    class List;
    class ArrayList;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace parser {

            class QueryParser : public ::java::lang::Object {
             public:
              enum {
                mid_init$_3720c61b0679eb3e,
                mid_init$_83625dc27b688f0a,
                mid_init$_c2b02911839614e6,
                mid_AndQuery_417e5294363c6a3a,
                mid_FieldsQuery_417e5294363c6a3a,
                mid_FieldsQueryList_36830460e10839eb,
                mid_NQuery_417e5294363c6a3a,
                mid_NotQuery_417e5294363c6a3a,
                mid_OptionalFields_9bdb2d9a719b130b,
                mid_OptionalWeights_55ba120b27453165,
                mid_OrQuery_417e5294363c6a3a,
                mid_PrefixOperatorQuery_417e5294363c6a3a,
                mid_PrimaryQuery_417e5294363c6a3a,
                mid_ReInit_83625dc27b688f0a,
                mid_ReInit_c2b02911839614e6,
                mid_SimpleTerm_417e5294363c6a3a,
                mid_TopSrndQuery_417e5294363c6a3a,
                mid_WQuery_417e5294363c6a3a,
                mid_disable_tracing_3720c61b0679eb3e,
                mid_enable_tracing_3720c61b0679eb3e,
                mid_generateParseException_a130ebf53012db69,
                mid_getNextToken_d7b848889e5023e6,
                mid_getToken_5a0ea5068d70978e,
                mid_parse_4ea19138decc60bc,
                mid_parse2_4ea19138decc60bc,
                mid_trace_enabled_947277eca0748c4e,
                mid_getOpDistance_3f230d713d7fd2b0,
                mid_checkDistanceSubQueries_f4d8721699aa24cb,
                mid_getFieldsQuery_0b0dfa5b0afcca7f,
                mid_getOrQuery_1177c364d74bbe91,
                mid_getAndQuery_1177c364d74bbe91,
                mid_getNotQuery_734448721af65acf,
                mid_getDistanceQuery_1bf96a949fed6708,
                mid_getTermQuery_c07a87ddcc465c16,
                mid_allowedSuffix_4a13a663b5c11133,
                mid_allowedTruncation_4a13a663b5c11133,
                mid_getTruncQuery_4ea19138decc60bc,
                mid_getPrefixQuery_c07a87ddcc465c16,
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

              explicit QueryParser(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QueryParser(const QueryParser& obj) : ::java::lang::Object(obj) {}

              ::org::apache::lucene::queryparser::surround::parser::Token _get_jj_nt() const;
              void _set_jj_nt(const ::org::apache::lucene::queryparser::surround::parser::Token &) const;
              ::org::apache::lucene::queryparser::surround::parser::Token _get_token() const;
              void _set_token(const ::org::apache::lucene::queryparser::surround::parser::Token &) const;
              ::org::apache::lucene::queryparser::surround::parser::QueryParserTokenManager _get_token_source() const;
              void _set_token_source(const ::org::apache::lucene::queryparser::surround::parser::QueryParserTokenManager &) const;

              QueryParser();
              QueryParser(const ::org::apache::lucene::queryparser::surround::parser::QueryParserTokenManager &);
              QueryParser(const ::org::apache::lucene::queryparser::charstream::CharStream &);

              ::org::apache::lucene::queryparser::surround::query::SrndQuery AndQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery FieldsQuery() const;
              ::java::util::List FieldsQueryList() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery NQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery NotQuery() const;
              ::java::util::ArrayList OptionalFields() const;
              void OptionalWeights(const ::org::apache::lucene::queryparser::surround::query::SrndQuery &) const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery OrQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery PrefixOperatorQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery PrimaryQuery() const;
              void ReInit(const ::org::apache::lucene::queryparser::surround::parser::QueryParserTokenManager &) const;
              void ReInit(const ::org::apache::lucene::queryparser::charstream::CharStream &) const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery SimpleTerm() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery TopSrndQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery WQuery() const;
              void disable_tracing() const;
              void enable_tracing() const;
              ::org::apache::lucene::queryparser::surround::parser::ParseException generateParseException() const;
              ::org::apache::lucene::queryparser::surround::parser::Token getNextToken() const;
              ::org::apache::lucene::queryparser::surround::parser::Token getToken(jint) const;
              static ::org::apache::lucene::queryparser::surround::query::SrndQuery parse(const ::java::lang::String &);
              ::org::apache::lucene::queryparser::surround::query::SrndQuery parse2(const ::java::lang::String &) const;
              jboolean trace_enabled() const;
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
        namespace surround {
          namespace parser {
            extern PyType_Def PY_TYPE_DEF(QueryParser);
            extern PyTypeObject *PY_TYPE(QueryParser);

            class t_QueryParser {
            public:
              PyObject_HEAD
              QueryParser object;
              static PyObject *wrap_Object(const QueryParser&);
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
