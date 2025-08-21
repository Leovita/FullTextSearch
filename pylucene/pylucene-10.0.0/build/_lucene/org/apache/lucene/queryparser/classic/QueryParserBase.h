#ifndef org_apache_lucene_queryparser_classic_QueryParserBase_H
#define org_apache_lucene_queryparser_classic_QueryParserBase_H

#include "org/apache/lucene/util/QueryBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class MultiTermQuery$RewriteMethod;
      }
      namespace document {
        class DateTools$Resolution;
      }
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
      namespace analysis {
        class Analyzer;
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
              mid_ReInit_c2b02911839614e6,
              mid_TopLevelQuery_171433ef85015467,
              mid_escape_cb0eb1432185fc94,
              mid_getAllowLeadingWildcard_947277eca0748c4e,
              mid_getAutoGeneratePhraseQueries_947277eca0748c4e,
              mid_getDateResolution_92aca2d981a92351,
              mid_getDefaultOperator_34959f8c573c1cb6,
              mid_getDeterminizeWorkLimit_20fbf7565993c3d7,
              mid_getField_09a7afff1868fc5e,
              mid_getFuzzyMinSim_9b6c3480dac00edf,
              mid_getFuzzyPrefixLength_20fbf7565993c3d7,
              mid_getLocale_319fd40ee3061260,
              mid_getMultiTermRewriteMethod_69f9b567563cc3af,
              mid_getPhraseSlop_20fbf7565993c3d7,
              mid_getTimeZone_1559a29f5a26b141,
              mid_init_c50f2f6f1d850d13,
              mid_parse_171433ef85015467,
              mid_setAllowLeadingWildcard_b110fc3a58c081ab,
              mid_setAutoGeneratePhraseQueries_b110fc3a58c081ab,
              mid_setDateResolution_2be4ed3be7cfaf63,
              mid_setDateResolution_946669d8f7532e6e,
              mid_setDefaultOperator_164f65d769154d30,
              mid_setDeterminizeWorkLimit_540b2b23d51b1efd,
              mid_setFuzzyMinSim_c771a95b0227fb6a,
              mid_setFuzzyPrefixLength_540b2b23d51b1efd,
              mid_setLocale_25a056d06ffd1209,
              mid_setMultiTermRewriteMethod_edfee9e3c27be2a0,
              mid_setPhraseSlop_540b2b23d51b1efd,
              mid_setTimeZone_1bdebe6495070eda,
              mid_addClause_7a47174e0a633939,
              mid_newRangeQuery_5d2f96a769d522a4,
              mid_getFieldQuery_0904a80daeba8529,
              mid_getFieldQuery_bf6a5f4bf27919ae,
              mid_getBooleanQuery_cfa763d4712e8bc9,
              mid_getFuzzyQuery_afdd0007c4927190,
              mid_getPrefixQuery_9c67907ed0ac8b67,
              mid_getRangeQuery_5d2f96a769d522a4,
              mid_getWildcardQuery_9c67907ed0ac8b67,
              mid_getRegexpQuery_9c67907ed0ac8b67,
              mid_addMultiTermClauses_52fe98907c755ddb,
              mid_newBooleanClause_60173cad66095e1f,
              mid_newFieldQuery_ca9c1be4e87ff1f8,
              mid_newMatchAllDocsQuery_a3eacfacada795d4,
              mid_newWildcardQuery_4b8582c581d6c16f,
              mid_newRegexpQuery_4b8582c581d6c16f,
              mid_newPrefixQuery_4b8582c581d6c16f,
              mid_newFuzzyQuery_ac7b1de948619d65,
              mid_getFuzzyDistance_57fbc9afec715603,
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
