#ifndef org_apache_lucene_util_AttributeFactory$StaticImplementationAttributeFactory_H
#define org_apache_lucene_util_AttributeFactory$StaticImplementationAttributeFactory_H

#include "org/apache/lucene/util/AttributeFactory.h"

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
namespace java {
  namespace lang {
    class Object;
    class Class;
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
            mid_createAttributeInstance_25f583d4b4312c3b,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_createInstance_2f6651241a7e46cf,
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
