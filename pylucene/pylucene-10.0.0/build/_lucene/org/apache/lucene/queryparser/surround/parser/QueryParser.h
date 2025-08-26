#ifndef org_apache_lucene_queryparser_surround_parser_QueryParser_H
#define org_apache_lucene_queryparser_surround_parser_QueryParser_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class ArrayList;
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace parser {
            class QueryParserConstants;
            class ParseException;
            class QueryParserTokenManager;
            class Token;
          }
          namespace query {
            class SrndQuery;
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
        namespace surround {
          namespace parser {

            class QueryParser : public ::java::lang::Object {
             public:
              enum {
                mid_init$_e7bdbe105ce1bafb,
                mid_init$_2e9bebcfb7358b51,
                mid_init$_e62548278c2da79e,
                mid_AndQuery_3ca93962a82271ea,
                mid_FieldsQuery_3ca93962a82271ea,
                mid_FieldsQueryList_1387e1e2702ac173,
                mid_NQuery_3ca93962a82271ea,
                mid_NotQuery_3ca93962a82271ea,
                mid_OptionalFields_bbf1941622ffad1e,
                mid_OptionalWeights_a780f03e2b6991ca,
                mid_OrQuery_3ca93962a82271ea,
                mid_PrefixOperatorQuery_3ca93962a82271ea,
                mid_PrimaryQuery_3ca93962a82271ea,
                mid_ReInit_2e9bebcfb7358b51,
                mid_ReInit_e62548278c2da79e,
                mid_SimpleTerm_3ca93962a82271ea,
                mid_TopSrndQuery_3ca93962a82271ea,
                mid_WQuery_3ca93962a82271ea,
                mid_disable_tracing_e7bdbe105ce1bafb,
                mid_enable_tracing_e7bdbe105ce1bafb,
                mid_generateParseException_0498256a56059405,
                mid_getNextToken_5b13e884ebe6ec11,
                mid_getToken_5be34bfb96237e22,
                mid_parse_295e15389713802f,
                mid_parse2_295e15389713802f,
                mid_trace_enabled_9aa4f33e82ea333f,
                mid_getPrefixQuery_ebdcb9e15cc9360d,
                mid_checkDistanceSubQueries_45ee3dc51e50ec14,
                mid_getFieldsQuery_13f62c472bc3b46b,
                mid_getOrQuery_b326bef6c3da82d1,
                mid_getAndQuery_b326bef6c3da82d1,
                mid_getNotQuery_dd6ae41ad7eba3a2,
                mid_getDistanceQuery_8fca3a8b37d7aefd,
                mid_getTermQuery_ebdcb9e15cc9360d,
                mid_allowedSuffix_94f7e759d94961b0,
                mid_allowedTruncation_94f7e759d94961b0,
                mid_getTruncQuery_295e15389713802f,
                mid_getOpDistance_fa2a6f298bd618ab,
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
