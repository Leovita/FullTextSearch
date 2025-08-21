#ifndef org_apache_lucene_internal_hppc_LongArrayList_H
#define org_apache_lucene_internal_hppc_LongArrayList_H

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
          class LongArrayList;
          class LongCursor;
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

          class LongArrayList : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_540b2b23d51b1efd,
              mid_add_140bd592f9f15dfc,
              mid_add_8b3d46852b435a94,
              mid_add_f3cd87eda3d12dc6,
              mid_addAll_76f8350b6f1a83eb,
              mid_addAll_96d1463b11b9fbe9,
              mid_clear_3720c61b0679eb3e,
              mid_clone_7bdcd9dc32c009ae,
              mid_contains_d8a0ab12857291e0,
              mid_ensureCapacity_540b2b23d51b1efd,
              mid_equals_570b5248a6da3ef6,
              mid_from_0fca1a683ec4bccb,
              mid_get_7b22650fccb5d574,
              mid_hashCode_20fbf7565993c3d7,
              mid_indexOf_35c872f03f347c10,
              mid_insert_52c53d6e59b40db2,
              mid_isEmpty_947277eca0748c4e,
              mid_iterator_0db4c76ff7ee995b,
              mid_lastIndexOf_35c872f03f347c10,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_release_3720c61b0679eb3e,
              mid_removeAll_35c872f03f347c10,
              mid_removeAt_7b22650fccb5d574,
              mid_removeElement_d8a0ab12857291e0,
              mid_removeFirst_35c872f03f347c10,
              mid_removeLast_16939d9d0a9a9721,
              mid_removeLast_35c872f03f347c10,
              mid_removeRange_e13cff512ebda969,
              mid_resize_540b2b23d51b1efd,
              mid_reverse_7bdcd9dc32c009ae,
              mid_set_cd2eca3bb00d4788,
              mid_size_20fbf7565993c3d7,
              mid_sort_7bdcd9dc32c009ae,
              mid_toArray_a057bd1a0d2826b3,
              mid_toString_09a7afff1868fc5e,
              mid_trimToSize_3720c61b0679eb3e,
              mid_equalElements_92ece2633872ea36,
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
