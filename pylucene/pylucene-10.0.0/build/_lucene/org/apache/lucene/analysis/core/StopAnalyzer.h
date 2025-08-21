#ifndef org_apache_lucene_analysis_core_StopAnalyzer_H
#define org_apache_lucene_analysis_core_StopAnalyzer_H

#include "org/apache/lucene/analysis/StopwordAnalyzerBase.h"

namespace java {
  namespace io {
    class IOException;
    class Reader;
  }
  namespace lang {
    class Class;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
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
        namespace core {

          class StopAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
           public:
            enum {
              mid_init$_dabfba64ef3a59b5,
              mid_init$_fa55492f0f5d7f31,
              mid_init$_8a3244428bfc77b8,
              mid_createComponents_f774fffda992519d,
              mid_normalize_9793d650e44fa07f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StopAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StopAnalyzer(const StopAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            StopAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &);
            StopAnalyzer(const ::java::io::Reader &);
            StopAnalyzer(const ::java::nio::file::Path &);
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
        namespace core {
          extern PyType_Def PY_TYPE_DEF(StopAnalyzer);
          extern PyTypeObject *PY_TYPE(StopAnalyzer);

          class t_StopAnalyzer {
          public:
            PyObject_HEAD
            StopAnalyzer object;
            static PyObject *wrap_Object(const StopAnalyzer&);
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
