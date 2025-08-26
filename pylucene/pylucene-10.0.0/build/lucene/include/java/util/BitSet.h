#ifndef java_util_BitSet_H
#define java_util_BitSet_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class String;
    class Class;
  }
  namespace util {
    class BitSet;
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
        mid_init$_e7bdbe105ce1bafb,
        mid_init$_8226bd0b0fc13dba,
        mid_and_bd291583a67dfd7c,
        mid_andNot_bd291583a67dfd7c,
        mid_cardinality_bd89ce15dad49192,
        mid_clear_e7bdbe105ce1bafb,
        mid_clear_8226bd0b0fc13dba,
        mid_clear_645c25455f5b9b1c,
        mid_clone_4819806f62f1360a,
        mid_equals_00d17418847797d4,
        mid_flip_8226bd0b0fc13dba,
        mid_flip_645c25455f5b9b1c,
        mid_get_a8281eb3b9d9672d,
        mid_get_14c317bb0f594142,
        mid_hashCode_bd89ce15dad49192,
        mid_intersects_43a34f027a56c9b8,
        mid_isEmpty_9aa4f33e82ea333f,
        mid_length_bd89ce15dad49192,
        mid_nextClearBit_a3904e10f5bb9437,
        mid_nextSetBit_a3904e10f5bb9437,
        mid_or_bd291583a67dfd7c,
        mid_previousClearBit_a3904e10f5bb9437,
        mid_previousSetBit_a3904e10f5bb9437,
        mid_set_8226bd0b0fc13dba,
        mid_set_a0fed0a2cd38e7b1,
        mid_set_645c25455f5b9b1c,
        mid_set_c3d84033adf0309d,
        mid_size_bd89ce15dad49192,
        mid_toByteArray_44e916dc40fc04cb,
        mid_toLongArray_1aab5293a9d94cd3,
        mid_toString_e7df854526d67fa3,
        mid_valueOf_d6191dfdb2d8672b,
        mid_valueOf_dbab09d1cb1d3afc,
        mid_xor_bd291583a67dfd7c,
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
