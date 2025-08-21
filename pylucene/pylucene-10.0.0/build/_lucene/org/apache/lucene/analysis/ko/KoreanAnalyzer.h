#ifndef org_apache_lucene_analysis_ko_KoreanAnalyzer_H
#define org_apache_lucene_analysis_ko_KoreanAnalyzer_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          class POS$Tag;
          namespace dict {
            class UserDictionary;
          }
          class KoreanTokenizer$DecompoundMode;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {

          class KoreanAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_a0f49ccda5ab2ac1,
              mid_createComponents_f774fffda992519d,
              mid_normalize_9793d650e44fa07f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KoreanAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KoreanAnalyzer(const KoreanAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

            KoreanAnalyzer();
            KoreanAnalyzer(const ::org::apache::lucene::analysis::ko::dict::UserDictionary &, const ::org::apache::lucene::analysis::ko::KoreanTokenizer$DecompoundMode &, const ::java::util::Set &, jboolean);
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
        namespace ko {
          extern PyType_Def PY_TYPE_DEF(KoreanAnalyzer);
          extern PyTypeObject *PY_TYPE(KoreanAnalyzer);

          class t_KoreanAnalyzer {
          public:
            PyObject_HEAD
            KoreanAnalyzer object;
            static PyObject *wrap_Object(const KoreanAnalyzer&);
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
