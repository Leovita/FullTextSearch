#ifndef org_apache_lucene_analysis_tokenattributes_OffsetAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_OffsetAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class OffsetAttribute;
        }
      }
      namespace util {
        class AttributeReflector;
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

          class OffsetAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_clear_3720c61b0679eb3e,
              mid_copyTo_9be83c6b2aff7007,
              mid_endOffset_20fbf7565993c3d7,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_reflectWith_454217ab6e97f729,
              mid_setOffset_e13cff512ebda969,
              mid_startOffset_20fbf7565993c3d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetAttributeImpl(const OffsetAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            OffsetAttributeImpl();

            void clear() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jint endOffset() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setOffset(jint, jint) const;
            jint startOffset() const;
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
          extern PyType_Def PY_TYPE_DEF(OffsetAttributeImpl);
          extern PyTypeObject *PY_TYPE(OffsetAttributeImpl);

          class t_OffsetAttributeImpl {
          public:
            PyObject_HEAD
            OffsetAttributeImpl object;
            static PyObject *wrap_Object(const OffsetAttributeImpl&);
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
