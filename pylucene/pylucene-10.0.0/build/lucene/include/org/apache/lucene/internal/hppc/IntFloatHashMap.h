#ifndef org_apache_lucene_internal_hppc_IntFloatHashMap_H
#define org_apache_lucene_internal_hppc_IntFloatHashMap_H

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
          class IntFloatHashMap$ValuesContainer;
          class IntFloatHashMap$IntFloatCursor;
          class IntFloatHashMap$KeysContainer;
          class IntFloatHashMap;
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

          class IntFloatHashMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_540b2b23d51b1efd,
              mid_init$_bfec175f942874e6,
              mid_addTo_38a8f22d32ce6b74,
              mid_clear_3720c61b0679eb3e,
              mid_clone_212f7154726e2a12,
              mid_containsKey_ae22d3a856ad56f1,
              mid_ensureCapacity_540b2b23d51b1efd,
              mid_equals_570b5248a6da3ef6,
              mid_from_964ef805906a8906,
              mid_get_29cfa01aaad92564,
              mid_getOrDefault_38a8f22d32ce6b74,
              mid_hashCode_20fbf7565993c3d7,
              mid_indexExists_ae22d3a856ad56f1,
              mid_indexGet_29cfa01aaad92564,
              mid_indexInsert_c891bbfbb935732a,
              mid_indexOf_3c9bba330f083871,
              mid_indexRemove_29cfa01aaad92564,
              mid_indexReplace_38a8f22d32ce6b74,
              mid_isEmpty_947277eca0748c4e,
              mid_iterator_0db4c76ff7ee995b,
              mid_keys_af3279cdd9b3158e,
              mid_put_38a8f22d32ce6b74,
              mid_putAll_96d1463b11b9fbe9,
              mid_putIfAbsent_c1497fee57980602,
              mid_putOrAdd_602f3a95a5ee3d97,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_release_3720c61b0679eb3e,
              mid_remove_29cfa01aaad92564,
              mid_size_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              mid_values_8f89e25580411c15,
              mid_verifyLoadFactor_8fff3d7dcb9fddc5,
              mid_hashKey_3c9bba330f083871,
              mid_allocateThenInsertThenRehash_c891bbfbb935732a,
              mid_nextIterationSeed_20fbf7565993c3d7,
              mid_shiftConflictingKeys_540b2b23d51b1efd,
              mid_allocateBuffers_540b2b23d51b1efd,
              mid_equalElements_324233422c9daccd,
              mid_rehash_8b00fb56154e5f28,
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
