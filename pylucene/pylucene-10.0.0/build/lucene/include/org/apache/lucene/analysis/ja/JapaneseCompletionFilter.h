#ifndef org_apache_lucene_analysis_ja_JapaneseCompletionFilter_H
#define org_apache_lucene_analysis_ja_JapaneseCompletionFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        namespace ja {
          class JapaneseCompletionFilter$Mode;
        }
      }
    }
  }
}
namespace java {
  namespace io {
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
        namespace ja {

          class JapaneseCompletionFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_4fe096967a533954,
              mid_init$_2d9e5dd77cd678ac,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseCompletionFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseCompletionFilter(const JapaneseCompletionFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static ::org::apache::lucene::analysis::ja::JapaneseCompletionFilter$Mode *DEFAULT_MODE;

            JapaneseCompletionFilter(const ::org::apache::lucene::analysis::TokenStream &);
            JapaneseCompletionFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::ja::JapaneseCompletionFilter$Mode &);

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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapaneseCompletionFilter);
          extern PyTypeObject *PY_TYPE(JapaneseCompletionFilter);

          class t_JapaneseCompletionFilter {
          public:
            PyObject_HEAD
            JapaneseCompletionFilter object;
            static PyObject *wrap_Object(const JapaneseCompletionFilter&);
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
