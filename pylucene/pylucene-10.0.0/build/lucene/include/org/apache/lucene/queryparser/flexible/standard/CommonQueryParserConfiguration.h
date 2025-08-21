#ifndef org_apache_lucene_queryparser_flexible_standard_CommonQueryParserConfiguration_H
#define org_apache_lucene_queryparser_flexible_standard_CommonQueryParserConfiguration_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class DateTools$Resolution;
      }
      namespace search {
        class MultiTermQuery$RewriteMethod;
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
        namespace flexible {
          namespace standard {

            class CommonQueryParserConfiguration : public ::java::lang::Object {
             public:
              enum {
                mid_getAllowLeadingWildcard_947277eca0748c4e,
                mid_getAnalyzer_6755ba003d984513,
                mid_getEnablePositionIncrements_947277eca0748c4e,
                mid_getFuzzyMinSim_9b6c3480dac00edf,
                mid_getFuzzyPrefixLength_20fbf7565993c3d7,
                mid_getLocale_319fd40ee3061260,
                mid_getMultiTermRewriteMethod_69f9b567563cc3af,
                mid_getPhraseSlop_20fbf7565993c3d7,
                mid_getTimeZone_1559a29f5a26b141,
                mid_setAllowLeadingWildcard_b110fc3a58c081ab,
                mid_setDateResolution_2be4ed3be7cfaf63,
                mid_setEnablePositionIncrements_b110fc3a58c081ab,
                mid_setFuzzyMinSim_c771a95b0227fb6a,
                mid_setFuzzyPrefixLength_540b2b23d51b1efd,
                mid_setLocale_25a056d06ffd1209,
                mid_setMultiTermRewriteMethod_edfee9e3c27be2a0,
                mid_setPhraseSlop_540b2b23d51b1efd,
                mid_setTimeZone_1bdebe6495070eda,
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
