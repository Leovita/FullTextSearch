#ifndef org_apache_lucene_analysis_tokenattributes_CharTermAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_CharTermAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class CharTermAttribute;
          class CharTermAttributeImpl;
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
namespace java {
  namespace lang {
    class Class;
    class String;
    class CharSequence;
    class Object;
    class StringBuilder;
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
              mid_init$_3720c61b0679eb3e,
              mid_append_93c3e51ee367b727,
              mid_append_6ded55a46c89e9ea,
              mid_append_8fd290207a88902a,
              mid_append_fdef7fd064209339,
              mid_append_107fc9eadd9a04d0,
              mid_append_c0e9d633af448f1d,
              mid_buffer_77d52ded526199de,
              mid_charAt_92a13ce4196a7e69,
              mid_clear_3720c61b0679eb3e,
              mid_clone_c8a3bfc4ae68ec06,
              mid_copyBuffer_fc9be2ded8ee801f,
              mid_copyTo_9be83c6b2aff7007,
              mid_equals_570b5248a6da3ef6,
              mid_getBytesRef_9740fddd1c7df148,
              mid_hashCode_20fbf7565993c3d7,
              mid_length_20fbf7565993c3d7,
              mid_reflectWith_454217ab6e97f729,
              mid_resizeBuffer_b99eaae8e7f3ab85,
              mid_setEmpty_6c99065d62f8e710,
              mid_setLength_4565eb3469a6f0b6,
              mid_subSequence_3202de35bfd622a0,
              mid_toString_09a7afff1868fc5e,
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
