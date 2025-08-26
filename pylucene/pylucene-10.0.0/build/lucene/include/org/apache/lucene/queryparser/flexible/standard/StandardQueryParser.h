#ifndef org_apache_lucene_queryparser_flexible_standard_StandardQueryParser_H
#define org_apache_lucene_queryparser_flexible_standard_StandardQueryParser_H

#include "org/apache/lucene/queryparser/flexible/core/QueryParserHelper.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace config {
              class StandardQueryConfigHandler$Operator;
              class PointsConfig;
            }
            class CommonQueryParserConfiguration;
          }
          namespace core {
            class QueryNodeException;
          }
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
    class Float;
    class String;
    class CharSequence;
  }
  namespace util {
    class TimeZone;
    class Map;
    class Locale;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {

            class StandardQueryParser : public ::org::apache::lucene::queryparser::flexible::core::QueryParserHelper {
             public:
              enum {
                mid_init$_e7bdbe105ce1bafb,
                mid_init$_1aaca852402a5069,
                mid_getAllowLeadingWildcard_9aa4f33e82ea333f,
                mid_getAnalyzer_7bc9b23f56937752,
                mid_getDateResolution_0d598bfde6ba9f12,
                mid_getDateResolutionMap_5004bdf19ed33453,
                mid_getDefaultOperator_c909c1766561139b,
                mid_getEnablePositionIncrements_9aa4f33e82ea333f,
                mid_getFieldsBoost_5004bdf19ed33453,
                mid_getFuzzyMinSim_8b62236f0e4d0dbc,
                mid_getFuzzyPrefixLength_bd89ce15dad49192,
                mid_getLocale_d50f7bd45bffb467,
                mid_getMultiFields_ee5989eab6390908,
                mid_getMultiTermRewriteMethod_cdae28086b3bbe9c,
                mid_getPhraseSlop_bd89ce15dad49192,
                mid_getPointsConfigMap_5004bdf19ed33453,
                mid_getTimeZone_f0ab2fb84439b1af,
                mid_parse_550dcf54034665c0,
                mid_setAllowLeadingWildcard_f5dd97eebf6a215a,
                mid_setAnalyzer_1aaca852402a5069,
                mid_setDateResolution_fc9c774cd4ca88ae,
                mid_setDateResolutionMap_6a7e23584beb7c0f,
                mid_setDefaultOperator_4f3299d3d53cb42e,
                mid_setEnablePositionIncrements_f5dd97eebf6a215a,
                mid_setFieldsBoost_6a7e23584beb7c0f,
                mid_setFuzzyMinSim_675f4cb9a2529ee0,
                mid_setFuzzyPrefixLength_8226bd0b0fc13dba,
                mid_setLocale_160efbb0dee8e527,
                mid_setMultiFields_970e6feef5936666,
                mid_setMultiTermRewriteMethod_83f3c0af3316ffc0,
                mid_setPhraseSlop_8226bd0b0fc13dba,
                mid_setPointsConfigMap_6a7e23584beb7c0f,
                mid_setTimeZone_6bae4ff1843f5310,
                mid_toString_e7df854526d67fa3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit StandardQueryParser(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::QueryParserHelper(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              StandardQueryParser(const StandardQueryParser& obj) : ::org::apache::lucene::queryparser::flexible::core::QueryParserHelper(obj) {}

              StandardQueryParser();
              StandardQueryParser(const ::org::apache::lucene::analysis::Analyzer &);

              jboolean getAllowLeadingWildcard() const;
              ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
              ::org::apache::lucene::document::DateTools$Resolution getDateResolution() const;
              ::java::util::Map getDateResolutionMap() const;
              ::org::apache::lucene::queryparser::flexible::standard::config::StandardQueryConfigHandler$Operator getDefaultOperator() const;
              jboolean getEnablePositionIncrements() const;
              ::java::util::Map getFieldsBoost() const;
              jfloat getFuzzyMinSim() const;
              jint getFuzzyPrefixLength() const;
              ::java::util::Locale getLocale() const;
              JArray< ::java::lang::CharSequence > getMultiFields() const;
              ::org::apache::lucene::search::MultiTermQuery$RewriteMethod getMultiTermRewriteMethod() const;
              jint getPhraseSlop() const;
              ::java::util::Map getPointsConfigMap() const;
              ::java::util::TimeZone getTimeZone() const;
              ::org::apache::lucene::search::Query parse(const ::java::lang::String &, const ::java::lang::String &) const;
              void setAllowLeadingWildcard(jboolean) const;
              void setAnalyzer(const ::org::apache::lucene::analysis::Analyzer &) const;
              void setDateResolution(const ::org::apache::lucene::document::DateTools$Resolution &) const;
              void setDateResolutionMap(const ::java::util::Map &) const;
              void setDefaultOperator(const ::org::apache::lucene::queryparser::flexible::standard::config::StandardQueryConfigHandler$Operator &) const;
              void setEnablePositionIncrements(jboolean) const;
              void setFieldsBoost(const ::java::util::Map &) const;
              void setFuzzyMinSim(jfloat) const;
              void setFuzzyPrefixLength(jint) const;
              void setLocale(const ::java::util::Locale &) const;
              void setMultiFields(const JArray< ::java::lang::CharSequence > &) const;
              void setMultiTermRewriteMethod(const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &) const;
              void setPhraseSlop(jint) const;
              void setPointsConfigMap(const ::java::util::Map &) const;
              void setTimeZone(const ::java::util::TimeZone &) const;
              ::java::lang::String toString() const;
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
          namespace standard {
            extern PyType_Def PY_TYPE_DEF(StandardQueryParser);
            extern PyTypeObject *PY_TYPE(StandardQueryParser);

            class t_StandardQueryParser {
            public:
              PyObject_HEAD
              StandardQueryParser object;
              static PyObject *wrap_Object(const StandardQueryParser&);
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
