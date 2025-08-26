#ifndef org_apache_lucene_analysis_shingle_ShingleAnalyzerWrapper_H
#define org_apache_lucene_analysis_shingle_ShingleAnalyzerWrapper_H

#include "org/apache/lucene/analysis/AnalyzerWrapper.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace shingle {

          class ShingleAnalyzerWrapper : public ::org::apache::lucene::analysis::AnalyzerWrapper {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_1aaca852402a5069,
              mid_init$_4d5dc95ef6ea4b72,
              mid_init$_645c25455f5b9b1c,
              mid_init$_b90a8216fde78e62,
              mid_init$_04296aa3ec411533,
              mid_getFillerToken_e7df854526d67fa3,
              mid_getMaxShingleSize_bd89ce15dad49192,
              mid_getMinShingleSize_bd89ce15dad49192,
              mid_getTokenSeparator_e7df854526d67fa3,
              mid_getWrappedAnalyzer_422029012b3df2c8,
              mid_isOutputUnigrams_9aa4f33e82ea333f,
              mid_isOutputUnigramsIfNoShingles_9aa4f33e82ea333f,
              mid_wrapComponents_c424eb4df905e9cf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ShingleAnalyzerWrapper(jobject obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ShingleAnalyzerWrapper(const ShingleAnalyzerWrapper& obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {}

            ShingleAnalyzerWrapper();
            ShingleAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &);
            ShingleAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &, jint);
            ShingleAnalyzerWrapper(jint, jint);
            ShingleAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &, jint, jint);
            ShingleAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &, jint, jint, const ::java::lang::String &, jboolean, jboolean, const ::java::lang::String &);

            ::java::lang::String getFillerToken() const;
            jint getMaxShingleSize() const;
            jint getMinShingleSize() const;
            ::java::lang::String getTokenSeparator() const;
            ::org::apache::lucene::analysis::Analyzer getWrappedAnalyzer(const ::java::lang::String &) const;
            jboolean isOutputUnigrams() const;
            jboolean isOutputUnigramsIfNoShingles() const;
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
        namespace shingle {
          extern PyType_Def PY_TYPE_DEF(ShingleAnalyzerWrapper);
          extern PyTypeObject *PY_TYPE(ShingleAnalyzerWrapper);

          class t_ShingleAnalyzerWrapper {
          public:
            PyObject_HEAD
            ShingleAnalyzerWrapper object;
            static PyObject *wrap_Object(const ShingleAnalyzerWrapper&);
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
