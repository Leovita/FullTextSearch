#ifndef org_apache_lucene_analysis_classic_ClassicAnalyzer_H
#define org_apache_lucene_analysis_classic_ClassicAnalyzer_H

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
        namespace classic {

          class ClassicAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
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

            explicit ClassicAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ClassicAnalyzer(const ClassicAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            static jint DEFAULT_MAX_TOKEN_LENGTH;
            static ::org::apache::lucene::analysis::CharArraySet *STOP_WORDS_SET;

            ClassicAnalyzer();
            ClassicAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &);
            ClassicAnalyzer(const ::java::io::Reader &);

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
        namespace classic {
          extern PyType_Def PY_TYPE_DEF(ClassicAnalyzer);
          extern PyTypeObject *PY_TYPE(ClassicAnalyzer);

          class t_ClassicAnalyzer {
          public:
            PyObject_HEAD
            ClassicAnalyzer object;
            static PyObject *wrap_Object(const ClassicAnalyzer&);
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
