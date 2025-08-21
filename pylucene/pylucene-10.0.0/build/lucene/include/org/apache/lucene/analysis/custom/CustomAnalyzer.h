#ifndef org_apache_lucene_analysis_custom_CustomAnalyzer_H
#define org_apache_lucene_analysis_custom_CustomAnalyzer_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenizerFactory;
        class CharFilterFactory;
        class TokenFilterFactory;
        namespace custom {
          class CustomAnalyzer$Builder;
        }
      }
      namespace util {
        class ResourceLoader;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace nio {
    namespace file {
      class Path;
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
              mid_builder_2ec25e4994287f08,
              mid_builder_471d39035f979c6a,
              mid_builder_30e52e28e0f89030,
              mid_getCharFilterFactories_36830460e10839eb,
              mid_getOffsetGap_3f230d713d7fd2b0,
              mid_getPositionIncrementGap_3f230d713d7fd2b0,
              mid_getTokenFilterFactories_36830460e10839eb,
              mid_getTokenizerFactory_7f99b2e0ff43b678,
              mid_toString_09a7afff1868fc5e,
              mid_createComponents_f774fffda992519d,
              mid_initReader_f755529383524495,
              mid_initReaderForNormalization_f755529383524495,
              mid_normalize_9793d650e44fa07f,
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
