#ifndef org_apache_lucene_analysis_ja_JapaneseAnalyzer_H
#define org_apache_lucene_analysis_ja_JapaneseAnalyzer_H

#include "org/apache/lucene/analysis/StopwordAnalyzerBase.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          class JapaneseTokenizer$Mode;
          namespace dict {
            class UserDictionary;
          }
        }
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
        namespace ja {

          class JapaneseAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_c954b79574636c68,
              mid_getDefaultStopSet_0a8f3a685855aa4f,
              mid_getDefaultStopTags_79131c6bbcf08916,
              mid_createComponents_b734244e69a6c631,
              mid_initReader_9b0aaf55e5811bc6,
              mid_initReaderForNormalization_9b0aaf55e5811bc6,
              mid_normalize_6c106c857ee0afd1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseAnalyzer(const JapaneseAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            JapaneseAnalyzer();
            JapaneseAnalyzer(const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &, const ::org::apache::lucene::analysis::CharArraySet &, const ::java::util::Set &);

            static ::org::apache::lucene::analysis::CharArraySet getDefaultStopSet();
            static ::java::util::Set getDefaultStopTags();
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
          extern PyType_Def PY_TYPE_DEF(JapaneseAnalyzer);
          extern PyTypeObject *PY_TYPE(JapaneseAnalyzer);

          class t_JapaneseAnalyzer {
          public:
            PyObject_HEAD
            JapaneseAnalyzer object;
            static PyObject *wrap_Object(const JapaneseAnalyzer&);
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
