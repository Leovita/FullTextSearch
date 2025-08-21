#ifndef org_antlr_v4_runtime_misc_Array2DHashSet_H
#define org_antlr_v4_runtime_misc_Array2DHashSet_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace misc {

          class Array2DHashSet : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_add_570b5248a6da3ef6,
              mid_addAll_f2a1f31c5865e20d,
              mid_clear_3720c61b0679eb3e,
              mid_contains_570b5248a6da3ef6,
              mid_containsAll_f2a1f31c5865e20d,
              mid_containsFast_570b5248a6da3ef6,
              mid_equals_570b5248a6da3ef6,
              mid_get_5fd81664d2d475e1,
              mid_getOrAdd_5fd81664d2d475e1,
              mid_hashCode_20fbf7565993c3d7,
              mid_isEmpty_947277eca0748c4e,
              mid_iterator_0db4c76ff7ee995b,
              mid_remove_570b5248a6da3ef6,
              mid_removeAll_f2a1f31c5865e20d,
              mid_removeFast_570b5248a6da3ef6,
              mid_retainAll_f2a1f31c5865e20d,
              mid_size_20fbf7565993c3d7,
              mid_toArray_e6b839682a4610a6,
              mid_toArray_1794d6b866766560,
              mid_toString_09a7afff1868fc5e,
              mid_toTableString_09a7afff1868fc5e,
              mid_getBucket_657656e6a597f732,
              mid_asElementType_5fd81664d2d475e1,
              mid_createBuckets_bdd5b43a20f192f7,
              mid_createBucket_fddd493c893a9ca4,
              mid_getOrAddImpl_5fd81664d2d475e1,
              mid_expand_3720c61b0679eb3e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Array2DHashSet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Array2DHashSet(const Array2DHashSet& obj) : ::java::lang::Object(obj) {}

            static jint INITAL_BUCKET_CAPACITY;
            static jint INITAL_CAPACITY;
            static jdouble LOAD_FACTOR;

            Array2DHashSet();

            jboolean add(const ::java::lang::Object &) const;
            jboolean addAll(const ::java::util::Collection &) const;
            void clear() const;
            jboolean contains(const ::java::lang::Object &) const;
            jboolean containsAll(const ::java::util::Collection &) const;
            jboolean containsFast(const ::java::lang::Object &) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::Object get(const ::java::lang::Object &) const;
            ::java::lang::Object getOrAdd(const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            jboolean remove(const ::java::lang::Object &) const;
            jboolean removeAll(const ::java::util::Collection &) const;
            jboolean removeFast(const ::java::lang::Object &) const;
            jboolean retainAll(const ::java::util::Collection &) const;
            jint size() const;
            JArray< ::java::lang::Object > toArray() const;
            JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
            ::java::lang::String toString() const;
            ::java::lang::String toTableString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace misc {
          extern PyType_Def PY_TYPE_DEF(Array2DHashSet);
          extern PyTypeObject *PY_TYPE(Array2DHashSet);

          class t_Array2DHashSet {
          public:
            PyObject_HEAD
            Array2DHashSet object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Array2DHashSet *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Array2DHashSet&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Array2DHashSet&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
