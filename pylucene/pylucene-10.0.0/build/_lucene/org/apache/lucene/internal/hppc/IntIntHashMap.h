#ifndef org_apache_lucene_internal_hppc_IntIntHashMap_H
#define org_apache_lucene_internal_hppc_IntIntHashMap_H

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
          class IntIntHashMap$IntIntCursor;
          class IntIntHashMap;
          class IntIntHashMap$IntContainer;
          class IntIntHashMap$KeysContainer;
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

          class IntIntHashMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_8226bd0b0fc13dba,
              mid_init$_21c15812094aeb13,
              mid_addTo_7f27cf81a85a97e9,
              mid_clear_e7bdbe105ce1bafb,
              mid_clone_c1b88f0bb05aee67,
              mid_containsKey_a8281eb3b9d9672d,
              mid_ensureCapacity_8226bd0b0fc13dba,
              mid_equals_00d17418847797d4,
              mid_from_c8f4ed3caace6d64,
              mid_get_a3904e10f5bb9437,
              mid_getOrDefault_7f27cf81a85a97e9,
              mid_hashCode_bd89ce15dad49192,
              mid_indexExists_a8281eb3b9d9672d,
              mid_indexGet_a3904e10f5bb9437,
              mid_indexInsert_eee637a6cebc299b,
              mid_indexOf_a3904e10f5bb9437,
              mid_indexRemove_a3904e10f5bb9437,
              mid_indexReplace_7f27cf81a85a97e9,
              mid_isEmpty_9aa4f33e82ea333f,
              mid_iterator_c7985fafdcf40e83,
              mid_keys_f0ea17eef1b2bb82,
              mid_put_7f27cf81a85a97e9,
              mid_putAll_29d327a2ef457411,
              mid_putIfAbsent_5dd9e64338fe1611,
              mid_putOrAdd_1a01472680f9fc97,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_release_e7bdbe105ce1bafb,
              mid_remove_a3904e10f5bb9437,
              mid_size_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              mid_values_170ed55f1099649c,
              mid_nextIterationSeed_bd89ce15dad49192,
              mid_allocateThenInsertThenRehash_eee637a6cebc299b,
              mid_verifyLoadFactor_8493a5edcb36d651,
              mid_hashKey_a3904e10f5bb9437,
              mid_shiftConflictingKeys_8226bd0b0fc13dba,
              mid_equalElements_8f9fabe9a6fdcc80,
              mid_allocateBuffers_8226bd0b0fc13dba,
              mid_rehash_788e8c3eb977c890,
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

            explicit IntIntHashMap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntIntHashMap(const IntIntHashMap& obj) : ::java::lang::Object(obj) {}

            JArray< jint > _get_keys() const;
            void _set_keys(const JArray< jint > &) const;
            JArray< jint > _get_values() const;
            void _set_values(const JArray< jint > &) const;

            IntIntHashMap();
            IntIntHashMap(jint);
            IntIntHashMap(jint, jdouble);

            jint addTo(jint, jint) const;
            void clear() const;
            IntIntHashMap clone() const;
            jboolean containsKey(jint) const;
            void ensureCapacity(jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            static IntIntHashMap from(const JArray< jint > &, const JArray< jint > &);
            jint get(jint) const;
            jint getOrDefault(jint, jint) const;
            jint hashCode() const;
            jboolean indexExists(jint) const;
            jint indexGet(jint) const;
            void indexInsert(jint, jint, jint) const;
            jint indexOf(jint) const;
            jint indexRemove(jint) const;
            jint indexReplace(jint, jint) const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            ::org::apache::lucene::internal::hppc::IntIntHashMap$KeysContainer keys() const;
            jint put(jint, jint) const;
            jint putAll(const ::java::lang::Iterable &) const;
            jboolean putIfAbsent(jint, jint) const;
            jint putOrAdd(jint, jint, jint) const;
            jlong ramBytesUsed() const;
            void release() const;
            jint remove(jint) const;
            jint size() const;
            ::java::lang::String toString() const;
            ::org::apache::lucene::internal::hppc::IntIntHashMap$IntContainer values() const;
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
          extern PyType_Def PY_TYPE_DEF(IntIntHashMap);
          extern PyTypeObject *PY_TYPE(IntIntHashMap);

          class t_IntIntHashMap {
          public:
            PyObject_HEAD
            IntIntHashMap object;
            static PyObject *wrap_Object(const IntIntHashMap&);
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
