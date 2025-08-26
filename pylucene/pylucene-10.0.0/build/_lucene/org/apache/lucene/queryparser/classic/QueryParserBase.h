#ifndef org_apache_lucene_queryparser_classic_QueryParserBase_H
#define org_apache_lucene_queryparser_classic_QueryParserBase_H

#include "org/apache/lucene/util/QueryBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {
          class QueryParser$Operator;
          class ParseException;
        }
        namespace flexible {
          namespace standard {
            class CommonQueryParserConfiguration;
          }
        }
        namespace charstream {
          class CharStream;
        }
      }
      namespace document {
        class DateTools$Resolution;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        class Query;
        class MultiTermQuery$RewriteMethod;
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
    class TimeZone;
    class Locale;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {

          class QueryParserBase : public ::org::apache::lucene::util::QueryBuilder {
           public:
            enum {
              mid_ReInit_e62548278c2da79e,
              mid_TopLevelQuery_9b1de8e0d58e515c,
              mid_escape_fef9c036acf290a9,
              mid_getAllowLeadingWildcard_9aa4f33e82ea333f,
              mid_getAutoGeneratePhraseQueries_9aa4f33e82ea333f,
              mid_getDateResolution_9aba0b95437a4f09,
              mid_getDefaultOperator_a8c47d3ac6939dce,
              mid_getDeterminizeWorkLimit_bd89ce15dad49192,
              mid_getField_e7df854526d67fa3,
              mid_getFuzzyMinSim_8b62236f0e4d0dbc,
              mid_getFuzzyPrefixLength_bd89ce15dad49192,
              mid_getLocale_d50f7bd45bffb467,
              mid_getMultiTermRewriteMethod_cdae28086b3bbe9c,
              mid_getPhraseSlop_bd89ce15dad49192,
              mid_getTimeZone_f0ab2fb84439b1af,
              mid_init_cc97c286759ef3b4,
              mid_parse_9b1de8e0d58e515c,
              mid_setAllowLeadingWildcard_f5dd97eebf6a215a,
              mid_setAutoGeneratePhraseQueries_f5dd97eebf6a215a,
              mid_setDateResolution_fc9c774cd4ca88ae,
              mid_setDateResolution_625aaa01f515a7a5,
              mid_setDefaultOperator_d064a4233803d5d9,
              mid_setDeterminizeWorkLimit_8226bd0b0fc13dba,
              mid_setFuzzyMinSim_675f4cb9a2529ee0,
              mid_setFuzzyPrefixLength_8226bd0b0fc13dba,
              mid_setLocale_160efbb0dee8e527,
              mid_setMultiTermRewriteMethod_83f3c0af3316ffc0,
              mid_setPhraseSlop_8226bd0b0fc13dba,
              mid_setTimeZone_6bae4ff1843f5310,
              mid_newRangeQuery_3a6923cec6886def,
              mid_getFieldQuery_964b0b3626756a89,
              mid_getFieldQuery_a525af63bfcd652e,
              mid_getFuzzyQuery_5aabae9afa99de9b,
              mid_getPrefixQuery_550dcf54034665c0,
              mid_getWildcardQuery_550dcf54034665c0,
              mid_getRangeQuery_3a6923cec6886def,
              mid_getRegexpQuery_550dcf54034665c0,
              mid_getBooleanQuery_997498abbdceb67f,
              mid_addMultiTermClauses_bd8526d871d24e1c,
              mid_newBooleanClause_054f051a7fdef639,
              mid_newFieldQuery_29e64d1e1891957a,
              mid_newMatchAllDocsQuery_ffa7bd087b2a75aa,
              mid_newWildcardQuery_90fae07a23bf0372,
              mid_newRegexpQuery_90fae07a23bf0372,
              mid_newPrefixQuery_90fae07a23bf0372,
              mid_newFuzzyQuery_a741969044c9d331,
              mid_getFuzzyDistance_75896d97017f3337,
              mid_addClause_cb81175944a4a657,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryParserBase(jobject obj) : ::org::apache::lucene::util::QueryBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryParserBase(const QueryParserBase& obj) : ::org::apache::lucene::util::QueryBuilder(obj) {}

            static ::org::apache::lucene::queryparser::classic::QueryParser$Operator *AND_OPERATOR;
            static ::org::apache::lucene::queryparser::classic::QueryParser$Operator *OR_OPERATOR;

            void ReInit(const ::org::apache::lucene::queryparser::charstream::CharStream &) const;
            ::org::apache::lucene::search::Query TopLevelQuery(const ::java::lang::String &) const;
            static ::java::lang::String escape(const ::java::lang::String &);
            jboolean getAllowLeadingWildcard() const;
            jboolean getAutoGeneratePhraseQueries() const;
            ::org::apache::lucene::document::DateTools$Resolution getDateResolution(const ::java::lang::String &) const;
            ::org::apache::lucene::queryparser::classic::QueryParser$Operator getDefaultOperator() const;
            jint getDeterminizeWorkLimit() const;
            ::java::lang::String getField() const;
            jfloat getFuzzyMinSim() const;
            jint getFuzzyPrefixLength() const;
            ::java::util::Locale getLocale() const;
            ::org::apache::lucene::search::MultiTermQuery$RewriteMethod getMultiTermRewriteMethod() const;
            jint getPhraseSlop() const;
            ::java::util::TimeZone getTimeZone() const;
            void init(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &) const;
            ::org::apache::lucene::search::Query parse(const ::java::lang::String &) const;
            void setAllowLeadingWildcard(jboolean) const;
            void setAutoGeneratePhraseQueries(jboolean) const;
            void setDateResolution(const ::org::apache::lucene::document::DateTools$Resolution &) const;
            void setDateResolution(const ::java::lang::String &, const ::org::apache::lucene::document::DateTools$Resolution &) const;
            void setDefaultOperator(const ::org::apache::lucene::queryparser::classic::QueryParser$Operator &) const;
            void setDeterminizeWorkLimit(jint) const;
            void setFuzzyMinSim(jfloat) const;
            void setFuzzyPrefixLength(jint) const;
            void setLocale(const ::java::util::Locale &) const;
            void setMultiTermRewriteMethod(const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &) const;
            void setPhraseSlop(jint) const;
            void setTimeZone(const ::java::util::TimeZone &) const;
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
          extern PyType_Def PY_TYPE_DEF(QueryParserBase);
          extern PyTypeObject *PY_TYPE(QueryParserBase);

          class t_QueryParserBase {
          public:
            PyObject_HEAD
            QueryParserBase object;
            static PyObject *wrap_Object(const QueryParserBase&);
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
