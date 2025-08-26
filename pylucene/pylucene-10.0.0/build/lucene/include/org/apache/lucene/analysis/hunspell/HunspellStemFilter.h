#ifndef org_apache_lucene_analysis_hunspell_HunspellStemFilter_H
#define org_apache_lucene_analysis_hunspell_HunspellStemFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        namespace hunspell {
          class Dictionary;
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
        namespace hunspell {

          class HunspellStemFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_bd7ba0c71ef6653b,
              mid_init$_976660cc6aea53a9,
              mid_init$_d5c2d60cc6679e02,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HunspellStemFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HunspellStemFilter(const HunspellStemFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            HunspellStemFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::hunspell::Dictionary &);
            HunspellStemFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::hunspell::Dictionary &, jboolean);
            HunspellStemFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::hunspell::Dictionary &, jboolean, jboolean);

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
        namespace hunspell {
          extern PyType_Def PY_TYPE_DEF(HunspellStemFilter);
          extern PyTypeObject *PY_TYPE(HunspellStemFilter);

          class t_HunspellStemFilter {
          public:
            PyObject_HEAD
            HunspellStemFilter object;
            static PyObject *wrap_Object(const HunspellStemFilter&);
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
