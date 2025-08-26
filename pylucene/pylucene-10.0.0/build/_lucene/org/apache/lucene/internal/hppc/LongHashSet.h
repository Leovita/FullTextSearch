#ifndef org_apache_lucene_internal_hppc_LongHashSet_H
#define org_apache_lucene_internal_hppc_LongHashSet_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Cloneable;
    class Class;
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
          class LongHashSet;
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

          class LongHashSet : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_8226bd0b0fc13dba,
              mid_init$_21c15812094aeb13,
              mid_add_eae0b285d107fcb0,
              mid_addAll_9ea1f92f698600c6,
              mid_addAll_b1d2aafeec55bef2,
              mid_addAll_29d327a2ef457411,
              mid_clear_e7bdbe105ce1bafb,
              mid_clone_f7f9e02ad52fcc02,
              mid_contains_eae0b285d107fcb0,
              mid_ensureCapacity_8226bd0b0fc13dba,
              mid_equals_00d17418847797d4,
              mid_from_b7d9c48be9b6ef33,
              mid_hashCode_bd89ce15dad49192,
              mid_indexExists_a8281eb3b9d9672d,
              mid_indexGet_49af390f180d8ee7,
              mid_indexInsert_1d43622e571bd043,
              mid_indexOf_7af44747c1921bd4,
              mid_indexRemove_8226bd0b0fc13dba,
              mid_indexReplace_88e91af927562358,
              mid_isEmpty_9aa4f33e82ea333f,
              mid_iterator_c7985fafdcf40e83,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_release_e7bdbe105ce1bafb,
              mid_remove_eae0b285d107fcb0,
              mid_removeAll_b1d2aafeec55bef2,
              mid_size_bd89ce15dad49192,
              mid_toArray_1aab5293a9d94cd3,
              mid_nextIterationSeed_bd89ce15dad49192,
              mid_allocateThenInsertThenRehash_1d43622e571bd043,
              mid_verifyLoadFactor_8493a5edcb36d651,
              mid_hashKey_7af44747c1921bd4,
              mid_shiftConflictingKeys_8226bd0b0fc13dba,
              mid_allocateBuffers_8226bd0b0fc13dba,
              mid_rehash_bf6da8fca8728f3d,
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

            explicit LongHashSet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongHashSet(const LongHashSet& obj) : ::java::lang::Object(obj) {}

            JArray< jlong > _get_keys() const;
            void _set_keys(const JArray< jlong > &) const;

            LongHashSet();
            LongHashSet(jint);
            LongHashSet(jint, jdouble);

            jboolean add(jlong) const;
            jint addAll(const JArray< jlong > &) const;
            jint addAll(const LongHashSet &) const;
            jint addAll(const ::java::lang::Iterable &) const;
            void clear() const;
            LongHashSet clone() const;
            jboolean contains(jlong) const;
            void ensureCapacity(jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            static LongHashSet from(const JArray< jlong > &);
            jint hashCode() const;
            jboolean indexExists(jint) const;
            jlong indexGet(jint) const;
            void indexInsert(jint, jlong) const;
            jint indexOf(jlong) const;
            void indexRemove(jint) const;
            jlong indexReplace(jint, jlong) const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            jlong ramBytesUsed() const;
            void release() const;
            jboolean remove(jlong) const;
            jint removeAll(const LongHashSet &) const;
            jint size() const;
            JArray< jlong > toArray() const;
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
          extern PyType_Def PY_TYPE_DEF(LongHashSet);
          extern PyTypeObject *PY_TYPE(LongHashSet);

          class t_LongHashSet {
          public:
            PyObject_HEAD
            LongHashSet object;
            static PyObject *wrap_Object(const LongHashSet&);
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
