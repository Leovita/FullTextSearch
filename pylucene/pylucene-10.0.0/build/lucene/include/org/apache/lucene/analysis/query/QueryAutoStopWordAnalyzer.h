#ifndef org_apache_lucene_analysis_query_QueryAutoStopWordAnalyzer_H
#define org_apache_lucene_analysis_query_QueryAutoStopWordAnalyzer_H

#include "org/apache/lucene/analysis/AnalyzerWrapper.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class Term;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace query {

          class QueryAutoStopWordAnalyzer : public ::org::apache::lucene::analysis::AnalyzerWrapper {
           public:
            enum {
              mid_init$_84d477b604a9119e,
              mid_init$_93af1acedd020766,
              mid_init$_14627bd7867431af,
              mid_init$_81d0f0f1ba66c2a8,
              mid_init$_5403a87dd60894c9,
              mid_getStopWords_4213a6ccf77ca299,
              mid_getStopWords_7b34cb521ce5d8ff,
              mid_getWrappedAnalyzer_422029012b3df2c8,
              mid_wrapComponents_c424eb4df905e9cf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryAutoStopWordAnalyzer(jobject obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryAutoStopWordAnalyzer(const QueryAutoStopWordAnalyzer& obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {}

            static jfloat defaultMaxDocFreqPercent;

            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &);
            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &, jfloat);
            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &, jint);
            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &, const ::java::util::Collection &, jfloat);
            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &, const ::java::util::Collection &, jint);

            JArray< ::org::apache::lucene::index::Term > getStopWords() const;
            JArray< ::java::lang::String > getStopWords(const ::java::lang::String &) const;
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
        namespace query {
          extern PyType_Def PY_TYPE_DEF(QueryAutoStopWordAnalyzer);
          extern PyTypeObject *PY_TYPE(QueryAutoStopWordAnalyzer);

          class t_QueryAutoStopWordAnalyzer {
          public:
            PyObject_HEAD
            QueryAutoStopWordAnalyzer object;
            static PyObject *wrap_Object(const QueryAutoStopWordAnalyzer&);
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
