#ifndef org_apache_lucene_analysis_standard_StandardAnalyzer_H
#define org_apache_lucene_analysis_standard_StandardAnalyzer_H

#include "org/apache/lucene/analysis/StopwordAnalyzerBase.h"

namespace java {
  namespace io {
    class Reader;
    class IOException;
  }
  namespace lang {
    class Class;
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
        namespace standard {

          class StandardAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_dabfba64ef3a59b5,
              mid_init$_fa55492f0f5d7f31,
              mid_getMaxTokenLength_20fbf7565993c3d7,
              mid_setMaxTokenLength_540b2b23d51b1efd,
              mid_createComponents_f774fffda992519d,
              mid_normalize_9793d650e44fa07f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StandardAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StandardAnalyzer(const StandardAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            static jint DEFAULT_MAX_TOKEN_LENGTH;

            StandardAnalyzer();
            StandardAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &);
            StandardAnalyzer(const ::java::io::Reader &);

            jint getMaxTokenLength() const;
            void setMaxTokenLength(jint) const;
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
        namespace standard {
          extern PyType_Def PY_TYPE_DEF(StandardAnalyzer);
          extern PyTypeObject *PY_TYPE(StandardAnalyzer);

          class t_StandardAnalyzer {
          public:
            PyObject_HEAD
            StandardAnalyzer object;
            static PyObject *wrap_Object(const StandardAnalyzer&);
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
