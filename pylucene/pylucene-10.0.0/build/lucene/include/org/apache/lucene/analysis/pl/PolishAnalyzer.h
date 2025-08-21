#ifndef org_apache_lucene_analysis_pl_PolishAnalyzer_H
#define org_apache_lucene_analysis_pl_PolishAnalyzer_H

#include "org/apache/lucene/analysis/StopwordAnalyzerBase.h"

namespace org {
  namespace egothor {
    namespace stemmer {
      class Trie;
    }
  }
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
        namespace pl {

          class PolishAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_dabfba64ef3a59b5,
              mid_init$_a7858b97563895e9,
              mid_getDefaultStopSet_7a52625961f2f88e,
              mid_getDefaultTable_dc1dc3bed88c12f2,
              mid_createComponents_f774fffda992519d,
              mid_normalize_9793d650e44fa07f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PolishAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PolishAnalyzer(const PolishAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            static ::java::lang::String *DEFAULT_STEMMER_FILE;
            static ::java::lang::String *DEFAULT_STOPWORD_FILE;

            PolishAnalyzer();
            PolishAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &);
            PolishAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &, const ::org::apache::lucene::analysis::CharArraySet &);

            static ::org::apache::lucene::analysis::CharArraySet getDefaultStopSet();
            static ::org::egothor::stemmer::Trie getDefaultTable();
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
        namespace pl {
          extern PyType_Def PY_TYPE_DEF(PolishAnalyzer);
          extern PyTypeObject *PY_TYPE(PolishAnalyzer);

          class t_PolishAnalyzer {
          public:
            PyObject_HEAD
            PolishAnalyzer object;
            static PyObject *wrap_Object(const PolishAnalyzer&);
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
