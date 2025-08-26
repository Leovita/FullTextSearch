#ifndef org_apache_lucene_internal_hppc_IntFloatHashMap_H
#define org_apache_lucene_internal_hppc_IntFloatHashMap_H

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
          class IntFloatHashMap$IntFloatCursor;
          class IntFloatHashMap$KeysContainer;
          class IntFloatHashMap$ValuesContainer;
          class IntFloatHashMap;
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

          class IntFloatHashMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_8226bd0b0fc13dba,
              mid_init$_21c15812094aeb13,
              mid_addTo_cb697677f8bf71f1,
              mid_clear_e7bdbe105ce1bafb,
              mid_clone_d6383db87a41fb8f,
              mid_containsKey_a8281eb3b9d9672d,
              mid_ensureCapacity_8226bd0b0fc13dba,
              mid_equals_00d17418847797d4,
              mid_from_4dde175a0db27d09,
              mid_get_5873a23b935a9d49,
              mid_getOrDefault_cb697677f8bf71f1,
              mid_hashCode_bd89ce15dad49192,
              mid_indexExists_a8281eb3b9d9672d,
              mid_indexGet_5873a23b935a9d49,
              mid_indexInsert_637d040f0f81bc84,
              mid_indexOf_a3904e10f5bb9437,
              mid_indexRemove_5873a23b935a9d49,
              mid_indexReplace_cb697677f8bf71f1,
              mid_isEmpty_9aa4f33e82ea333f,
              mid_iterator_c7985fafdcf40e83,
              mid_keys_1242f4789f8edad4,
              mid_put_cb697677f8bf71f1,
              mid_putAll_29d327a2ef457411,
              mid_putIfAbsent_0ebe0f1167a31953,
              mid_putOrAdd_55a95d007ef77f20,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_release_e7bdbe105ce1bafb,
              mid_remove_5873a23b935a9d49,
              mid_size_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              mid_values_63b729c4815ca36f,
              mid_nextIterationSeed_bd89ce15dad49192,
              mid_allocateThenInsertThenRehash_637d040f0f81bc84,
              mid_verifyLoadFactor_8493a5edcb36d651,
              mid_hashKey_a3904e10f5bb9437,
              mid_shiftConflictingKeys_8226bd0b0fc13dba,
              mid_equalElements_6e8b8e77587b3e05,
              mid_allocateBuffers_8226bd0b0fc13dba,
              mid_rehash_6ff10d42c938a921,
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

            explicit IntFloatHashMap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntFloatHashMap(const IntFloatHashMap& obj) : ::java::lang::Object(obj) {}

            JArray< jint > _get_keys() const;
            void _set_keys(const JArray< jint > &) const;
            JArray< jfloat > _get_values() const;
            void _set_values(const JArray< jfloat > &) const;

            IntFloatHashMap();
            IntFloatHashMap(jint);
            IntFloatHashMap(jint, jdouble);

            jfloat addTo(jint, jfloat) const;
            void clear() const;
            IntFloatHashMap clone() const;
            jboolean containsKey(jint) const;
            void ensureCapacity(jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            static IntFloatHashMap from(const JArray< jint > &, const JArray< jfloat > &);
            jfloat get(jint) const;
            jfloat getOrDefault(jint, jfloat) const;
            jint hashCode() const;
            jboolean indexExists(jint) const;
            jfloat indexGet(jint) const;
            void indexInsert(jint, jint, jfloat) const;
            jint indexOf(jint) const;
            jfloat indexRemove(jint) const;
            jfloat indexReplace(jint, jfloat) const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            ::org::apache::lucene::internal::hppc::IntFloatHashMap$KeysContainer keys() const;
            jfloat put(jint, jfloat) const;
            jint putAll(const ::java::lang::Iterable &) const;
            jboolean putIfAbsent(jint, jfloat) const;
            jfloat putOrAdd(jint, jfloat, jfloat) const;
            jlong ramBytesUsed() const;
            void release() const;
            jfloat remove(jint) const;
            jint size() const;
            ::java::lang::String toString() const;
            ::org::apache::lucene::internal::hppc::IntFloatHashMap$ValuesContainer values() const;
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
          extern PyType_Def PY_TYPE_DEF(IntFloatHashMap);
          extern PyTypeObject *PY_TYPE(IntFloatHashMap);

          class t_IntFloatHashMap {
          public:
            PyObject_HEAD
            IntFloatHashMap object;
            static PyObject *wrap_Object(const IntFloatHashMap&);
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
