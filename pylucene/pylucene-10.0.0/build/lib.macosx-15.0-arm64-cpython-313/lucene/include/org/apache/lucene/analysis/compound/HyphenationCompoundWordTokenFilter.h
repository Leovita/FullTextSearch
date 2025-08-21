#ifndef org_apache_lucene_analysis_compound_HyphenationCompoundWordTokenFilter_H
#define org_apache_lucene_analysis_compound_HyphenationCompoundWordTokenFilter_H

#include "org/apache/lucene/analysis/compound/CompoundWordTokenFilterBase.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            class HyphenationTree;
          }
        }
        class CharArraySet;
        class TokenStream;
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
              mid_init$_01e88b3ada4c72ca,
              mid_init$_b083beaf07eb2490,
              mid_init$_d2ae1ee9006eb5b6,
              mid_init$_88ce923fe76cd30c,
              mid_init$_19925e7400e7efce,
              mid_getHyphenationTree_214c7a702990b1b1,
              mid_decompose_3720c61b0679eb3e,
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
