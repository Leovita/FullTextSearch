#ifndef org_apache_lucene_analysis_tokenattributes_PackedTokenAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_PackedTokenAttributeImpl_H

#include "org/apache/lucene/analysis/tokenattributes/CharTermAttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class PositionIncrementAttribute;
          class OffsetAttribute;
          class PositionLengthAttribute;
          class PackedTokenAttributeImpl;
          class TypeAttribute;
          class TermFrequencyAttribute;
        }
      }
      namespace util {
        class AttributeReflector;
        class AttributeImpl;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
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
              mid_init$_3720c61b0679eb3e,
              mid_clear_3720c61b0679eb3e,
              mid_clone_cfbe4d6d0c28bf84,
              mid_copyTo_9be83c6b2aff7007,
              mid_end_3720c61b0679eb3e,
              mid_endOffset_20fbf7565993c3d7,
              mid_equals_570b5248a6da3ef6,
              mid_getPositionIncrement_20fbf7565993c3d7,
              mid_getPositionLength_20fbf7565993c3d7,
              mid_getTermFrequency_20fbf7565993c3d7,
              mid_hashCode_20fbf7565993c3d7,
              mid_reflectWith_454217ab6e97f729,
              mid_setOffset_e13cff512ebda969,
              mid_setPositionIncrement_540b2b23d51b1efd,
              mid_setPositionLength_540b2b23d51b1efd,
              mid_setTermFrequency_540b2b23d51b1efd,
              mid_setType_0d82408c6e55bc30,
              mid_startOffset_20fbf7565993c3d7,
              mid_type_09a7afff1868fc5e,
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
