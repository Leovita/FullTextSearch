#ifndef org_apache_lucene_analysis_tokenattributes_OffsetAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_OffsetAttributeImpl_H

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
      namespace util {
        class AttributeReflector;
      }
      namespace analysis {
        namespace tokenattributes {
          class OffsetAttribute;
        }
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

          class OffsetAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_clear_e7bdbe105ce1bafb,
              mid_copyTo_b194e41b568bc1bc,
              mid_endOffset_bd89ce15dad49192,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_reflectWith_ac049850cfa29e37,
              mid_setOffset_645c25455f5b9b1c,
              mid_startOffset_bd89ce15dad49192,
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
