#ifndef org_apache_lucene_queryparser_flexible_standard_CommonQueryParserConfiguration_H
#define org_apache_lucene_queryparser_flexible_standard_CommonQueryParserConfiguration_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class TimeZone;
    class Locale;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class DateTools$Resolution;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        class MultiTermQuery$RewriteMethod;
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

            class CommonQueryParserConfiguration : public ::java::lang::Object {
             public:
              enum {
                mid_getAllowLeadingWildcard_9aa4f33e82ea333f,
                mid_getAnalyzer_7bc9b23f56937752,
                mid_getEnablePositionIncrements_9aa4f33e82ea333f,
                mid_getFuzzyMinSim_8b62236f0e4d0dbc,
                mid_getFuzzyPrefixLength_bd89ce15dad49192,
                mid_getLocale_d50f7bd45bffb467,
                mid_getMultiTermRewriteMethod_cdae28086b3bbe9c,
                mid_getPhraseSlop_bd89ce15dad49192,
                mid_getTimeZone_f0ab2fb84439b1af,
                mid_setAllowLeadingWildcard_f5dd97eebf6a215a,
                mid_setDateResolution_fc9c774cd4ca88ae,
                mid_setEnablePositionIncrements_f5dd97eebf6a215a,
                mid_setFuzzyMinSim_675f4cb9a2529ee0,
                mid_setFuzzyPrefixLength_8226bd0b0fc13dba,
                mid_setLocale_160efbb0dee8e527,
                mid_setMultiTermRewriteMethod_83f3c0af3316ffc0,
                mid_setPhraseSlop_8226bd0b0fc13dba,
                mid_setTimeZone_6bae4ff1843f5310,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CommonQueryParserConfiguration(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CommonQueryParserConfiguration(const CommonQueryParserConfiguration& obj) : ::java::lang::Object(obj) {}

              jboolean getAllowLeadingWildcard() const;
              ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
              jboolean getEnablePositionIncrements() const;
              jfloat getFuzzyMinSim() const;
              jint getFuzzyPrefixLength() const;
              ::java::util::Locale getLocale() const;
              ::org::apache::lucene::search::MultiTermQuery$RewriteMethod getMultiTermRewriteMethod() const;
              jint getPhraseSlop() const;
              ::java::util::TimeZone getTimeZone() const;
              void setAllowLeadingWildcard(jboolean) const;
              void setDateResolution(const ::org::apache::lucene::document::DateTools$Resolution &) const;
              void setEnablePositionIncrements(jboolean) const;
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
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            extern PyType_Def PY_TYPE_DEF(CommonQueryParserConfiguration);
            extern PyTypeObject *PY_TYPE(CommonQueryParserConfiguration);

            class t_CommonQueryParserConfiguration {
            public:
              PyObject_HEAD
              CommonQueryParserConfiguration object;
              static PyObject *wrap_Object(const CommonQueryParserConfiguration&);
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
