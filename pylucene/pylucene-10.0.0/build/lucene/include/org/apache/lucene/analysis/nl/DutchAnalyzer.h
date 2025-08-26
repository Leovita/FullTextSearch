#ifndef org_apache_lucene_analysis_nl_DutchAnalyzer_H
#define org_apache_lucene_analysis_nl_DutchAnalyzer_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharArraySet;
        class CharArrayMap;
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
        namespace nl {

          class DutchAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_e214f28c42bbd933,
              mid_init$_0cbff95d319fe030,
              mid_init$_ac6800c8ad12d407,
              mid_getDefaultStopSet_0a8f3a685855aa4f,
              mid_createComponents_b734244e69a6c631,
              mid_normalize_6c106c857ee0afd1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DutchAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DutchAnalyzer(const DutchAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

            static ::java::lang::String *DEFAULT_STOPWORD_FILE;

            DutchAnalyzer();
            DutchAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &);
            DutchAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &, const ::org::apache::lucene::analysis::CharArraySet &);
            DutchAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &, const ::org::apache::lucene::analysis::CharArraySet &, const ::org::apache::lucene::analysis::CharArrayMap &);

            static ::org::apache::lucene::analysis::CharArraySet getDefaultStopSet();
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
        namespace nl {
          extern PyType_Def PY_TYPE_DEF(DutchAnalyzer);
          extern PyTypeObject *PY_TYPE(DutchAnalyzer);

          class t_DutchAnalyzer {
          public:
            PyObject_HEAD
            DutchAnalyzer object;
            static PyObject *wrap_Object(const DutchAnalyzer&);
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
