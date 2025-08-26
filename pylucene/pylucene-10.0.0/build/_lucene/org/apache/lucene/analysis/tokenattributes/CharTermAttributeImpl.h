#ifndef org_apache_lucene_analysis_tokenattributes_CharTermAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_CharTermAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
    class StringBuilder;
    class CharSequence;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class CharTermAttribute;
          class TermToBytesRefAttribute;
          class CharTermAttributeImpl;
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

          class CharTermAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_append_9b92f6e313a4d773,
              mid_append_016de536220d6cf7,
              mid_append_bf52ddc416077be8,
              mid_append_f1020fd319425e9f,
              mid_append_5222518cf8139859,
              mid_append_9b607feb724e19ec,
              mid_buffer_e5926045e1917c62,
              mid_charAt_bc94dd98365f92fb,
              mid_clear_e7bdbe105ce1bafb,
              mid_clone_8ffe4edce95cfddd,
              mid_copyBuffer_186bb5d1c1aec30c,
              mid_copyTo_b194e41b568bc1bc,
              mid_equals_00d17418847797d4,
              mid_getBytesRef_adbedbc1fa61c358,
              mid_hashCode_bd89ce15dad49192,
              mid_length_bd89ce15dad49192,
              mid_reflectWith_ac049850cfa29e37,
              mid_resizeBuffer_25bf44068950f64b,
              mid_setEmpty_fd305bd0e2b05b3a,
              mid_setLength_5e7ff32332c44cee,
              mid_subSequence_e78c175a32c9e667,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharTermAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharTermAttributeImpl(const CharTermAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            CharTermAttributeImpl();

            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::java::lang::StringBuilder &) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::java::lang::String &) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(jchar) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::java::lang::CharSequence &) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute &) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::java::lang::CharSequence &, jint, jint) const;
            JArray< jchar > buffer() const;
            jchar charAt(jint) const;
            void clear() const;
            CharTermAttributeImpl clone() const;
            void copyBuffer(const JArray< jchar > &, jint, jint) const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::BytesRef getBytesRef() const;
            jint hashCode() const;
            jint length() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            JArray< jchar > resizeBuffer(jint) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute setEmpty() const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute setLength(jint) const;
            ::java::lang::CharSequence subSequence(jint, jint) const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(CharTermAttributeImpl);
          extern PyTypeObject *PY_TYPE(CharTermAttributeImpl);

          class t_CharTermAttributeImpl {
          public:
            PyObject_HEAD
            CharTermAttributeImpl object;
            static PyObject *wrap_Object(const CharTermAttributeImpl&);
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
