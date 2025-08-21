#ifndef org_apache_lucene_analysis_ja_JapaneseCompletionAnalyzer_H
#define org_apache_lucene_analysis_ja_JapaneseCompletionAnalyzer_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            class UserDictionary;
          }
          class JapaneseCompletionFilter$Mode;
        }
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
      namespace analysis {
        namespace ja {

          class JapaneseCompletionAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_27d3a41bc4dd4732,
              mid_createComponents_f774fffda992519d,
              mid_initReader_f755529383524495,
              mid_initReaderForNormalization_f755529383524495,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseCompletionAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseCompletionAnalyzer(const JapaneseCompletionAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

            JapaneseCompletionAnalyzer();
            JapaneseCompletionAnalyzer(const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, const ::org::apache::lucene::analysis::ja::JapaneseCompletionFilter$Mode &);
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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapaneseCompletionAnalyzer);
          extern PyTypeObject *PY_TYPE(JapaneseCompletionAnalyzer);

          class t_JapaneseCompletionAnalyzer {
          public:
            PyObject_HEAD
            JapaneseCompletionAnalyzer object;
            static PyObject *wrap_Object(const JapaneseCompletionAnalyzer&);
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
