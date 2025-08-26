#ifndef org_apache_lucene_analysis_en_EnglishAnalyzer_H
#define org_apache_lucene_analysis_en_EnglishAnalyzer_H

#include "org/apache/lucene/analysis/StopwordAnalyzerBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharArraySet;
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
        namespace en {

          class EnglishAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_e214f28c42bbd933,
              mid_init$_0cbff95d319fe030,
              mid_getDefaultStopSet_0a8f3a685855aa4f,
              mid_createComponents_b734244e69a6c631,
              mid_normalize_6c106c857ee0afd1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EnglishAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            EnglishAnalyzer(const EnglishAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            static ::org::apache::lucene::analysis::CharArraySet *ENGLISH_STOP_WORDS_SET;

            EnglishAnalyzer();
            EnglishAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &);
            EnglishAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &, const ::org::apache::lucene::analysis::CharArraySet &);

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
        namespace en {
          extern PyType_Def PY_TYPE_DEF(EnglishAnalyzer);
          extern PyTypeObject *PY_TYPE(EnglishAnalyzer);

          class t_EnglishAnalyzer {
          public:
            PyObject_HEAD
            EnglishAnalyzer object;
            static PyObject *wrap_Object(const EnglishAnalyzer&);
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
