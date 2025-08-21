#ifndef java_lang_constant_DynamicConstantDesc_H
#define java_lang_constant_DynamicConstantDesc_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    namespace constant {
      class DynamicConstantDesc;
    }
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {
    namespace constant {

      class DynamicConstantDesc : public ::java::lang::Object {
       public:
        enum {
          mid_constantName_09a7afff1868fc5e,
          mid_equals_570b5248a6da3ef6,
          mid_hashCode_20fbf7565993c3d7,
          mid_toString_09a7afff1868fc5e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DynamicConstantDesc(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DynamicConstantDesc(const DynamicConstantDesc& obj) : ::java::lang::Object(obj) {}

        ::java::lang::String constantName() const;
        jboolean equals(const ::java::lang::Object &) const;
        jint hashCode() const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    namespace constant {
      extern PyType_Def PY_TYPE_DEF(DynamicConstantDesc);
      extern PyTypeObject *PY_TYPE(DynamicConstantDesc);

      class t_DynamicConstantDesc {
      public:
        PyObject_HEAD
        DynamicConstantDesc object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_DynamicConstantDesc *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const DynamicConstantDesc&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const DynamicConstantDesc&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
