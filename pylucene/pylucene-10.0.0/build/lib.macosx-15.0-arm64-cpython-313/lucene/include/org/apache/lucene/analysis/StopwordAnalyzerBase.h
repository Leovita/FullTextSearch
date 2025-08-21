#ifndef org_apache_lucene_analysis_StopwordAnalyzerBase_H
#define org_apache_lucene_analysis_StopwordAnalyzerBase_H

#include "org/apache/lucene/analysis/Analyzer.h"

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

        class StopwordAnalyzerBase : public ::org::apache::lucene::analysis::Analyzer {
         public:
          enum {
            mid_getStopwordSet_7a52625961f2f88e,
            mid_loadStopwordSet_857fc18130886b55,
            mid_loadStopwordSet_791e05356dccb21f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StopwordAnalyzerBase(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StopwordAnalyzerBase(const StopwordAnalyzerBase& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

          ::org::apache::lucene::analysis::CharArraySet getStopwordSet() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(StopwordAnalyzerBase);
        extern PyTypeObject *PY_TYPE(StopwordAnalyzerBase);

        class t_StopwordAnalyzerBase {
        public:
          PyObject_HEAD
          StopwordAnalyzerBase object;
          static PyObject *wrap_Object(const StopwordAnalyzerBase&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
