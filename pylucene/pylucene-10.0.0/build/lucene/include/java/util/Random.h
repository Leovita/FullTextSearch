#ifndef java_util_Random_H
#define java_util_Random_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace util {
    class Random;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Random : public ::java::lang::Object {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_init$_8b3d46852b435a94,
        mid_nextBoolean_947277eca0748c4e,
        mid_nextBytes_3ce1e597fb62ac79,
        mid_nextDouble_32caabaad86c508b,
        mid_nextFloat_9b6c3480dac00edf,
        mid_nextGaussian_32caabaad86c508b,
        mid_nextInt_20fbf7565993c3d7,
        mid_nextInt_3c9bba330f083871,
        mid_nextLong_16939d9d0a9a9721,
        mid_setSeed_8b3d46852b435a94,
        mid_next_3c9bba330f083871,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Random(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Random(const Random& obj) : ::java::lang::Object(obj) {}

      Random();
      Random(jlong);

      jboolean nextBoolean() const;
      void nextBytes(const JArray< jbyte > &) const;
      jdouble nextDouble() const;
      jfloat nextFloat() const;
      jdouble nextGaussian() const;
      jint nextInt() const;
      jint nextInt(jint) const;
      jlong nextLong() const;
      void setSeed(jlong) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Random);
    extern PyTypeObject *PY_TYPE(Random);

    class t_Random {
    public:
      PyObject_HEAD
      Random object;
      static PyObject *wrap_Object(const Random&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
