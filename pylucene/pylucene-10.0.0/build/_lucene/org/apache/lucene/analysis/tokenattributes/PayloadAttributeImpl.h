#ifndef org_apache_lucene_analysis_tokenattributes_PayloadAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_PayloadAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class AttributeReflector;
      }
      namespace analysis {
        namespace tokenattributes {
          class PayloadAttribute;
          class PayloadAttributeImpl;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
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
              mid_init$_3720c61b0679eb3e,
              mid_init$_ac0de3ee0e03786d,
              mid_clear_3720c61b0679eb3e,
              mid_clone_37bd25f1c53ec018,
              mid_copyTo_9be83c6b2aff7007,
              mid_equals_570b5248a6da3ef6,
              mid_getPayload_9740fddd1c7df148,
              mid_hashCode_20fbf7565993c3d7,
              mid_reflectWith_454217ab6e97f729,
              mid_setPayload_ac0de3ee0e03786d,
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
