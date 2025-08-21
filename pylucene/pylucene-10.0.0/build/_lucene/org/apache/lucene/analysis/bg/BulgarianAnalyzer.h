#ifndef org_apache_lucene_analysis_bg_BulgarianAnalyzer_H
#define org_apache_lucene_analysis_bg_BulgarianAnalyzer_H

#include "org/apache/lucene/analysis/StopwordAnalyzerBase.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharArraySet;
        class Analyzer$TokenStreamComponents;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace bg {

          class BulgarianAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_dabfba64ef3a59b5,
              mid_init$_a7858b97563895e9,
              mid_createComponents_f774fffda992519d,
              mid_getDefaultStopSet_7a52625961f2f88e,
              mid_normalize_9793d650e44fa07f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BulgarianAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BulgarianAnalyzer(const BulgarianAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            static ::java::lang::String *DEFAULT_STOPWORD_FILE;

            BulgarianAnalyzer();
            BulgarianAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &);
            BulgarianAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &, const ::org::apache::lucene::analysis::CharArraySet &);

            ::org::apache::lucene::analysis::Analyzer$TokenStreamComponents createComponents(const ::java::lang::String &) const;
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
        namespace bg {
          extern PyType_Def PY_TYPE_DEF(BulgarianAnalyzer);
          extern PyTypeObject *PY_TYPE(BulgarianAnalyzer);

          class t_BulgarianAnalyzer {
          public:
            PyObject_HEAD
            BulgarianAnalyzer object;
            static PyObject *wrap_Object(const BulgarianAnalyzer&);
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
