#ifndef org_apache_lucene_analysis_miscellaneous_LimitTokenCountAnalyzer_H
#define org_apache_lucene_analysis_miscellaneous_LimitTokenCountAnalyzer_H

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
        namespace miscellaneous {

          class LimitTokenCountAnalyzer : public ::org::apache::lucene::analysis::AnalyzerWrapper {
           public:
            enum {
              mid_init$_4d5dc95ef6ea4b72,
              mid_init$_9ff90995f68f9ebe,
              mid_toString_e7df854526d67fa3,
              mid_getWrappedAnalyzer_422029012b3df2c8,
              mid_wrapComponents_c424eb4df905e9cf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LimitTokenCountAnalyzer(jobject obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LimitTokenCountAnalyzer(const LimitTokenCountAnalyzer& obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {}

            LimitTokenCountAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, jint);
            LimitTokenCountAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, jint, jboolean);

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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(LimitTokenCountAnalyzer);
          extern PyTypeObject *PY_TYPE(LimitTokenCountAnalyzer);

          class t_LimitTokenCountAnalyzer {
          public:
            PyObject_HEAD
            LimitTokenCountAnalyzer object;
            static PyObject *wrap_Object(const LimitTokenCountAnalyzer&);
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
