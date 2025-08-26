#ifndef org_apache_lucene_analysis_stempel_StempelFilter_H
#define org_apache_lucene_analysis_stempel_StempelFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        namespace stempel {
          class StempelStemmer;
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
        namespace stempel {

          class StempelFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_ffdd51efe6f3d9f4,
              mid_init$_df6b523ecd48d9c3,
              mid_incrementToken_9aa4f33e82ea333f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StempelFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StempelFilter(const StempelFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jint DEFAULT_MIN_LENGTH;

            StempelFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::stempel::StempelStemmer &);
            StempelFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::stempel::StempelStemmer &, jint);

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
        namespace stempel {
          extern PyType_Def PY_TYPE_DEF(StempelFilter);
          extern PyTypeObject *PY_TYPE(StempelFilter);

          class t_StempelFilter {
          public:
            PyObject_HEAD
            StempelFilter object;
            static PyObject *wrap_Object(const StempelFilter&);
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
