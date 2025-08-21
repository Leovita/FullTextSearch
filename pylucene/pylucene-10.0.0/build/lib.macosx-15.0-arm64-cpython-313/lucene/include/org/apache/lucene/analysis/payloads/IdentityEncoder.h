#ifndef org_apache_lucene_analysis_payloads_IdentityEncoder_H
#define org_apache_lucene_analysis_payloads_IdentityEncoder_H

#include "org/apache/lucene/analysis/payloads/AbstractEncoder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
        namespace payloads {

          class IdentityEncoder : public ::org::apache::lucene::analysis::payloads::AbstractEncoder {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_encode_39b6f094532ed45a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IdentityEncoder(jobject obj) : ::org::apache::lucene::analysis::payloads::AbstractEncoder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IdentityEncoder(const IdentityEncoder& obj) : ::org::apache::lucene::analysis::payloads::AbstractEncoder(obj) {}

            IdentityEncoder();

            ::org::apache::lucene::util::BytesRef encode(const JArray< jchar > &, jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(IdentityEncoder);
          extern PyTypeObject *PY_TYPE(IdentityEncoder);

          class t_IdentityEncoder {
          public:
            PyObject_HEAD
            IdentityEncoder object;
            static PyObject *wrap_Object(const IdentityEncoder&);
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
