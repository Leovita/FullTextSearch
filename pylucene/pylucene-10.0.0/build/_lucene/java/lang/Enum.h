#ifndef java_lang_Enum_H
#define java_lang_Enum_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
    class Enum;
    class Enum$EnumDesc;
  }
  namespace io {
    class Serializable;
  }
  namespace util {
    class Optional;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Enum : public ::java::lang::Object {
     public:
      enum {
        mid_compareTo_3f4695b02e9897bf,
        mid_describeConstable_d95173840d09a723,
        mid_equals_570b5248a6da3ef6,
        mid_getDeclaringClass_8b9fee113c1a0b81,
        mid_hashCode_20fbf7565993c3d7,
        mid_name_09a7afff1868fc5e,
        mid_ordinal_20fbf7565993c3d7,
        mid_toString_09a7afff1868fc5e,
        mid_valueOf_928a6fd80428f3b7,
        mid_finalize_3720c61b0679eb3e,
        mid_clone_5655ed8670534604,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Enum(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Enum(const Enum& obj) : ::java::lang::Object(obj) {}

      jint compareTo(const Enum &) const;
      ::java::util::Optional describeConstable() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Class getDeclaringClass() const;
      jint hashCode() const;
      ::java::lang::String name() const;
      jint ordinal() const;
      ::java::lang::String toString() const;
      static Enum valueOf(const ::java::lang::Class &, const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Enum);
    extern PyTypeObject *PY_TYPE(Enum);

    class t_Enum {
    public:
      PyObject_HEAD
      Enum object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Enum *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Enum&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Enum&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
