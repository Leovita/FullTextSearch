#ifndef org_apache_lucene_analysis_nl_DutchAnalyzer_H
#define org_apache_lucene_analysis_nl_DutchAnalyzer_H

#include "org/apache/lucene/analysis/Analyzer.h"

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
        class CharArrayMap;
        class CharArraySet;
      }
    }
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
              mid_init$_3720c61b0679eb3e,
              mid_init$_dabfba64ef3a59b5,
              mid_init$_a7858b97563895e9,
              mid_init$_b151225cefd48198,
              mid_getDefaultStopSet_7a52625961f2f88e,
              mid_createComponents_f774fffda992519d,
              mid_normalize_9793d650e44fa07f,
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
