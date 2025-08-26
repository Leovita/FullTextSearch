#ifndef org_apache_lucene_internal_hppc_IntDoubleHashMap_H
#define org_apache_lucene_internal_hppc_IntDoubleHashMap_H

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
          class IntDoubleHashMap;
          class IntDoubleHashMap$ValuesContainer;
          class IntDoubleHashMap$IntDoubleCursor;
          class IntDoubleHashMap$KeysContainer;
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

          class IntDoubleHashMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_8226bd0b0fc13dba,
              mid_init$_21c15812094aeb13,
              mid_addTo_8e4d1dd5b77ec19d,
              mid_clear_e7bdbe105ce1bafb,
              mid_clone_3fbedd55d54e1c47,
              mid_containsKey_a8281eb3b9d9672d,
              mid_ensureCapacity_8226bd0b0fc13dba,
              mid_equals_00d17418847797d4,
              mid_from_12d263046edfc940,
              mid_get_3bb466f769ef1c7f,
              mid_getOrDefault_8e4d1dd5b77ec19d,
              mid_hashCode_bd89ce15dad49192,
              mid_indexExists_a8281eb3b9d9672d,
              mid_indexGet_3bb466f769ef1c7f,
              mid_indexInsert_6392fb1a990321b4,
              mid_indexOf_a3904e10f5bb9437,
              mid_indexRemove_3bb466f769ef1c7f,
              mid_indexReplace_8e4d1dd5b77ec19d,
              mid_isEmpty_9aa4f33e82ea333f,
              mid_iterator_c7985fafdcf40e83,
              mid_keys_bcd50c5ae89a52e5,
              mid_put_8e4d1dd5b77ec19d,
              mid_putAll_29d327a2ef457411,
              mid_putIfAbsent_ffbb1540ebc344cc,
              mid_putOrAdd_ec080c5f7f6c9344,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_release_e7bdbe105ce1bafb,
              mid_remove_3bb466f769ef1c7f,
              mid_size_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              mid_values_05867ac9c816973f,
              mid_nextIterationSeed_bd89ce15dad49192,
              mid_allocateThenInsertThenRehash_6392fb1a990321b4,
              mid_verifyLoadFactor_8493a5edcb36d651,
              mid_hashKey_a3904e10f5bb9437,
              mid_shiftConflictingKeys_8226bd0b0fc13dba,
              mid_equalElements_1c1c533240cfc49f,
              mid_allocateBuffers_8226bd0b0fc13dba,
              mid_rehash_9c4f2f0c9fbaa8d3,
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

            explicit IntDoubleHashMap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntDoubleHashMap(const IntDoubleHashMap& obj) : ::java::lang::Object(obj) {}

            JArray< jint > _get_keys() const;
            void _set_keys(const JArray< jint > &) const;
            JArray< jdouble > _get_values() const;
            void _set_values(const JArray< jdouble > &) const;

            IntDoubleHashMap();
            IntDoubleHashMap(jint);
            IntDoubleHashMap(jint, jdouble);

            jdouble addTo(jint, jdouble) const;
            void clear() const;
            IntDoubleHashMap clone() const;
            jboolean containsKey(jint) const;
            void ensureCapacity(jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            static IntDoubleHashMap from(const JArray< jint > &, const JArray< jdouble > &);
            jdouble get(jint) const;
            jdouble getOrDefault(jint, jdouble) const;
            jint hashCode() const;
            jboolean indexExists(jint) const;
            jdouble indexGet(jint) const;
            void indexInsert(jint, jint, jdouble) const;
            jint indexOf(jint) const;
            jdouble indexRemove(jint) const;
            jdouble indexReplace(jint, jdouble) const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            ::org::apache::lucene::internal::hppc::IntDoubleHashMap$KeysContainer keys() const;
            jdouble put(jint, jdouble) const;
            jint putAll(const ::java::lang::Iterable &) const;
            jboolean putIfAbsent(jint, jdouble) const;
            jdouble putOrAdd(jint, jdouble, jdouble) const;
            jlong ramBytesUsed() const;
            void release() const;
            jdouble remove(jint) const;
            jint size() const;
            ::java::lang::String toString() const;
            ::org::apache::lucene::internal::hppc::IntDoubleHashMap$ValuesContainer values() const;
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
          extern PyType_Def PY_TYPE_DEF(IntDoubleHashMap);
          extern PyTypeObject *PY_TYPE(IntDoubleHashMap);

          class t_IntDoubleHashMap {
          public:
            PyObject_HEAD
            IntDoubleHashMap object;
            static PyObject *wrap_Object(const IntDoubleHashMap&);
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
