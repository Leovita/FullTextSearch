#ifndef org_apache_lucene_analysis_compound_HyphenationCompoundWordTokenFilter_H
#define org_apache_lucene_analysis_compound_HyphenationCompoundWordTokenFilter_H

#include "org/apache/lucene/analysis/compound/CompoundWordTokenFilterBase.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class CharArraySet;
        namespace compound {
          namespace hyphenation {
            class HyphenationTree;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {

          class HyphenationCompoundWordTokenFilter : public ::org::apache::lucene::analysis::compound::CompoundWordTokenFilterBase {
           public:
            enum {
              mid_init$_9694ee76e1a6fe80,
              mid_init$_f34ff843f5b3cefd,
              mid_init$_e2b5f760a422381c,
              mid_init$_3eb30c72a2e560b9,
              mid_init$_c5aeb06befa51397,
              mid_getHyphenationTree_772446d58a489093,
              mid_decompose_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HyphenationCompoundWordTokenFilter(jobject obj) : ::org::apache::lucene::analysis::compound::CompoundWordTokenFilterBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HyphenationCompoundWordTokenFilter(const HyphenationCompoundWordTokenFilter& obj) : ::org::apache::lucene::analysis::compound::CompoundWordTokenFilterBase(obj) {}

            HyphenationCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree &);
            HyphenationCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree &, const ::org::apache::lucene::analysis::CharArraySet &);
            HyphenationCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree &, jint, jint, jint);
            HyphenationCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree &, const ::org::apache::lucene::analysis::CharArraySet &, jint, jint, jint, jboolean);
            HyphenationCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree &, const ::org::apache::lucene::analysis::CharArraySet &, jint, jint, jint, jboolean, jboolean, jboolean);

            static ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree getHyphenationTree(const ::java::lang::String &);
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
        namespace compound {
          extern PyType_Def PY_TYPE_DEF(HyphenationCompoundWordTokenFilter);
          extern PyTypeObject *PY_TYPE(HyphenationCompoundWordTokenFilter);

          class t_HyphenationCompoundWordTokenFilter {
          public:
            PyObject_HEAD
            HyphenationCompoundWordTokenFilter object;
            static PyObject *wrap_Object(const HyphenationCompoundWordTokenFilter&);
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
