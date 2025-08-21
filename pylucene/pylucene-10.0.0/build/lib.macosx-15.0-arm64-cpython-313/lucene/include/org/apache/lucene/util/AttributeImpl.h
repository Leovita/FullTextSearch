#ifndef org_apache_lucene_util_AttributeImpl_H
#define org_apache_lucene_util_AttributeImpl_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Cloneable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeReflector;
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

        class AttributeImpl : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_clear_3720c61b0679eb3e,
            mid_clone_c9b39303c053ec9a,
            mid_copyTo_9be83c6b2aff7007,
            mid_end_3720c61b0679eb3e,
            mid_reflectAsString_648fb915d73c5399,
            mid_reflectWith_454217ab6e97f729,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AttributeImpl(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AttributeImpl(const AttributeImpl& obj) : ::java::lang::Object(obj) {}

          AttributeImpl();

          void clear() const;
          AttributeImpl clone() const;
          void copyTo(const AttributeImpl &) const;
          void end() const;
          ::java::lang::String reflectAsString(jboolean) const;
          void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
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
        extern PyType_Def PY_TYPE_DEF(AttributeImpl);
        extern PyTypeObject *PY_TYPE(AttributeImpl);

        class t_AttributeImpl {
        public:
          PyObject_HEAD
          AttributeImpl object;
          static PyObject *wrap_Object(const AttributeImpl&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
