#ifndef org_apache_lucene_internal_hppc_IntArrayList_H
#define org_apache_lucene_internal_hppc_IntArrayList_H

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
          class IntCursor;
          class IntArrayList;
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

          class IntArrayList : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_8226bd0b0fc13dba,
              mid_add_5434f4e6ff59bff9,
              mid_add_8226bd0b0fc13dba,
              mid_add_57da58ead958e473,
              mid_addAll_ca63f9c7174522c2,
              mid_addAll_29d327a2ef457411,
              mid_clear_e7bdbe105ce1bafb,
              mid_clone_5010e7e735e21c22,
              mid_contains_a8281eb3b9d9672d,
              mid_ensureCapacity_8226bd0b0fc13dba,
              mid_equals_00d17418847797d4,
              mid_from_1afeb470a245a984,
              mid_get_a3904e10f5bb9437,
              mid_hashCode_bd89ce15dad49192,
              mid_indexOf_a3904e10f5bb9437,
              mid_insert_645c25455f5b9b1c,
              mid_isEmpty_9aa4f33e82ea333f,
              mid_iterator_c7985fafdcf40e83,
              mid_lastIndexOf_a3904e10f5bb9437,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_release_e7bdbe105ce1bafb,
              mid_removeAll_a3904e10f5bb9437,
              mid_removeAt_a3904e10f5bb9437,
              mid_removeElement_a8281eb3b9d9672d,
              mid_removeFirst_a3904e10f5bb9437,
              mid_removeLast_bd89ce15dad49192,
              mid_removeLast_a3904e10f5bb9437,
              mid_removeRange_645c25455f5b9b1c,
              mid_resize_8226bd0b0fc13dba,
              mid_reverse_5010e7e735e21c22,
              mid_set_7f27cf81a85a97e9,
              mid_size_bd89ce15dad49192,
              mid_sort_5010e7e735e21c22,
              mid_toArray_4b72a28a860ae838,
              mid_toString_e7df854526d67fa3,
              mid_trimToSize_e7bdbe105ce1bafb,
              mid_ensureBufferSpace_8226bd0b0fc13dba,
              mid_equalElements_34d06cca622eed39,
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

            explicit IntArrayList(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntArrayList(const IntArrayList& obj) : ::java::lang::Object(obj) {}

            static JArray< jint > *EMPTY_ARRAY;

            JArray< jint > _get_buffer() const;
            void _set_buffer(const JArray< jint > &) const;
            jint _get_elementsCount() const;
            void _set_elementsCount(jint) const;

            IntArrayList();
            IntArrayList(jint);

            void add(const JArray< jint > &) const;
            void add(jint) const;
            void add(const JArray< jint > &, jint, jint) const;
            jint addAll(const IntArrayList &) const;
            jint addAll(const ::java::lang::Iterable &) const;
            void clear() const;
            IntArrayList clone() const;
            jboolean contains(jint) const;
            void ensureCapacity(jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            static IntArrayList from(const JArray< jint > &);
            jint get(jint) const;
            jint hashCode() const;
            jint indexOf(jint) const;
            void insert(jint, jint) const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            jint lastIndexOf(jint) const;
            jlong ramBytesUsed() const;
            void release() const;
            jint removeAll(jint) const;
            jint removeAt(jint) const;
            jboolean removeElement(jint) const;
            jint removeFirst(jint) const;
            jint removeLast() const;
            jint removeLast(jint) const;
            void removeRange(jint, jint) const;
            void resize(jint) const;
            IntArrayList reverse() const;
            jint set(jint, jint) const;
            jint size() const;
            IntArrayList sort() const;
            JArray< jint > toArray() const;
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
          extern PyType_Def PY_TYPE_DEF(IntArrayList);
          extern PyTypeObject *PY_TYPE(IntArrayList);

          class t_IntArrayList {
          public:
            PyObject_HEAD
            IntArrayList object;
            static PyObject *wrap_Object(const IntArrayList&);
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
