#ifndef org_apache_lucene_analysis_tokenattributes_PayloadAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_PayloadAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class PayloadAttribute;
          class PayloadAttributeImpl;
        }
      }
      namespace util {
        class BytesRef;
        class AttributeReflector;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class PayloadAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_920ce0cdf4259cc9,
              mid_clear_e7bdbe105ce1bafb,
              mid_clone_558945da5929c32f,
              mid_copyTo_b194e41b568bc1bc,
              mid_equals_00d17418847797d4,
              mid_getPayload_adbedbc1fa61c358,
              mid_hashCode_bd89ce15dad49192,
              mid_reflectWith_ac049850cfa29e37,
              mid_setPayload_920ce0cdf4259cc9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PayloadAttributeImpl(const PayloadAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            PayloadAttributeImpl();
            PayloadAttributeImpl(const ::org::apache::lucene::util::BytesRef &);

            void clear() const;
            PayloadAttributeImpl clone() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::BytesRef getPayload() const;
            jint hashCode() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setPayload(const ::org::apache::lucene::util::BytesRef &) const;
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
        namespace tokenattributes {
          extern PyType_Def PY_TYPE_DEF(PayloadAttributeImpl);
          extern PyTypeObject *PY_TYPE(PayloadAttributeImpl);

          class t_PayloadAttributeImpl {
          public:
            PyObject_HEAD
            PayloadAttributeImpl object;
            static PyObject *wrap_Object(const PayloadAttributeImpl&);
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
