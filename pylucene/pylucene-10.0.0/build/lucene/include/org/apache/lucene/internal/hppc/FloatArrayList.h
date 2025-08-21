#ifndef org_apache_lucene_internal_hppc_FloatArrayList_H
#define org_apache_lucene_internal_hppc_FloatArrayList_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
    class String;
    class Iterable;
    class Cloneable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace internal {
        namespace hppc {
          class FloatArrayList;
          class FloatCursor;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {

          class FloatArrayList : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_540b2b23d51b1efd,
              mid_add_354df523028ef700,
              mid_add_c771a95b0227fb6a,
              mid_add_e895d5e6b13d4d50,
              mid_addAll_d0d2afb711c2508f,
              mid_addAll_96d1463b11b9fbe9,
              mid_clear_3720c61b0679eb3e,
              mid_clone_6884dba725348a4e,
              mid_contains_ed8290af1db6b7df,
              mid_ensureCapacity_540b2b23d51b1efd,
              mid_equals_570b5248a6da3ef6,
              mid_from_b0048fbfa3d8424b,
              mid_get_29cfa01aaad92564,
              mid_hashCode_20fbf7565993c3d7,
              mid_indexOf_739cf609cad4f3fa,
              mid_insert_06e0b8d4c1d7906b,
              mid_isEmpty_947277eca0748c4e,
              mid_iterator_0db4c76ff7ee995b,
              mid_lastIndexOf_739cf609cad4f3fa,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_release_3720c61b0679eb3e,
              mid_removeAll_739cf609cad4f3fa,
              mid_removeAt_29cfa01aaad92564,
              mid_removeElement_ed8290af1db6b7df,
              mid_removeFirst_739cf609cad4f3fa,
              mid_removeLast_9b6c3480dac00edf,
              mid_removeLast_739cf609cad4f3fa,
              mid_removeRange_e13cff512ebda969,
              mid_resize_540b2b23d51b1efd,
              mid_reverse_6884dba725348a4e,
              mid_set_38a8f22d32ce6b74,
              mid_size_20fbf7565993c3d7,
              mid_sort_6884dba725348a4e,
              mid_toArray_808165844ea67079,
              mid_toString_09a7afff1868fc5e,
              mid_trimToSize_3720c61b0679eb3e,
              mid_equalElements_74d44f40d97e12a9,
              mid_ensureBufferSpace_540b2b23d51b1efd,
              max_mid
            };

            enum {
              fid_buffer,
              fid_elementsCount,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FloatArrayList(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FloatArrayList(const FloatArrayList& obj) : ::java::lang::Object(obj) {}

            static JArray< jfloat > *EMPTY_ARRAY;

            JArray< jfloat > _get_buffer() const;
            void _set_buffer(const JArray< jfloat > &) const;
            jint _get_elementsCount() const;
            void _set_elementsCount(jint) const;

            FloatArrayList();
            FloatArrayList(jint);

            void add(const JArray< jfloat > &) const;
            void add(jfloat) const;
            void add(const JArray< jfloat > &, jint, jint) const;
            jint addAll(const FloatArrayList &) const;
            jint addAll(const ::java::lang::Iterable &) const;
            void clear() const;
            FloatArrayList clone() const;
            jboolean contains(jfloat) const;
            void ensureCapacity(jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            static FloatArrayList from(const JArray< jfloat > &);
            jfloat get(jint) const;
            jint hashCode() const;
            jint indexOf(jfloat) const;
            void insert(jint, jfloat) const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            jint lastIndexOf(jfloat) const;
            jlong ramBytesUsed() const;
            void release() const;
            jint removeAll(jfloat) const;
            jfloat removeAt(jint) const;
            jboolean removeElement(jfloat) const;
            jint removeFirst(jfloat) const;
            jfloat removeLast() const;
            jint removeLast(jfloat) const;
            void removeRange(jint, jint) const;
            void resize(jint) const;
            FloatArrayList reverse() const;
            jfloat set(jint, jfloat) const;
            jint size() const;
            FloatArrayList sort() const;
            JArray< jfloat > toArray() const;
            ::java::lang::String toString() const;
            void trimToSize() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {
          extern PyType_Def PY_TYPE_DEF(FloatArrayList);
          extern PyTypeObject *PY_TYPE(FloatArrayList);

          class t_FloatArrayList {
          public:
            PyObject_HEAD
            FloatArrayList object;
            static PyObject *wrap_Object(const FloatArrayList&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
