#ifndef org_apache_lucene_queries_payloads_PayloadMatcher_H
#define org_apache_lucene_queries_payloads_PayloadMatcher_H

#include "java/lang/Object.h"

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
      namespace queries {
        namespace payloads {

          class PayloadMatcher : public ::java::lang::Object {
           public:
            enum {
              mid_comparePayload_e1f6fb62db0d00cc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadMatcher(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PayloadMatcher(const PayloadMatcher& obj) : ::java::lang::Object(obj) {}

            jboolean comparePayload(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
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
      namespace queries {
        namespace payloads {
          extern PyType_Def PY_TYPE_DEF(PayloadMatcher);
          extern PyTypeObject *PY_TYPE(PayloadMatcher);

          class t_PayloadMatcher {
          public:
            PyObject_HEAD
            PayloadMatcher object;
            static PyObject *wrap_Object(const PayloadMatcher&);
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
