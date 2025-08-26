#ifndef org_apache_lucene_analysis_ja_JapaneseHiraganaUppercaseFilter_H
#define org_apache_lucene_analysis_ja_JapaneseHiraganaUppercaseFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
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

          class JapaneseHiraganaUppercaseFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_4fe096967a533954,
              mid_incrementToken_9aa4f33e82ea333f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseHiraganaUppercaseFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseHiraganaUppercaseFilter(const JapaneseHiraganaUppercaseFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            JapaneseHiraganaUppercaseFilter(const ::org::apache::lucene::analysis::TokenStream &);

            jboolean incrementToken() const;
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
          extern PyType_Def PY_TYPE_DEF(JapaneseHiraganaUppercaseFilter);
          extern PyTypeObject *PY_TYPE(JapaneseHiraganaUppercaseFilter);

          class t_JapaneseHiraganaUppercaseFilter {
          public:
            PyObject_HEAD
            JapaneseHiraganaUppercaseFilter object;
            static PyObject *wrap_Object(const JapaneseHiraganaUppercaseFilter&);
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
