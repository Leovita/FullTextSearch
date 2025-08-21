#ifndef org_apache_lucene_queryparser_classic_QueryParser_H
#define org_apache_lucene_queryparser_classic_QueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParserBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class BooleanClause;
      }
      namespace queryparser {
        namespace classic {
          class QueryParserTokenManager;
          class Token;
          class ParseException;
          class QueryParserConstants;
        }
        namespace charstream {
          class CharStream;
        }
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {

          class QueryParser : public ::org::apache::lucene::queryparser::classic::QueryParserBase {
           public:
            enum {
              mid_init$_c50f2f6f1d850d13,
              mid_Clause_171433ef85015467,
              mid_Conjunction_20fbf7565993c3d7,
              mid_Modifiers_20fbf7565993c3d7,
              mid_MultiTerm_bf5ba6d900a4b737,
              mid_Query_171433ef85015467,
              mid_ReInit_64fef73005020508,
              mid_ReInit_c2b02911839614e6,
              mid_Term_171433ef85015467,
              mid_TopLevelQuery_171433ef85015467,
              mid_disable_tracing_3720c61b0679eb3e,
              mid_enable_tracing_3720c61b0679eb3e,
              mid_generateParseException_5a407c36fd55cbed,
              mid_getNextToken_36bb192b62e97f0a,
              mid_getSplitOnWhitespace_947277eca0748c4e,
              mid_getToken_2195c86fd240eed6,
              mid_setAutoGeneratePhraseQueries_b110fc3a58c081ab,
              mid_setSplitOnWhitespace_b110fc3a58c081ab,
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

            explicit QueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::QueryParserBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryParser(const QueryParser& obj) : ::org::apache::lucene::queryparser::classic::QueryParserBase(obj) {}

            static jboolean DEFAULT_SPLIT_ON_WHITESPACE;

            ::org::apache::lucene::queryparser::classic::Token _get_jj_nt() const;
            void _set_jj_nt(const ::org::apache::lucene::queryparser::classic::Token &) const;
            ::org::apache::lucene::queryparser::classic::Token _get_token() const;
            void _set_token(const ::org::apache::lucene::queryparser::classic::Token &) const;
            ::org::apache::lucene::queryparser::classic::QueryParserTokenManager _get_token_source() const;
            void _set_token_source(const ::org::apache::lucene::queryparser::classic::QueryParserTokenManager &) const;

            QueryParser(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);

            ::org::apache::lucene::search::Query Clause(const ::java::lang::String &) const;
            jint Conjunction() const;
            jint Modifiers() const;
            ::org::apache::lucene::search::Query MultiTerm(const ::java::lang::String &, const ::java::util::List &) const;
            ::org::apache::lucene::search::Query Query(const ::java::lang::String &) const;
            void ReInit(const ::org::apache::lucene::queryparser::classic::QueryParserTokenManager &) const;
            void ReInit(const ::org::apache::lucene::queryparser::charstream::CharStream &) const;
            ::org::apache::lucene::search::Query Term(const ::java::lang::String &) const;
            ::org::apache::lucene::search::Query TopLevelQuery(const ::java::lang::String &) const;
            void disable_tracing() const;
            void enable_tracing() const;
            ::org::apache::lucene::queryparser::classic::ParseException generateParseException() const;
            ::org::apache::lucene::queryparser::classic::Token getNextToken() const;
            jboolean getSplitOnWhitespace() const;
            ::org::apache::lucene::queryparser::classic::Token getToken(jint) const;
            void setAutoGeneratePhraseQueries(jboolean) const;
            void setSplitOnWhitespace(jboolean) const;
            jboolean trace_enabled() const;
          };
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
        namespace classic {
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

#endif
