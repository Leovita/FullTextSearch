#ifndef org_apache_lucene_util_AttributeFactory$StaticImplementationAttributeFactory_H
#define org_apache_lucene_util_AttributeFactory$StaticImplementationAttributeFactory_H

#include "org/apache/lucene/util/AttributeFactory.h"

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
        class AttributeImpl;
        class Attribute;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class AttributeFactory$StaticImplementationAttributeFactory : public ::org::apache::lucene::util::AttributeFactory {
         public:
          enum {
            mid_createAttributeInstance_14e9e8ac896476c4,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_createInstance_c9b39303c053ec9a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AttributeFactory$StaticImplementationAttributeFactory(jobject obj) : ::org::apache::lucene::util::AttributeFactory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AttributeFactory$StaticImplementationAttributeFactory(const AttributeFactory$StaticImplementationAttributeFactory& obj) : ::org::apache::lucene::util::AttributeFactory(obj) {}

          ::org::apache::lucene::util::AttributeImpl createAttributeInstance(const ::java::lang::Class &) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(AttributeFactory$StaticImplementationAttributeFactory);
        extern PyTypeObject *PY_TYPE(AttributeFactory$StaticImplementationAttributeFactory);

        class t_AttributeFactory$StaticImplementationAttributeFactory {
        public:
          PyObject_HEAD
          AttributeFactory$StaticImplementationAttributeFactory object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AttributeFactory$StaticImplementationAttributeFactory *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AttributeFactory$StaticImplementationAttributeFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AttributeFactory$StaticImplementationAttributeFactory&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
