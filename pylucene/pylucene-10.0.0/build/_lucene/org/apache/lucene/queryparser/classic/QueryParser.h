#ifndef org_apache_lucene_queryparser_classic_QueryParser_H
#define org_apache_lucene_queryparser_classic_QueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParserBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {
          class QueryParserTokenManager;
          class Token;
          class QueryParserConstants;
          class ParseException;
        }
        namespace charstream {
          class CharStream;
        }
      }
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        class Query;
        class BooleanClause;
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
              mid_init$_cc97c286759ef3b4,
              mid_Clause_9b1de8e0d58e515c,
              mid_Conjunction_bd89ce15dad49192,
              mid_Modifiers_bd89ce15dad49192,
              mid_MultiTerm_c6c6901016af6c97,
              mid_Query_9b1de8e0d58e515c,
              mid_ReInit_fb1b66554e243e38,
              mid_ReInit_e62548278c2da79e,
              mid_Term_9b1de8e0d58e515c,
              mid_TopLevelQuery_9b1de8e0d58e515c,
              mid_disable_tracing_e7bdbe105ce1bafb,
              mid_enable_tracing_e7bdbe105ce1bafb,
              mid_generateParseException_c102428f997fab17,
              mid_getNextToken_8878d7ea08e37e5f,
              mid_getSplitOnWhitespace_9aa4f33e82ea333f,
              mid_getToken_369067b6f425bfb5,
              mid_setAutoGeneratePhraseQueries_f5dd97eebf6a215a,
              mid_setSplitOnWhitespace_f5dd97eebf6a215a,
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
