#ifndef org_apache_lucene_analysis_tokenattributes_BytesTermAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_BytesTermAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class BytesTermAttribute;
          class TermToBytesRefAttribute;
        }
      }
      namespace util {
        class BytesRef;
        class AttributeReflector;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class BytesTermAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_clear_e7bdbe105ce1bafb,
              mid_clone_2f6651241a7e46cf,
              mid_copyTo_b194e41b568bc1bc,
              mid_equals_00d17418847797d4,
              mid_getBytesRef_adbedbc1fa61c358,
              mid_hashCode_bd89ce15dad49192,
              mid_reflectWith_ac049850cfa29e37,
              mid_setBytesRef_920ce0cdf4259cc9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BytesTermAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BytesTermAttributeImpl(const BytesTermAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            BytesTermAttributeImpl();

            void clear() const;
            ::org::apache::lucene::util::AttributeImpl clone() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::BytesRef getBytesRef() const;
            jint hashCode() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setBytesRef(const ::org::apache::lucene::util::BytesRef &) const;
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
          extern PyType_Def PY_TYPE_DEF(BytesTermAttributeImpl);
          extern PyTypeObject *PY_TYPE(BytesTermAttributeImpl);

          class t_BytesTermAttributeImpl {
          public:
            PyObject_HEAD
            BytesTermAttributeImpl object;
            static PyObject *wrap_Object(const BytesTermAttributeImpl&);
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
