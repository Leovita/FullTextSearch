#ifndef org_apache_lucene_internal_hppc_IntDoubleHashMap_H
#define org_apache_lucene_internal_hppc_IntDoubleHashMap_H

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
          class IntDoubleHashMap$KeysContainer;
          class IntDoubleHashMap$IntDoubleCursor;
          class IntDoubleHashMap$ValuesContainer;
          class IntDoubleHashMap;
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

          class IntDoubleHashMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_540b2b23d51b1efd,
              mid_init$_bfec175f942874e6,
              mid_addTo_35a804e386c6eca5,
              mid_clear_3720c61b0679eb3e,
              mid_clone_f5948f6665291731,
              mid_containsKey_ae22d3a856ad56f1,
              mid_ensureCapacity_540b2b23d51b1efd,
              mid_equals_570b5248a6da3ef6,
              mid_from_2304f6ae5e101739,
              mid_get_788f636887bfcb79,
              mid_getOrDefault_35a804e386c6eca5,
              mid_hashCode_20fbf7565993c3d7,
              mid_indexExists_ae22d3a856ad56f1,
              mid_indexGet_788f636887bfcb79,
              mid_indexInsert_09bdd7b87e61c249,
              mid_indexOf_3c9bba330f083871,
              mid_indexRemove_788f636887bfcb79,
              mid_indexReplace_35a804e386c6eca5,
              mid_isEmpty_947277eca0748c4e,
              mid_iterator_0db4c76ff7ee995b,
              mid_keys_53ec3130608a422b,
              mid_put_35a804e386c6eca5,
              mid_putAll_96d1463b11b9fbe9,
              mid_putIfAbsent_3e950532d8537db2,
              mid_putOrAdd_00858c6e1addbe19,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_release_3720c61b0679eb3e,
              mid_remove_788f636887bfcb79,
              mid_size_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              mid_values_3073a8b1812cd8cc,
              mid_verifyLoadFactor_8fff3d7dcb9fddc5,
              mid_hashKey_3c9bba330f083871,
              mid_allocateThenInsertThenRehash_09bdd7b87e61c249,
              mid_nextIterationSeed_20fbf7565993c3d7,
              mid_shiftConflictingKeys_540b2b23d51b1efd,
              mid_allocateBuffers_540b2b23d51b1efd,
              mid_equalElements_70e90ea1d8f5ad63,
              mid_rehash_1c84e06f52cd97a3,
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
