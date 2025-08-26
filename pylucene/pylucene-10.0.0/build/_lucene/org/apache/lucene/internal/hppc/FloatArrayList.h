#ifndef org_apache_lucene_internal_hppc_FloatArrayList_H
#define org_apache_lucene_internal_hppc_FloatArrayList_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Cloneable;
    class Class;
    class String;
    class Iterable;
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
          class FloatCursor;
          class FloatArrayList;
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
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_8226bd0b0fc13dba,
              mid_add_d2e2fadde4bf8d25,
              mid_add_675f4cb9a2529ee0,
              mid_add_a1c18faad4aff7a1,
              mid_addAll_62768ff71b1449a8,
              mid_addAll_29d327a2ef457411,
              mid_clear_e7bdbe105ce1bafb,
              mid_clone_9951d212e908146e,
              mid_contains_bf47f881a09da8d2,
              mid_ensureCapacity_8226bd0b0fc13dba,
              mid_equals_00d17418847797d4,
              mid_from_c4c51b5d58e415b3,
              mid_get_5873a23b935a9d49,
              mid_hashCode_bd89ce15dad49192,
              mid_indexOf_96b611d51a3ba940,
              mid_insert_a18b0cdf76a9509e,
              mid_isEmpty_9aa4f33e82ea333f,
              mid_iterator_c7985fafdcf40e83,
              mid_lastIndexOf_96b611d51a3ba940,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_release_e7bdbe105ce1bafb,
              mid_removeAll_96b611d51a3ba940,
              mid_removeAt_5873a23b935a9d49,
              mid_removeElement_bf47f881a09da8d2,
              mid_removeFirst_96b611d51a3ba940,
              mid_removeLast_8b62236f0e4d0dbc,
              mid_removeLast_96b611d51a3ba940,
              mid_removeRange_645c25455f5b9b1c,
              mid_resize_8226bd0b0fc13dba,
              mid_reverse_9951d212e908146e,
              mid_set_cb697677f8bf71f1,
              mid_size_bd89ce15dad49192,
              mid_sort_9951d212e908146e,
              mid_toArray_67d89dc3894661ff,
              mid_toString_e7df854526d67fa3,
              mid_trimToSize_e7bdbe105ce1bafb,
              mid_ensureBufferSpace_8226bd0b0fc13dba,
              mid_equalElements_1d8c9effd7bb45bd,
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
