#ifndef org_apache_lucene_analysis_core_KeywordTokenizer_H
#define org_apache_lucene_analysis_core_KeywordTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace core {

          class KeywordTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_8226bd0b0fc13dba,
              mid_init$_3183b52194c9e763,
              mid_end_e7bdbe105ce1bafb,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KeywordTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KeywordTokenizer(const KeywordTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jint DEFAULT_BUFFER_SIZE;

            KeywordTokenizer();
            KeywordTokenizer(jint);
            KeywordTokenizer(const ::org::apache::lucene::util::AttributeFactory &, jint);

            void end() const;
            jboolean incrementToken() const;
            void reset() const;
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
        namespace core {
          extern PyType_Def PY_TYPE_DEF(KeywordTokenizer);
          extern PyTypeObject *PY_TYPE(KeywordTokenizer);

          class t_KeywordTokenizer {
          public:
            PyObject_HEAD
            KeywordTokenizer object;
            static PyObject *wrap_Object(const KeywordTokenizer&);
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
