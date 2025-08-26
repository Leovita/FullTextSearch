#ifndef org_apache_lucene_internal_hppc_IntLongHashMap_H
#define org_apache_lucene_internal_hppc_IntLongHashMap_H

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
          class IntLongHashMap$ValuesContainer;
          class IntLongHashMap$KeysContainer;
          class IntLongHashMap;
          class IntLongHashMap$IntLongCursor;
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

          class IntLongHashMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_8226bd0b0fc13dba,
              mid_init$_21c15812094aeb13,
              mid_addTo_88e91af927562358,
              mid_clear_e7bdbe105ce1bafb,
              mid_clone_b49dd77941d4c3d4,
              mid_containsKey_a8281eb3b9d9672d,
              mid_ensureCapacity_8226bd0b0fc13dba,
              mid_equals_00d17418847797d4,
              mid_from_7bf6374601866344,
              mid_get_49af390f180d8ee7,
              mid_getOrDefault_88e91af927562358,
              mid_hashCode_bd89ce15dad49192,
              mid_indexExists_a8281eb3b9d9672d,
              mid_indexGet_49af390f180d8ee7,
              mid_indexInsert_ee45698dad8106c5,
              mid_indexOf_a3904e10f5bb9437,
              mid_indexRemove_49af390f180d8ee7,
              mid_indexReplace_88e91af927562358,
              mid_isEmpty_9aa4f33e82ea333f,
              mid_iterator_c7985fafdcf40e83,
              mid_keys_4cb128c1add29a25,
              mid_put_88e91af927562358,
              mid_putAll_29d327a2ef457411,
              mid_putIfAbsent_08c5592e7e9b4eb2,
              mid_putOrAdd_291ba05107ae9d41,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_release_e7bdbe105ce1bafb,
              mid_remove_49af390f180d8ee7,
              mid_size_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              mid_values_94814d081ef15334,
              mid_nextIterationSeed_bd89ce15dad49192,
              mid_allocateThenInsertThenRehash_ee45698dad8106c5,
              mid_verifyLoadFactor_8493a5edcb36d651,
              mid_hashKey_a3904e10f5bb9437,
              mid_shiftConflictingKeys_8226bd0b0fc13dba,
              mid_equalElements_b82ca6e94a4c2208,
              mid_allocateBuffers_8226bd0b0fc13dba,
              mid_rehash_74a634b25c59202d,
              max_mid
            };

            enum {
              fid_keys,
              fid_values,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntLongHashMap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntLongHashMap(const IntLongHashMap& obj) : ::java::lang::Object(obj) {}

            JArray< jint > _get_keys() const;
            void _set_keys(const JArray< jint > &) const;
            JArray< jlong > _get_values() const;
            void _set_values(const JArray< jlong > &) const;

            IntLongHashMap();
            IntLongHashMap(jint);
            IntLongHashMap(jint, jdouble);

            jlong addTo(jint, jlong) const;
            void clear() const;
            IntLongHashMap clone() const;
            jboolean containsKey(jint) const;
            void ensureCapacity(jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            static IntLongHashMap from(const JArray< jint > &, const JArray< jlong > &);
            jlong get(jint) const;
            jlong getOrDefault(jint, jlong) const;
            jint hashCode() const;
            jboolean indexExists(jint) const;
            jlong indexGet(jint) const;
            void indexInsert(jint, jint, jlong) const;
            jint indexOf(jint) const;
            jlong indexRemove(jint) const;
            jlong indexReplace(jint, jlong) const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            ::org::apache::lucene::internal::hppc::IntLongHashMap$KeysContainer keys() const;
            jlong put(jint, jlong) const;
            jint putAll(const ::java::lang::Iterable &) const;
            jboolean putIfAbsent(jint, jlong) const;
            jlong putOrAdd(jint, jlong, jlong) const;
            jlong ramBytesUsed() const;
            void release() const;
            jlong remove(jint) const;
            jint size() const;
            ::java::lang::String toString() const;
            ::org::apache::lucene::internal::hppc::IntLongHashMap$ValuesContainer values() const;
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
          extern PyType_Def PY_TYPE_DEF(IntLongHashMap);
          extern PyTypeObject *PY_TYPE(IntLongHashMap);

          class t_IntLongHashMap {
          public:
            PyObject_HEAD
            IntLongHashMap object;
            static PyObject *wrap_Object(const IntLongHashMap&);
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
