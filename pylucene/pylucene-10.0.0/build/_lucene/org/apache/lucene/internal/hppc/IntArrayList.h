#ifndef org_apache_lucene_internal_hppc_IntArrayList_H
#define org_apache_lucene_internal_hppc_IntArrayList_H

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
          class IntArrayList;
          class IntCursor;
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

          class IntArrayList : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_540b2b23d51b1efd,
              mid_add_143c0cd4e297ef70,
              mid_add_540b2b23d51b1efd,
              mid_add_ad090cb6070ea6a2,
              mid_addAll_59ea6a464e3fe1b6,
              mid_addAll_96d1463b11b9fbe9,
              mid_clear_3720c61b0679eb3e,
              mid_clone_608d4b1616a38cec,
              mid_contains_ae22d3a856ad56f1,
              mid_ensureCapacity_540b2b23d51b1efd,
              mid_equals_570b5248a6da3ef6,
              mid_from_1f4179f7ba76391a,
              mid_get_3c9bba330f083871,
              mid_hashCode_20fbf7565993c3d7,
              mid_indexOf_3c9bba330f083871,
              mid_insert_e13cff512ebda969,
              mid_isEmpty_947277eca0748c4e,
              mid_iterator_0db4c76ff7ee995b,
              mid_lastIndexOf_3c9bba330f083871,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_release_3720c61b0679eb3e,
              mid_removeAll_3c9bba330f083871,
              mid_removeAt_3c9bba330f083871,
              mid_removeElement_ae22d3a856ad56f1,
              mid_removeFirst_3c9bba330f083871,
              mid_removeLast_20fbf7565993c3d7,
              mid_removeLast_3c9bba330f083871,
              mid_removeRange_e13cff512ebda969,
              mid_resize_540b2b23d51b1efd,
              mid_reverse_608d4b1616a38cec,
              mid_set_7f733b5d08bb5ec4,
              mid_size_20fbf7565993c3d7,
              mid_sort_608d4b1616a38cec,
              mid_toArray_623cd4a044ba647a,
              mid_toString_09a7afff1868fc5e,
              mid_trimToSize_3720c61b0679eb3e,
              mid_equalElements_b1859301f16e71ce,
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
