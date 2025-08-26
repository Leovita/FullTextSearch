#ifndef org_apache_lucene_analysis_sv_SwedishAnalyzer_H
#define org_apache_lucene_analysis_sv_SwedishAnalyzer_H

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
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace sv {

          class SwedishAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
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

            explicit SwedishAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SwedishAnalyzer(const SwedishAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            static ::java::lang::String *DEFAULT_STOPWORD_FILE;

            SwedishAnalyzer();
            SwedishAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &);
            SwedishAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &, const ::org::apache::lucene::analysis::CharArraySet &);

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
        namespace sv {
          extern PyType_Def PY_TYPE_DEF(SwedishAnalyzer);
          extern PyTypeObject *PY_TYPE(SwedishAnalyzer);

          class t_SwedishAnalyzer {
          public:
            PyObject_HEAD
            SwedishAnalyzer object;
            static PyObject *wrap_Object(const SwedishAnalyzer&);
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
