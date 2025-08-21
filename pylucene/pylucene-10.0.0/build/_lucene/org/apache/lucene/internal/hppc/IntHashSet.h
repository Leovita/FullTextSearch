#ifndef org_apache_lucene_internal_hppc_IntHashSet_H
#define org_apache_lucene_internal_hppc_IntHashSet_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
  }
  namespace lang {
    class Integer;
    class Class;
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
          class IntCursor;
          class IntHashSet;
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

          class IntHashSet : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_540b2b23d51b1efd,
              mid_init$_40eba2cff967cc45,
              mid_init$_bfec175f942874e6,
              mid_add_ae22d3a856ad56f1,
              mid_addAll_99e50d7a0326d5c8,
              mid_addAll_e67f489f0f3e29e4,
              mid_addAll_96d1463b11b9fbe9,
              mid_addAll_c3a4145badf2e920,
              mid_clear_3720c61b0679eb3e,
              mid_clone_621f13fcdcf0e138,
              mid_contains_ae22d3a856ad56f1,
              mid_ensureCapacity_540b2b23d51b1efd,
              mid_equals_570b5248a6da3ef6,
              mid_from_644b5c76a37162cf,
              mid_hashCode_20fbf7565993c3d7,
              mid_indexExists_ae22d3a856ad56f1,
              mid_indexGet_3c9bba330f083871,
              mid_indexInsert_e13cff512ebda969,
              mid_indexOf_3c9bba330f083871,
              mid_indexRemove_540b2b23d51b1efd,
              mid_indexReplace_7f733b5d08bb5ec4,
              mid_isEmpty_947277eca0748c4e,
              mid_iterator_0db4c76ff7ee995b,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_release_3720c61b0679eb3e,
              mid_remove_ae22d3a856ad56f1,
              mid_removeAll_e67f489f0f3e29e4,
              mid_size_20fbf7565993c3d7,
              mid_toArray_623cd4a044ba647a,
              mid_verifyLoadFactor_8fff3d7dcb9fddc5,
              mid_hashKey_3c9bba330f083871,
              mid_allocateThenInsertThenRehash_e13cff512ebda969,
              mid_nextIterationSeed_20fbf7565993c3d7,
              mid_shiftConflictingKeys_540b2b23d51b1efd,
              mid_allocateBuffers_540b2b23d51b1efd,
              mid_rehash_143c0cd4e297ef70,
              max_mid
            };

            enum {
              fid_keys,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntHashSet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntHashSet(const IntHashSet& obj) : ::java::lang::Object(obj) {}

            JArray< jint > _get_keys() const;
            void _set_keys(const JArray< jint > &) const;

            IntHashSet();
            IntHashSet(jint);
            IntHashSet(const ::java::util::Collection &);
            IntHashSet(jint, jdouble);

            jboolean add(jint) const;
            jint addAll(const JArray< jint > &) const;
            jint addAll(const IntHashSet &) const;
            jint addAll(const ::java::lang::Iterable &) const;
            jint addAll(const ::java::util::Collection &) const;
            void clear() const;
            IntHashSet clone() const;
            jboolean contains(jint) const;
            void ensureCapacity(jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            static IntHashSet from(const JArray< jint > &);
            jint hashCode() const;
            jboolean indexExists(jint) const;
            jint indexGet(jint) const;
            void indexInsert(jint, jint) const;
            jint indexOf(jint) const;
            void indexRemove(jint) const;
            jint indexReplace(jint, jint) const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            jlong ramBytesUsed() const;
            void release() const;
            jboolean remove(jint) const;
            jint removeAll(const IntHashSet &) const;
            jint size() const;
            JArray< jint > toArray() const;
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
          extern PyType_Def PY_TYPE_DEF(IntHashSet);
          extern PyTypeObject *PY_TYPE(IntHashSet);

          class t_IntHashSet {
          public:
            PyObject_HEAD
            IntHashSet object;
            static PyObject *wrap_Object(const IntHashSet&);
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
