#ifndef java_lang_Enum$EnumDesc_H
#define java_lang_Enum$EnumDesc_H

#include "java/lang/constant/DynamicConstantDesc.h"

namespace java {
  namespace lang {
    class String;
    class Enum;
    class Enum$EnumDesc;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Enum$EnumDesc : public ::java::lang::constant::DynamicConstantDesc {
     public:
      enum {
        mid_toString_09a7afff1868fc5e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Enum$EnumDesc(jobject obj) : ::java::lang::constant::DynamicConstantDesc(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Enum$EnumDesc(const Enum$EnumDesc& obj) : ::java::lang::constant::DynamicConstantDesc(obj) {}

      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Enum$EnumDesc);
    extern PyTypeObject *PY_TYPE(Enum$EnumDesc);

    class t_Enum$EnumDesc {
    public:
      PyObject_HEAD
      Enum$EnumDesc object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Enum$EnumDesc *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Enum$EnumDesc&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Enum$EnumDesc&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
