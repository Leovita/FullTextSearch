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
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_e154c2ccc36b3bb2,
              mid_createComponents_b734244e69a6c631,
              mid_initReader_9b0aaf55e5811bc6,
              mid_initReaderForNormalization_9b0aaf55e5811bc6,
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
