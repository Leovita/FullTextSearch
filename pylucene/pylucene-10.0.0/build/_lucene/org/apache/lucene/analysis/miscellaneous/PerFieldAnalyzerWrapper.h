#ifndef org_apache_lucene_analysis_miscellaneous_PerFieldAnalyzerWrapper_H
#define org_apache_lucene_analysis_miscellaneous_PerFieldAnalyzerWrapper_H

#include "org/apache/lucene/analysis/DelegatingAnalyzerWrapper.h"

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
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class PerFieldAnalyzerWrapper : public ::org::apache::lucene::analysis::DelegatingAnalyzerWrapper {
           public:
            enum {
              mid_init$_07cd0f76cabcf75a,
              mid_init$_7385dc08a4c2e1b0,
              mid_toString_09a7afff1868fc5e,
              mid_getWrappedAnalyzer_a1f5809ec41164b8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PerFieldAnalyzerWrapper(jobject obj) : ::org::apache::lucene::analysis::DelegatingAnalyzerWrapper(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PerFieldAnalyzerWrapper(const PerFieldAnalyzerWrapper& obj) : ::org::apache::lucene::analysis::DelegatingAnalyzerWrapper(obj) {}

            PerFieldAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &);
            PerFieldAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &, const ::java::util::Map &);

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
          extern PyType_Def PY_TYPE_DEF(PerFieldAnalyzerWrapper);
          extern PyTypeObject *PY_TYPE(PerFieldAnalyzerWrapper);

          class t_PerFieldAnalyzerWrapper {
          public:
            PyObject_HEAD
            PerFieldAnalyzerWrapper object;
            static PyObject *wrap_Object(const PerFieldAnalyzerWrapper&);
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
