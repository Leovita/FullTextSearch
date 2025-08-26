#ifndef org_apache_lucene_internal_hppc_LongArrayList_H
#define org_apache_lucene_internal_hppc_LongArrayList_H

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
      namespace internal {
        namespace hppc {
          class LongArrayList;
          class LongCursor;
        }
      }
      namespace util {
        class Accountable;
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

          class LongArrayList : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_8226bd0b0fc13dba,
              mid_add_bf6da8fca8728f3d,
              mid_add_1d3149fac12f2af3,
              mid_add_2a4a0e3eb510f108,
              mid_addAll_e7d1f68e8ef9faa0,
              mid_addAll_29d327a2ef457411,
              mid_clear_e7bdbe105ce1bafb,
              mid_clone_b08b4335695d8778,
              mid_contains_eae0b285d107fcb0,
              mid_ensureCapacity_8226bd0b0fc13dba,
              mid_equals_00d17418847797d4,
              mid_from_d2b5918e62c69257,
              mid_get_49af390f180d8ee7,
              mid_hashCode_bd89ce15dad49192,
              mid_indexOf_7af44747c1921bd4,
              mid_insert_1d43622e571bd043,
              mid_isEmpty_9aa4f33e82ea333f,
              mid_iterator_c7985fafdcf40e83,
              mid_lastIndexOf_7af44747c1921bd4,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_release_e7bdbe105ce1bafb,
              mid_removeAll_7af44747c1921bd4,
              mid_removeAt_49af390f180d8ee7,
              mid_removeElement_eae0b285d107fcb0,
              mid_removeFirst_7af44747c1921bd4,
              mid_removeLast_0f176418e3e16541,
              mid_removeLast_7af44747c1921bd4,
              mid_removeRange_645c25455f5b9b1c,
              mid_resize_8226bd0b0fc13dba,
              mid_reverse_b08b4335695d8778,
              mid_set_88e91af927562358,
              mid_size_bd89ce15dad49192,
              mid_sort_b08b4335695d8778,
              mid_toArray_1aab5293a9d94cd3,
              mid_toString_e7df854526d67fa3,
              mid_trimToSize_e7bdbe105ce1bafb,
              mid_ensureBufferSpace_8226bd0b0fc13dba,
              mid_equalElements_50c12f3f297c28f3,
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

            explicit LongArrayList(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongArrayList(const LongArrayList& obj) : ::java::lang::Object(obj) {}

            static JArray< jlong > *EMPTY_ARRAY;

            JArray< jlong > _get_buffer() const;
            void _set_buffer(const JArray< jlong > &) const;
            jint _get_elementsCount() const;
            void _set_elementsCount(jint) const;

            LongArrayList();
            LongArrayList(jint);

            void add(const JArray< jlong > &) const;
            void add(jlong) const;
            void add(const JArray< jlong > &, jint, jint) const;
            jint addAll(const LongArrayList &) const;
            jint addAll(const ::java::lang::Iterable &) const;
            void clear() const;
            LongArrayList clone() const;
            jboolean contains(jlong) const;
            void ensureCapacity(jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            static LongArrayList from(const JArray< jlong > &);
            jlong get(jint) const;
            jint hashCode() const;
            jint indexOf(jlong) const;
            void insert(jint, jlong) const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            jint lastIndexOf(jlong) const;
            jlong ramBytesUsed() const;
            void release() const;
            jint removeAll(jlong) const;
            jlong removeAt(jint) const;
            jboolean removeElement(jlong) const;
            jint removeFirst(jlong) const;
            jlong removeLast() const;
            jint removeLast(jlong) const;
            void removeRange(jint, jint) const;
            void resize(jint) const;
            LongArrayList reverse() const;
            jlong set(jint, jlong) const;
            jint size() const;
            LongArrayList sort() const;
            JArray< jlong > toArray() const;
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
          extern PyType_Def PY_TYPE_DEF(LongArrayList);
          extern PyTypeObject *PY_TYPE(LongArrayList);

          class t_LongArrayList {
          public:
            PyObject_HEAD
            LongArrayList object;
            static PyObject *wrap_Object(const LongArrayList&);
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
