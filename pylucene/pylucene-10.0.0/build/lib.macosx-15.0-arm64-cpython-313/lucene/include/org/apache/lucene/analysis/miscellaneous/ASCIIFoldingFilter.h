#ifndef org_apache_lucene_analysis_miscellaneous_ASCIIFoldingFilter_H
#define org_apache_lucene_analysis_miscellaneous_ASCIIFoldingFilter_H

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
        namespace miscellaneous {

          class ASCIIFoldingFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_7d17c8514b99ffc6,
              mid_init$_303f0251e5222802,
              mid_foldToASCII_e06ffef1ed339658,
              mid_foldToASCII_61d391039a462ff3,
              mid_incrementToken_947277eca0748c4e,
              mid_isPreserveOriginal_947277eca0748c4e,
              mid_reset_3720c61b0679eb3e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ASCIIFoldingFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ASCIIFoldingFilter(const ASCIIFoldingFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            ASCIIFoldingFilter(const ::org::apache::lucene::analysis::TokenStream &);
            ASCIIFoldingFilter(const ::org::apache::lucene::analysis::TokenStream &, jboolean);

            void foldToASCII(const JArray< jchar > &, jint) const;
            static jint foldToASCII(const JArray< jchar > &, jint, const JArray< jchar > &, jint, jint);
            jboolean incrementToken() const;
            jboolean isPreserveOriginal() const;
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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(ASCIIFoldingFilter);
          extern PyTypeObject *PY_TYPE(ASCIIFoldingFilter);

          class t_ASCIIFoldingFilter {
          public:
            PyObject_HEAD
            ASCIIFoldingFilter object;
            static PyObject *wrap_Object(const ASCIIFoldingFilter&);
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
