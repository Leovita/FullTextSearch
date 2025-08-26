#ifndef org_apache_lucene_analysis_tokenattributes_PackedTokenAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_PackedTokenAttributeImpl_H

#include "org/apache/lucene/analysis/tokenattributes/CharTermAttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeImpl;
        class AttributeReflector;
      }
      namespace analysis {
        namespace tokenattributes {
          class PackedTokenAttributeImpl;
          class PositionLengthAttribute;
          class PositionIncrementAttribute;
          class TermFrequencyAttribute;
          class OffsetAttribute;
          class TypeAttribute;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
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

          class PackedTokenAttributeImpl : public ::org::apache::lucene::analysis::tokenattributes::CharTermAttributeImpl {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_clear_e7bdbe105ce1bafb,
              mid_clone_283744a42dc9a7db,
              mid_copyTo_b194e41b568bc1bc,
              mid_end_e7bdbe105ce1bafb,
              mid_endOffset_bd89ce15dad49192,
              mid_equals_00d17418847797d4,
              mid_getPositionIncrement_bd89ce15dad49192,
              mid_getPositionLength_bd89ce15dad49192,
              mid_getTermFrequency_bd89ce15dad49192,
              mid_hashCode_bd89ce15dad49192,
              mid_reflectWith_ac049850cfa29e37,
              mid_setOffset_645c25455f5b9b1c,
              mid_setPositionIncrement_8226bd0b0fc13dba,
              mid_setPositionLength_8226bd0b0fc13dba,
              mid_setTermFrequency_8226bd0b0fc13dba,
              mid_setType_ee46a189998009d6,
              mid_startOffset_bd89ce15dad49192,
              mid_type_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedTokenAttributeImpl(jobject obj) : ::org::apache::lucene::analysis::tokenattributes::CharTermAttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedTokenAttributeImpl(const PackedTokenAttributeImpl& obj) : ::org::apache::lucene::analysis::tokenattributes::CharTermAttributeImpl(obj) {}

            PackedTokenAttributeImpl();

            void clear() const;
            PackedTokenAttributeImpl clone() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            void end() const;
            jint endOffset() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getPositionIncrement() const;
            jint getPositionLength() const;
            jint getTermFrequency() const;
            jint hashCode() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setOffset(jint, jint) const;
            void setPositionIncrement(jint) const;
            void setPositionLength(jint) const;
            void setTermFrequency(jint) const;
            void setType(const ::java::lang::String &) const;
            jint startOffset() const;
            ::java::lang::String type() const;
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
          extern PyType_Def PY_TYPE_DEF(PackedTokenAttributeImpl);
          extern PyTypeObject *PY_TYPE(PackedTokenAttributeImpl);

          class t_PackedTokenAttributeImpl {
          public:
            PyObject_HEAD
            PackedTokenAttributeImpl object;
            static PyObject *wrap_Object(const PackedTokenAttributeImpl&);
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
