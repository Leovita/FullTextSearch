#ifndef org_apache_lucene_analysis_compound_DictionaryCompoundWordTokenFilter_H
#define org_apache_lucene_analysis_compound_DictionaryCompoundWordTokenFilter_H

#include "org/apache/lucene/analysis/compound/CompoundWordTokenFilterBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class CharArraySet;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {

          class DictionaryCompoundWordTokenFilter : public ::org::apache::lucene::analysis::compound::CompoundWordTokenFilterBase {
           public:
            enum {
              mid_init$_92e7098bbfc6f3de,
              mid_init$_464fe98160e05d0d,
              mid_decompose_3720c61b0679eb3e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DictionaryCompoundWordTokenFilter(jobject obj) : ::org::apache::lucene::analysis::compound::CompoundWordTokenFilterBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DictionaryCompoundWordTokenFilter(const DictionaryCompoundWordTokenFilter& obj) : ::org::apache::lucene::analysis::compound::CompoundWordTokenFilterBase(obj) {}

            DictionaryCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::CharArraySet &);
            DictionaryCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::CharArraySet &, jint, jint, jint, jboolean);
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
          extern PyType_Def PY_TYPE_DEF(DictionaryCompoundWordTokenFilter);
          extern PyTypeObject *PY_TYPE(DictionaryCompoundWordTokenFilter);

          class t_DictionaryCompoundWordTokenFilter {
          public:
            PyObject_HEAD
            DictionaryCompoundWordTokenFilter object;
            static PyObject *wrap_Object(const DictionaryCompoundWordTokenFilter&);
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
