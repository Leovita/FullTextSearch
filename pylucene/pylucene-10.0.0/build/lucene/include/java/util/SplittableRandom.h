#ifndef java_util_SplittableRandom_H
#define java_util_SplittableRandom_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class SplittableRandom;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class SplittableRandom : public ::java::lang::Object {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_init$_1d3149fac12f2af3,
        mid_nextBytes_a4d4f283481182e8,
        mid_nextInt_bd89ce15dad49192,
        mid_nextLong_0f176418e3e16541,
        mid_split_e8fb61556fb5d5d0,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SplittableRandom(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SplittableRandom(const SplittableRandom& obj) : ::java::lang::Object(obj) {}

      SplittableRandom();
      SplittableRandom(jlong);

      void nextBytes(const JArray< jbyte > &) const;
      jint nextInt() const;
      jlong nextLong() const;
      SplittableRandom split() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(SplittableRandom);
    extern PyTypeObject *PY_TYPE(SplittableRandom);

    class t_SplittableRandom {
    public:
      PyObject_HEAD
      SplittableRandom object;
      static PyObject *wrap_Object(const SplittableRandom&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
