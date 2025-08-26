#ifndef org_apache_lucene_analysis_email_UAX29URLEmailAnalyzer_H
#define org_apache_lucene_analysis_email_UAX29URLEmailAnalyzer_H

#include "org/apache/lucene/analysis/StopwordAnalyzerBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharArraySet;
      }
    }
  }
}
namespace java {
  namespace io {
    class Reader;
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace email {

          class UAX29URLEmailAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_e214f28c42bbd933,
              mid_init$_89ab2bee9aa84b00,
              mid_getMaxTokenLength_bd89ce15dad49192,
              mid_setMaxTokenLength_8226bd0b0fc13dba,
              mid_createComponents_b734244e69a6c631,
              mid_normalize_6c106c857ee0afd1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UAX29URLEmailAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UAX29URLEmailAnalyzer(const UAX29URLEmailAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            static jint DEFAULT_MAX_TOKEN_LENGTH;
            static ::org::apache::lucene::analysis::CharArraySet *STOP_WORDS_SET;

            UAX29URLEmailAnalyzer();
            UAX29URLEmailAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &);
            UAX29URLEmailAnalyzer(const ::java::io::Reader &);

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
        namespace email {
          extern PyType_Def PY_TYPE_DEF(UAX29URLEmailAnalyzer);
          extern PyTypeObject *PY_TYPE(UAX29URLEmailAnalyzer);

          class t_UAX29URLEmailAnalyzer {
          public:
            PyObject_HEAD
            UAX29URLEmailAnalyzer object;
            static PyObject *wrap_Object(const UAX29URLEmailAnalyzer&);
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
