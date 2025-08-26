#ifndef org_apache_lucene_internal_hppc_LongIntHashMap_H
#define org_apache_lucene_internal_hppc_LongIntHashMap_H

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
          class LongIntHashMap$KeysContainer;
          class LongIntHashMap$ValuesContainer;
          class LongIntHashMap;
          class LongIntHashMap$LongIntCursor;
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

          class LongIntHashMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_8226bd0b0fc13dba,
              mid_init$_21c15812094aeb13,
              mid_addTo_d6152e1dadfddcdb,
              mid_clear_e7bdbe105ce1bafb,
              mid_clone_9d0211c6efce32dc,
              mid_containsKey_eae0b285d107fcb0,
              mid_ensureCapacity_8226bd0b0fc13dba,
              mid_equals_00d17418847797d4,
              mid_from_e6f78bd542054751,
              mid_get_7af44747c1921bd4,
              mid_getOrDefault_d6152e1dadfddcdb,
              mid_hashCode_bd89ce15dad49192,
              mid_indexExists_a8281eb3b9d9672d,
              mid_indexGet_a3904e10f5bb9437,
              mid_indexInsert_ab5c6c0c698d9554,
              mid_indexOf_7af44747c1921bd4,
              mid_indexRemove_a3904e10f5bb9437,
              mid_indexReplace_7f27cf81a85a97e9,
              mid_isEmpty_9aa4f33e82ea333f,
              mid_iterator_c7985fafdcf40e83,
              mid_keys_ddaa8a33f447cca5,
              mid_put_d6152e1dadfddcdb,
              mid_putAll_29d327a2ef457411,
              mid_putIfAbsent_7f4975b815f68db8,
              mid_putOrAdd_21bf1fd959825add,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_release_e7bdbe105ce1bafb,
              mid_remove_7af44747c1921bd4,
              mid_size_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              mid_values_af09f6dad1c98baa,
              mid_nextIterationSeed_bd89ce15dad49192,
              mid_allocateThenInsertThenRehash_ab5c6c0c698d9554,
              mid_verifyLoadFactor_8493a5edcb36d651,
              mid_hashKey_7af44747c1921bd4,
              mid_shiftConflictingKeys_8226bd0b0fc13dba,
              mid_equalElements_5bcdb48f5d074e50,
              mid_allocateBuffers_8226bd0b0fc13dba,
              mid_rehash_b148c56a0f6c23af,
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

            explicit LongIntHashMap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongIntHashMap(const LongIntHashMap& obj) : ::java::lang::Object(obj) {}

            JArray< jlong > _get_keys() const;
            void _set_keys(const JArray< jlong > &) const;
            JArray< jint > _get_values() const;
            void _set_values(const JArray< jint > &) const;

            LongIntHashMap();
            LongIntHashMap(jint);
            LongIntHashMap(jint, jdouble);

            jint addTo(jlong, jint) const;
            void clear() const;
            LongIntHashMap clone() const;
            jboolean containsKey(jlong) const;
            void ensureCapacity(jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            static LongIntHashMap from(const JArray< jlong > &, const JArray< jint > &);
            jint get(jlong) const;
            jint getOrDefault(jlong, jint) const;
            jint hashCode() const;
            jboolean indexExists(jint) const;
            jint indexGet(jint) const;
            void indexInsert(jint, jlong, jint) const;
            jint indexOf(jlong) const;
            jint indexRemove(jint) const;
            jint indexReplace(jint, jint) const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            ::org::apache::lucene::internal::hppc::LongIntHashMap$KeysContainer keys() const;
            jint put(jlong, jint) const;
            jint putAll(const ::java::lang::Iterable &) const;
            jboolean putIfAbsent(jlong, jint) const;
            jint putOrAdd(jlong, jint, jint) const;
            jlong ramBytesUsed() const;
            void release() const;
            jint remove(jlong) const;
            jint size() const;
            ::java::lang::String toString() const;
            ::org::apache::lucene::internal::hppc::LongIntHashMap$ValuesContainer values() const;
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
          extern PyType_Def PY_TYPE_DEF(LongIntHashMap);
          extern PyTypeObject *PY_TYPE(LongIntHashMap);

          class t_LongIntHashMap {
          public:
            PyObject_HEAD
            LongIntHashMap object;
            static PyObject *wrap_Object(const LongIntHashMap&);
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
