#ifndef org_apache_lucene_analysis_tokenattributes_TypeAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_TypeAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
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
              mid_init$_3720c61b0679eb3e,
              mid_init$_0d82408c6e55bc30,
              mid_clear_3720c61b0679eb3e,
              mid_copyTo_9be83c6b2aff7007,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_reflectWith_454217ab6e97f729,
              mid_setType_0d82408c6e55bc30,
              mid_type_09a7afff1868fc5e,
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
