#ifndef org_apache_lucene_internal_hppc_LongFloatHashMap_H
#define org_apache_lucene_internal_hppc_LongFloatHashMap_H

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
          class LongFloatHashMap$ValuesContainer;
          class LongFloatHashMap$LongFloatCursor;
          class LongFloatHashMap$KeysContainer;
          class LongFloatHashMap;
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

          class LongFloatHashMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_8226bd0b0fc13dba,
              mid_init$_21c15812094aeb13,
              mid_addTo_f70ac02377e505f8,
              mid_clear_e7bdbe105ce1bafb,
              mid_clone_c3ea5150d46b2154,
              mid_containsKey_eae0b285d107fcb0,
              mid_ensureCapacity_8226bd0b0fc13dba,
              mid_equals_00d17418847797d4,
              mid_from_adcc87a0c8b666af,
              mid_get_9c0f87fbae4c52c2,
              mid_getOrDefault_f70ac02377e505f8,
              mid_hashCode_bd89ce15dad49192,
              mid_indexExists_a8281eb3b9d9672d,
              mid_indexGet_5873a23b935a9d49,
              mid_indexInsert_c3e9e8db12988564,
              mid_indexOf_7af44747c1921bd4,
              mid_indexRemove_5873a23b935a9d49,
              mid_indexReplace_cb697677f8bf71f1,
              mid_isEmpty_9aa4f33e82ea333f,
              mid_iterator_c7985fafdcf40e83,
              mid_keys_68f0e4fb783f4eea,
              mid_put_f70ac02377e505f8,
              mid_putAll_29d327a2ef457411,
              mid_putIfAbsent_d9b075977364f84a,
              mid_putOrAdd_d28cd66fef5f8137,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_release_e7bdbe105ce1bafb,
              mid_remove_9c0f87fbae4c52c2,
              mid_size_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              mid_values_f955f016aa2e20fb,
              mid_nextIterationSeed_bd89ce15dad49192,
              mid_allocateThenInsertThenRehash_c3e9e8db12988564,
              mid_verifyLoadFactor_8493a5edcb36d651,
              mid_hashKey_7af44747c1921bd4,
              mid_shiftConflictingKeys_8226bd0b0fc13dba,
              mid_equalElements_1baf92784b431a7d,
              mid_allocateBuffers_8226bd0b0fc13dba,
              mid_rehash_cf29183d06406d6a,
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

            explicit LongFloatHashMap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongFloatHashMap(const LongFloatHashMap& obj) : ::java::lang::Object(obj) {}

            JArray< jlong > _get_keys() const;
            void _set_keys(const JArray< jlong > &) const;
            JArray< jfloat > _get_values() const;
            void _set_values(const JArray< jfloat > &) const;

            LongFloatHashMap();
            LongFloatHashMap(jint);
            LongFloatHashMap(jint, jdouble);

            jfloat addTo(jlong, jfloat) const;
            void clear() const;
            LongFloatHashMap clone() const;
            jboolean containsKey(jlong) const;
            void ensureCapacity(jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            static LongFloatHashMap from(const JArray< jlong > &, const JArray< jfloat > &);
            jfloat get(jlong) const;
            jfloat getOrDefault(jlong, jfloat) const;
            jint hashCode() const;
            jboolean indexExists(jint) const;
            jfloat indexGet(jint) const;
            void indexInsert(jint, jlong, jfloat) const;
            jint indexOf(jlong) const;
            jfloat indexRemove(jint) const;
            jfloat indexReplace(jint, jfloat) const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            ::org::apache::lucene::internal::hppc::LongFloatHashMap$KeysContainer keys() const;
            jfloat put(jlong, jfloat) const;
            jint putAll(const ::java::lang::Iterable &) const;
            jboolean putIfAbsent(jlong, jfloat) const;
            jfloat putOrAdd(jlong, jfloat, jfloat) const;
            jlong ramBytesUsed() const;
            void release() const;
            jfloat remove(jlong) const;
            jint size() const;
            ::java::lang::String toString() const;
            ::org::apache::lucene::internal::hppc::LongFloatHashMap$ValuesContainer values() const;
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
          extern PyType_Def PY_TYPE_DEF(LongFloatHashMap);
          extern PyTypeObject *PY_TYPE(LongFloatHashMap);

          class t_LongFloatHashMap {
          public:
            PyObject_HEAD
            LongFloatHashMap object;
            static PyObject *wrap_Object(const LongFloatHashMap&);
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
