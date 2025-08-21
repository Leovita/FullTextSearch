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
        mid_init$_3720c61b0679eb3e,
        mid_init$_8b3d46852b435a94,
        mid_nextBytes_3ce1e597fb62ac79,
        mid_nextInt_20fbf7565993c3d7,
        mid_nextLong_16939d9d0a9a9721,
        mid_split_a244a7089d96c882,
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
