#ifndef org_apache_lucene_queryparser_flexible_standard_StandardQueryParser_H
#define org_apache_lucene_queryparser_flexible_standard_StandardQueryParser_H

#include "org/apache/lucene/queryparser/flexible/core/QueryParserHelper.h"

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
        namespace flexible {
          namespace standard {
            class CommonQueryParserConfiguration;
            namespace config {
              class StandardQueryConfigHandler$Operator;
              class PointsConfig;
            }
          }
          namespace core {
            class QueryNodeException;
          }
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
    class Float;
    class Class;
    class CharSequence;
    class String;
  }
  namespace util {
    class Map;
    class TimeZone;
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
                mid_init$_3720c61b0679eb3e,
                mid_init$_07cd0f76cabcf75a,
                mid_getAllowLeadingWildcard_947277eca0748c4e,
                mid_getAnalyzer_6755ba003d984513,
                mid_getDateResolution_da3fdfc4d853f314,
                mid_getDateResolutionMap_f125f26c07a7bec8,
                mid_getDefaultOperator_b3ee315e80f6db25,
                mid_getEnablePositionIncrements_947277eca0748c4e,
                mid_getFieldsBoost_f125f26c07a7bec8,
                mid_getFuzzyMinSim_9b6c3480dac00edf,
                mid_getFuzzyPrefixLength_20fbf7565993c3d7,
                mid_getLocale_319fd40ee3061260,
                mid_getMultiFields_1a703562b2da0b5d,
                mid_getMultiTermRewriteMethod_69f9b567563cc3af,
                mid_getPhraseSlop_20fbf7565993c3d7,
                mid_getPointsConfigMap_f125f26c07a7bec8,
                mid_getTimeZone_1559a29f5a26b141,
                mid_parse_9c67907ed0ac8b67,
                mid_setAllowLeadingWildcard_b110fc3a58c081ab,
                mid_setAnalyzer_07cd0f76cabcf75a,
                mid_setDateResolution_2be4ed3be7cfaf63,
                mid_setDateResolutionMap_79ba0f5a7d05e623,
                mid_setDefaultOperator_8ff1de9a70fddb07,
                mid_setEnablePositionIncrements_b110fc3a58c081ab,
                mid_setFieldsBoost_79ba0f5a7d05e623,
                mid_setFuzzyMinSim_c771a95b0227fb6a,
                mid_setFuzzyPrefixLength_540b2b23d51b1efd,
                mid_setLocale_25a056d06ffd1209,
                mid_setMultiFields_b30c21896ae0071a,
                mid_setMultiTermRewriteMethod_edfee9e3c27be2a0,
                mid_setPhraseSlop_540b2b23d51b1efd,
                mid_setPointsConfigMap_79ba0f5a7d05e623,
                mid_setTimeZone_1bdebe6495070eda,
                mid_toString_09a7afff1868fc5e,
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
