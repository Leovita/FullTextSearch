#ifndef java_util_BitSet_H
#define java_util_BitSet_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class BitSet;
  }
  namespace lang {
    class Class;
    class String;
    class Cloneable;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class BitSet : public ::java::lang::Object {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_init$_540b2b23d51b1efd,
        mid_and_4b9c7037c604a033,
        mid_andNot_4b9c7037c604a033,
        mid_cardinality_20fbf7565993c3d7,
        mid_clear_3720c61b0679eb3e,
        mid_clear_540b2b23d51b1efd,
        mid_clear_e13cff512ebda969,
        mid_clone_5655ed8670534604,
        mid_equals_570b5248a6da3ef6,
        mid_flip_540b2b23d51b1efd,
        mid_flip_e13cff512ebda969,
        mid_get_ae22d3a856ad56f1,
        mid_get_d2cccd27611c67e7,
        mid_hashCode_20fbf7565993c3d7,
        mid_intersects_d4f5302b74f8b8df,
        mid_isEmpty_947277eca0748c4e,
        mid_length_20fbf7565993c3d7,
        mid_nextClearBit_3c9bba330f083871,
        mid_nextSetBit_3c9bba330f083871,
        mid_or_4b9c7037c604a033,
        mid_previousClearBit_3c9bba330f083871,
        mid_previousSetBit_3c9bba330f083871,
        mid_set_540b2b23d51b1efd,
        mid_set_2936d2706a18a684,
        mid_set_e13cff512ebda969,
        mid_set_6cd795a7c7bc8e48,
        mid_size_20fbf7565993c3d7,
        mid_toByteArray_5560da88fc44aa82,
        mid_toLongArray_a057bd1a0d2826b3,
        mid_toString_09a7afff1868fc5e,
        mid_valueOf_15b4f290d0ad3044,
        mid_valueOf_87c10f27734fb2a7,
        mid_xor_4b9c7037c604a033,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit BitSet(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      BitSet(const BitSet& obj) : ::java::lang::Object(obj) {}

      BitSet();
      BitSet(jint);

      void and$(const BitSet &) const;
      void andNot(const BitSet &) const;
      jint cardinality() const;
      void clear() const;
      void clear(jint) const;
      void clear(jint, jint) const;
      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      void flip(jint) const;
      void flip(jint, jint) const;
      jboolean get(jint) const;
      BitSet get(jint, jint) const;
      jint hashCode() const;
      jboolean intersects(const BitSet &) const;
      jboolean isEmpty() const;
      jint length() const;
      jint nextClearBit(jint) const;
      jint nextSetBit(jint) const;
      void or$(const BitSet &) const;
      jint previousClearBit(jint) const;
      jint previousSetBit(jint) const;
      void set(jint) const;
      void set(jint, jboolean) const;
      void set(jint, jint) const;
      void set(jint, jint, jboolean) const;
      jint size() const;
      JArray< jbyte > toByteArray() const;
      JArray< jlong > toLongArray() const;
      ::java::lang::String toString() const;
      static BitSet valueOf(const JArray< jbyte > &);
      static BitSet valueOf(const JArray< jlong > &);
      void xor$(const BitSet &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(BitSet);
    extern PyTypeObject *PY_TYPE(BitSet);

    class t_BitSet {
    public:
      PyObject_HEAD
      BitSet object;
      static PyObject *wrap_Object(const BitSet&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
