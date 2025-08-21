#ifndef org_apache_lucene_analysis_query_QueryAutoStopWordAnalyzer_H
#define org_apache_lucene_analysis_query_QueryAutoStopWordAnalyzer_H

#include "org/apache/lucene/analysis/AnalyzerWrapper.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class IndexReader;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
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
              mid_init$_d007f5639c0b426f,
              mid_init$_8b36052ccbfdf778,
              mid_init$_779861051e2637dd,
              mid_init$_7e7014362fcdce81,
              mid_init$_093d872d96df09f6,
              mid_getStopWords_3d8a8db60207da00,
              mid_getStopWords_a06e92f371939b0b,
              mid_getWrappedAnalyzer_a1f5809ec41164b8,
              mid_wrapComponents_3176534f1faba3ea,
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
