#ifndef org_apache_lucene_search_suggest_document_CompletionAnalyzer_H
#define org_apache_lucene_search_suggest_document_CompletionAnalyzer_H

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
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {

            class CompletionAnalyzer : public ::org::apache::lucene::analysis::AnalyzerWrapper {
             public:
              enum {
                mid_init$_1aaca852402a5069,
                mid_init$_4d5dc95ef6ea4b72,
                mid_init$_9b307225bbbd75f1,
                mid_init$_5c1bc16943db645a,
                mid_preservePositionIncrements_9aa4f33e82ea333f,
                mid_preserveSep_9aa4f33e82ea333f,
                mid_getWrappedAnalyzer_422029012b3df2c8,
                mid_wrapComponents_c424eb4df905e9cf,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CompletionAnalyzer(jobject obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CompletionAnalyzer(const CompletionAnalyzer& obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {}

              CompletionAnalyzer(const ::org::apache::lucene::analysis::Analyzer &);
              CompletionAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, jint);
              CompletionAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, jboolean, jboolean);
              CompletionAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, jboolean, jboolean, jint);

              jboolean preservePositionIncrements() const;
              jboolean preserveSep() const;
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
      namespace search {
        namespace suggest {
          namespace document {
            extern PyType_Def PY_TYPE_DEF(CompletionAnalyzer);
            extern PyTypeObject *PY_TYPE(CompletionAnalyzer);

            class t_CompletionAnalyzer {
            public:
              PyObject_HEAD
              CompletionAnalyzer object;
              static PyObject *wrap_Object(const CompletionAnalyzer&);
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
