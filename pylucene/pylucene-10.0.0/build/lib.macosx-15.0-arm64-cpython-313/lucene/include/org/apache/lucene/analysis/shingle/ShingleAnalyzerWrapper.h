#ifndef org_apache_lucene_analysis_shingle_ShingleAnalyzerWrapper_H
#define org_apache_lucene_analysis_shingle_ShingleAnalyzerWrapper_H

#include "org/apache/lucene/analysis/AnalyzerWrapper.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
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
              mid_init$_3720c61b0679eb3e,
              mid_init$_07cd0f76cabcf75a,
              mid_init$_7d805f720158f192,
              mid_init$_e13cff512ebda969,
              mid_init$_243cde3a6b13ee99,
              mid_init$_090e39ffd9a0e08e,
              mid_getFillerToken_09a7afff1868fc5e,
              mid_getMaxShingleSize_20fbf7565993c3d7,
              mid_getMinShingleSize_20fbf7565993c3d7,
              mid_getTokenSeparator_09a7afff1868fc5e,
              mid_getWrappedAnalyzer_a1f5809ec41164b8,
              mid_isOutputUnigrams_947277eca0748c4e,
              mid_isOutputUnigramsIfNoShingles_947277eca0748c4e,
              mid_wrapComponents_3176534f1faba3ea,
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
