#ifndef org_apache_lucene_analysis_DelegatingAnalyzerWrapper_H
#define org_apache_lucene_analysis_DelegatingAnalyzerWrapper_H

#include "org/apache/lucene/analysis/AnalyzerWrapper.h"

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

        class DelegatingAnalyzerWrapper : public ::org::apache::lucene::analysis::AnalyzerWrapper {
         public:
          enum {
            mid_wrapComponents_c424eb4df905e9cf,
            mid_wrapTokenStreamForNormalization_6c106c857ee0afd1,
            mid_wrapReader_9b0aaf55e5811bc6,
            mid_wrapReaderForNormalization_9b0aaf55e5811bc6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DelegatingAnalyzerWrapper(jobject obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DelegatingAnalyzerWrapper(const DelegatingAnalyzerWrapper& obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {}
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
        extern PyType_Def PY_TYPE_DEF(DelegatingAnalyzerWrapper);
        extern PyTypeObject *PY_TYPE(DelegatingAnalyzerWrapper);

        class t_DelegatingAnalyzerWrapper {
        public:
          PyObject_HEAD
          DelegatingAnalyzerWrapper object;
          static PyObject *wrap_Object(const DelegatingAnalyzerWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
