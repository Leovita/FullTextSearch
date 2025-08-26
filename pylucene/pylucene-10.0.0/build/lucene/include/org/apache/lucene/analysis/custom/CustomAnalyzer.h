#ifndef org_apache_lucene_analysis_custom_CustomAnalyzer_H
#define org_apache_lucene_analysis_custom_CustomAnalyzer_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenFilterFactory;
        class CharFilterFactory;
        namespace custom {
          class CustomAnalyzer$Builder;
        }
        class TokenizerFactory;
      }
      namespace util {
        class ResourceLoader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace custom {

          class CustomAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
           public:
            enum {
              mid_builder_05785b09dcf57625,
              mid_builder_fe907a1be78692e0,
              mid_builder_fc82171caa3b0086,
              mid_getCharFilterFactories_1387e1e2702ac173,
              mid_getOffsetGap_fa2a6f298bd618ab,
              mid_getPositionIncrementGap_fa2a6f298bd618ab,
              mid_getTokenFilterFactories_1387e1e2702ac173,
              mid_getTokenizerFactory_d024c9efebe41887,
              mid_toString_e7df854526d67fa3,
              mid_createComponents_b734244e69a6c631,
              mid_initReader_9b0aaf55e5811bc6,
              mid_initReaderForNormalization_9b0aaf55e5811bc6,
              mid_normalize_6c106c857ee0afd1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CustomAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CustomAnalyzer(const CustomAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

            static ::org::apache::lucene::analysis::custom::CustomAnalyzer$Builder builder();
            static ::org::apache::lucene::analysis::custom::CustomAnalyzer$Builder builder(const ::java::nio::file::Path &);
            static ::org::apache::lucene::analysis::custom::CustomAnalyzer$Builder builder(const ::org::apache::lucene::util::ResourceLoader &);
            ::java::util::List getCharFilterFactories() const;
            jint getOffsetGap(const ::java::lang::String &) const;
            jint getPositionIncrementGap(const ::java::lang::String &) const;
            ::java::util::List getTokenFilterFactories() const;
            ::org::apache::lucene::analysis::TokenizerFactory getTokenizerFactory() const;
            ::java::lang::String toString() const;
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
      namespace analysis {
        namespace custom {
          extern PyType_Def PY_TYPE_DEF(CustomAnalyzer);
          extern PyTypeObject *PY_TYPE(CustomAnalyzer);

          class t_CustomAnalyzer {
          public:
            PyObject_HEAD
            CustomAnalyzer object;
            static PyObject *wrap_Object(const CustomAnalyzer&);
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
