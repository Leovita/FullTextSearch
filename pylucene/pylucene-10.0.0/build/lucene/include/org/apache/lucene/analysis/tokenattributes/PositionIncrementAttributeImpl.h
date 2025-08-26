#ifndef org_apache_lucene_analysis_tokenattributes_PositionIncrementAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_PositionIncrementAttributeImpl_H

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
          class PositionIncrementAttribute;
        }
      }
      namespace util {
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

          class PositionIncrementAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_clear_e7bdbe105ce1bafb,
              mid_copyTo_b194e41b568bc1bc,
              mid_end_e7bdbe105ce1bafb,
              mid_equals_00d17418847797d4,
              mid_getPositionIncrement_bd89ce15dad49192,
              mid_hashCode_bd89ce15dad49192,
              mid_reflectWith_ac049850cfa29e37,
              mid_setPositionIncrement_8226bd0b0fc13dba,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PositionIncrementAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PositionIncrementAttributeImpl(const PositionIncrementAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            PositionIncrementAttributeImpl();

            void clear() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            void end() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getPositionIncrement() const;
            jint hashCode() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setPositionIncrement(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(PositionIncrementAttributeImpl);
          extern PyTypeObject *PY_TYPE(PositionIncrementAttributeImpl);

          class t_PositionIncrementAttributeImpl {
          public:
            PyObject_HEAD
            PositionIncrementAttributeImpl object;
            static PyObject *wrap_Object(const PositionIncrementAttributeImpl&);
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
