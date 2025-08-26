#ifndef org_apache_lucene_analysis_tokenattributes_TypeAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_TypeAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace java {
  namespace lang {
    class String;
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
          class TypeAttribute;
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

          class TypeAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_ee46a189998009d6,
              mid_clear_e7bdbe105ce1bafb,
              mid_copyTo_b194e41b568bc1bc,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_reflectWith_ac049850cfa29e37,
              mid_setType_ee46a189998009d6,
              mid_type_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TypeAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TypeAttributeImpl(const TypeAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            TypeAttributeImpl();
            TypeAttributeImpl(const ::java::lang::String &);

            void clear() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setType(const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(TypeAttributeImpl);
          extern PyTypeObject *PY_TYPE(TypeAttributeImpl);

          class t_TypeAttributeImpl {
          public:
            PyObject_HEAD
            TypeAttributeImpl object;
            static PyObject *wrap_Object(const TypeAttributeImpl&);
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
