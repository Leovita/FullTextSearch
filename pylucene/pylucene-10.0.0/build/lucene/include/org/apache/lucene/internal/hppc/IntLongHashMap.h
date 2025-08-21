#ifndef org_apache_lucene_internal_hppc_IntLongHashMap_H
#define org_apache_lucene_internal_hppc_IntLongHashMap_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {
          class IntLongHashMap;
          class IntLongHashMap$ValuesContainer;
          class IntLongHashMap$IntLongCursor;
          class IntLongHashMap$KeysContainer;
        }
      }
      namespace util {
        class Accountable;
      }
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {

          class IntLongHashMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_540b2b23d51b1efd,
              mid_init$_bfec175f942874e6,
              mid_addTo_cd2eca3bb00d4788,
              mid_clear_3720c61b0679eb3e,
              mid_clone_1f1dd17e4738d7fa,
              mid_containsKey_ae22d3a856ad56f1,
              mid_ensureCapacity_540b2b23d51b1efd,
              mid_equals_570b5248a6da3ef6,
              mid_from_89f70d4af7f66f30,
              mid_get_7b22650fccb5d574,
              mid_getOrDefault_cd2eca3bb00d4788,
              mid_hashCode_20fbf7565993c3d7,
              mid_indexExists_ae22d3a856ad56f1,
              mid_indexGet_7b22650fccb5d574,
              mid_indexInsert_d02046eceb4997f8,
              mid_indexOf_3c9bba330f083871,
              mid_indexRemove_7b22650fccb5d574,
              mid_indexReplace_cd2eca3bb00d4788,
              mid_isEmpty_947277eca0748c4e,
              mid_iterator_0db4c76ff7ee995b,
              mid_keys_0648bb2be6448601,
              mid_put_cd2eca3bb00d4788,
              mid_putAll_96d1463b11b9fbe9,
              mid_putIfAbsent_8982a8e9ef07aa41,
              mid_putOrAdd_04ac99d289db3615,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_release_3720c61b0679eb3e,
              mid_remove_7b22650fccb5d574,
              mid_size_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              mid_values_70d770b19b9255dd,
              mid_verifyLoadFactor_8fff3d7dcb9fddc5,
              mid_hashKey_3c9bba330f083871,
              mid_allocateThenInsertThenRehash_d02046eceb4997f8,
              mid_nextIterationSeed_20fbf7565993c3d7,
              mid_shiftConflictingKeys_540b2b23d51b1efd,
              mid_allocateBuffers_540b2b23d51b1efd,
              mid_equalElements_ed5ad3783f5f64ee,
              mid_rehash_77a12dabb847998d,
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
