#ifndef org_apache_lucene_analysis_AnalyzerWrapper_H
#define org_apache_lucene_analysis_AnalyzerWrapper_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class Reader;
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
            mid_getOffsetGap_fa2a6f298bd618ab,
            mid_getPositionIncrementGap_fa2a6f298bd618ab,
            mid_initReader_9b0aaf55e5811bc6,
            mid_getWrappedAnalyzer_422029012b3df2c8,
            mid_wrapComponents_c424eb4df905e9cf,
            mid_wrapTokenStreamForNormalization_6c106c857ee0afd1,
            mid_wrapReader_9b0aaf55e5811bc6,
            mid_wrapReaderForNormalization_9b0aaf55e5811bc6,
            mid_createComponents_b734244e69a6c631,
            mid_initReaderForNormalization_9b0aaf55e5811bc6,
            mid_attributeFactory_5f32c7c12dae06ab,
            mid_normalize_6c106c857ee0afd1,
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
