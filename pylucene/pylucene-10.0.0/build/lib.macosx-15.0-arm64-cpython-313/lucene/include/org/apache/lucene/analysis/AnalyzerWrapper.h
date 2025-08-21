#ifndef org_apache_lucene_analysis_AnalyzerWrapper_H
#define org_apache_lucene_analysis_AnalyzerWrapper_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace java {
  namespace io {
    class Reader;
  }
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

        class AnalyzerWrapper : public ::org::apache::lucene::analysis::Analyzer {
         public:
          enum {
            mid_getOffsetGap_3f230d713d7fd2b0,
            mid_getPositionIncrementGap_3f230d713d7fd2b0,
            mid_initReader_f755529383524495,
            mid_getWrappedAnalyzer_a1f5809ec41164b8,
            mid_wrapComponents_3176534f1faba3ea,
            mid_wrapReader_f755529383524495,
            mid_wrapReaderForNormalization_f755529383524495,
            mid_wrapTokenStreamForNormalization_9793d650e44fa07f,
            mid_createComponents_f774fffda992519d,
            mid_initReaderForNormalization_f755529383524495,
            mid_attributeFactory_32e9e9f90ba9887a,
            mid_normalize_9793d650e44fa07f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AnalyzerWrapper(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AnalyzerWrapper(const AnalyzerWrapper& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

          jint getOffsetGap(const ::java::lang::String &) const;
          jint getPositionIncrementGap(const ::java::lang::String &) const;
          ::java::io::Reader initReader(const ::java::lang::String &, const ::java::io::Reader &) const;
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
        extern PyType_Def PY_TYPE_DEF(AnalyzerWrapper);
        extern PyTypeObject *PY_TYPE(AnalyzerWrapper);

        class t_AnalyzerWrapper {
        public:
          PyObject_HEAD
          AnalyzerWrapper object;
          static PyObject *wrap_Object(const AnalyzerWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
