#ifndef org_apache_lucene_analysis_miscellaneous_FingerprintFilter_H
#define org_apache_lucene_analysis_miscellaneous_FingerprintFilter_H

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

          class FingerprintFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_4fe096967a533954,
              mid_init$_75b9448e9e2f82fc,
              mid_end_e7bdbe105ce1bafb,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FingerprintFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FingerprintFilter(const FingerprintFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jint DEFAULT_MAX_OUTPUT_TOKEN_SIZE;
            static jchar DEFAULT_SEPARATOR;

            FingerprintFilter(const ::org::apache::lucene::analysis::TokenStream &);
            FingerprintFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, jchar);

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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(FingerprintFilter);
          extern PyTypeObject *PY_TYPE(FingerprintFilter);

          class t_FingerprintFilter {
          public:
            PyObject_HEAD
            FingerprintFilter object;
            static PyObject *wrap_Object(const FingerprintFilter&);
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
