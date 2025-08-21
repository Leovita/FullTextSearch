#ifndef org_apache_lucene_internal_hppc_LongFloatHashMap_H
#define org_apache_lucene_internal_hppc_LongFloatHashMap_H

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
      namespace internal {
        namespace hppc {
          class LongFloatHashMap$LongFloatCursor;
          class LongFloatHashMap$ValuesContainer;
          class LongFloatHashMap;
          class LongFloatHashMap$KeysContainer;
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
              mid_init$_3720c61b0679eb3e,
              mid_init$_540b2b23d51b1efd,
              mid_init$_bfec175f942874e6,
              mid_addTo_8d5060d6f2d902b0,
              mid_clear_3720c61b0679eb3e,
              mid_clone_08181d0a4dc948b3,
              mid_containsKey_d8a0ab12857291e0,
              mid_ensureCapacity_540b2b23d51b1efd,
              mid_equals_570b5248a6da3ef6,
              mid_from_ff00123448f56a7a,
              mid_get_08f307991192acad,
              mid_getOrDefault_8d5060d6f2d902b0,
              mid_hashCode_20fbf7565993c3d7,
              mid_indexExists_ae22d3a856ad56f1,
              mid_indexGet_29cfa01aaad92564,
              mid_indexInsert_f62bcc4115dd8500,
              mid_indexOf_35c872f03f347c10,
              mid_indexRemove_29cfa01aaad92564,
              mid_indexReplace_38a8f22d32ce6b74,
              mid_isEmpty_947277eca0748c4e,
              mid_iterator_0db4c76ff7ee995b,
              mid_keys_8103d7d6eebbed07,
              mid_put_8d5060d6f2d902b0,
              mid_putAll_96d1463b11b9fbe9,
              mid_putIfAbsent_7b45a0a96eab8077,
              mid_putOrAdd_9f81a3bcbd11374a,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_release_3720c61b0679eb3e,
              mid_remove_08f307991192acad,
              mid_size_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              mid_values_9ab3db3fd55e4e7d,
              mid_verifyLoadFactor_8fff3d7dcb9fddc5,
              mid_hashKey_35c872f03f347c10,
              mid_allocateThenInsertThenRehash_f62bcc4115dd8500,
              mid_nextIterationSeed_20fbf7565993c3d7,
              mid_shiftConflictingKeys_540b2b23d51b1efd,
              mid_allocateBuffers_540b2b23d51b1efd,
              mid_equalElements_a060444d26fd71da,
              mid_rehash_a272fb4b5ea87559,
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
