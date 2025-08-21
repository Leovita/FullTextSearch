#ifndef java_lang_System$Logger$Level_H
#define java_lang_System$Logger$Level_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class System$Logger$Level;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class System$Logger$Level : public ::java::lang::Enum {
     public:
      enum {
        mid_getName_09a7afff1868fc5e,
        mid_getSeverity_20fbf7565993c3d7,
        mid_valueOf_29dd717394705008,
        mid_values_82270bd007581fc9,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit System$Logger$Level(jobject obj) : ::java::lang::Enum(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      System$Logger$Level(const System$Logger$Level& obj) : ::java::lang::Enum(obj) {}

      static System$Logger$Level *ALL;
      static System$Logger$Level *DEBUG$;
      static System$Logger$Level *ERROR;
      static System$Logger$Level *INFO;
      static System$Logger$Level *OFF;
      static System$Logger$Level *TRACE;
      static System$Logger$Level *WARNING;

      ::java::lang::String getName() const;
      jint getSeverity() const;
      static System$Logger$Level valueOf(const ::java::lang::String &);
      static JArray< System$Logger$Level > values();
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(System$Logger$Level);
    extern PyTypeObject *PY_TYPE(System$Logger$Level);

    class t_System$Logger$Level {
    public:
      PyObject_HEAD
      System$Logger$Level object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_System$Logger$Level *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const System$Logger$Level&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const System$Logger$Level&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
