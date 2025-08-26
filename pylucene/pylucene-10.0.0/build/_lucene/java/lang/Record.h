#ifndef java_lang_Record_H
#define java_lang_Record_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Record : public ::java::lang::Object {
     public:
      enum {
        mid_equals_00d17418847797d4,
        mid_hashCode_bd89ce15dad49192,
        mid_toString_e7df854526d67fa3,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Record(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Record(const Record& obj) : ::java::lang::Object(obj) {}

      jboolean equals(const ::java::lang::Object &) const;
      jint hashCode() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Record);
    extern PyTypeObject *PY_TYPE(Record);

    class t_Record {
    public:
      PyObject_HEAD
      Record object;
      static PyObject *wrap_Object(const Record&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
