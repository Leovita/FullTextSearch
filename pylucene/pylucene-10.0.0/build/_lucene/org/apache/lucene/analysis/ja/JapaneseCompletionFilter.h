#ifndef org_apache_lucene_analysis_ja_JapaneseCompletionFilter_H
#define org_apache_lucene_analysis_ja_JapaneseCompletionFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          class JapaneseCompletionFilter$Mode;
        }
        class TokenStream;
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
              mid_init$_7d17c8514b99ffc6,
              mid_init$_dd80234aae481986,
              mid_incrementToken_947277eca0748c4e,
              mid_reset_3720c61b0679eb3e,
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
