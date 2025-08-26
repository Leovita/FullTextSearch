#ifndef org_apache_lucene_analysis_payloads_DelimitedPayloadTokenFilter_H
#define org_apache_lucene_analysis_payloads_DelimitedPayloadTokenFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        namespace payloads {
          class PayloadEncoder;
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
        namespace payloads {

          class DelimitedPayloadTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_f57dda846638fc0a,
              mid_incrementToken_9aa4f33e82ea333f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DelimitedPayloadTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DelimitedPayloadTokenFilter(const DelimitedPayloadTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jchar DEFAULT_DELIMITER;

            DelimitedPayloadTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, jchar, const ::org::apache::lucene::analysis::payloads::PayloadEncoder &);

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
        namespace payloads {
          extern PyType_Def PY_TYPE_DEF(DelimitedPayloadTokenFilter);
          extern PyTypeObject *PY_TYPE(DelimitedPayloadTokenFilter);

          class t_DelimitedPayloadTokenFilter {
          public:
            PyObject_HEAD
            DelimitedPayloadTokenFilter object;
            static PyObject *wrap_Object(const DelimitedPayloadTokenFilter&);
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
