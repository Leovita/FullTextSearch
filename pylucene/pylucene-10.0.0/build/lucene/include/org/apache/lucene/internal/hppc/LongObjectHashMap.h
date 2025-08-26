#ifndef org_apache_lucene_internal_hppc_LongObjectHashMap_H
#define org_apache_lucene_internal_hppc_LongObjectHashMap_H

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
          class LongObjectHashMap$KeysContainer;
          class LongObjectHashMap$LongObjectCursor;
          class LongObjectHashMap$ValuesContainer;
          class LongObjectHashMap;
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

          class LongObjectHashMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_8226bd0b0fc13dba,
              mid_init$_21c15812094aeb13,
              mid_clear_e7bdbe105ce1bafb,
              mid_clone_2f48b663670123c8,
              mid_containsKey_eae0b285d107fcb0,
              mid_ensureCapacity_8226bd0b0fc13dba,
              mid_equals_00d17418847797d4,
              mid_from_01f339ee58f1e486,
              mid_get_f2d6f8a161abad90,
              mid_getOrDefault_011d51e827f49259,
              mid_hashCode_bd89ce15dad49192,
              mid_indexExists_a8281eb3b9d9672d,
              mid_indexGet_2a2d7d7b9153274c,
              mid_indexInsert_a3cf342322bd1752,
              mid_indexOf_7af44747c1921bd4,
              mid_indexRemove_2a2d7d7b9153274c,
              mid_indexReplace_c8f65d2ef44d5c7c,
              mid_isEmpty_9aa4f33e82ea333f,
              mid_iterator_c7985fafdcf40e83,
              mid_keys_c0ff091bdf002751,
              mid_put_011d51e827f49259,
              mid_putAll_29d327a2ef457411,
              mid_putIfAbsent_7985524f09e8b6cd,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_release_e7bdbe105ce1bafb,
              mid_remove_f2d6f8a161abad90,
              mid_size_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              mid_values_444141ed5ab2f1e1,
              mid_nextIterationSeed_bd89ce15dad49192,
              mid_allocateThenInsertThenRehash_a3cf342322bd1752,
              mid_verifyLoadFactor_8493a5edcb36d651,
              mid_hashKey_7af44747c1921bd4,
              mid_shiftConflictingKeys_8226bd0b0fc13dba,
              mid_equalElements_fe295f9c9347e383,
              mid_allocateBuffers_8226bd0b0fc13dba,
              mid_rehash_3f6600b285465c99,
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

            explicit LongObjectHashMap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongObjectHashMap(const LongObjectHashMap& obj) : ::java::lang::Object(obj) {}

            JArray< jlong > _get_keys() const;
            void _set_keys(const JArray< jlong > &) const;
            JArray< ::java::lang::Object > _get_values() const;
            void _set_values(const JArray< ::java::lang::Object > &) const;

            LongObjectHashMap();
            LongObjectHashMap(jint);
            LongObjectHashMap(jint, jdouble);

            void clear() const;
            LongObjectHashMap clone() const;
            jboolean containsKey(jlong) const;
            void ensureCapacity(jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            static LongObjectHashMap from(const JArray< jlong > &, const JArray< ::java::lang::Object > &);
            ::java::lang::Object get(jlong) const;
            ::java::lang::Object getOrDefault(jlong, const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean indexExists(jint) const;
            ::java::lang::Object indexGet(jint) const;
            void indexInsert(jint, jlong, const ::java::lang::Object &) const;
            jint indexOf(jlong) const;
            ::java::lang::Object indexRemove(jint) const;
            ::java::lang::Object indexReplace(jint, const ::java::lang::Object &) const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            ::org::apache::lucene::internal::hppc::LongObjectHashMap$KeysContainer keys() const;
            ::java::lang::Object put(jlong, const ::java::lang::Object &) const;
            jint putAll(const ::java::lang::Iterable &) const;
            jboolean putIfAbsent(jlong, const ::java::lang::Object &) const;
            jlong ramBytesUsed() const;
            void release() const;
            ::java::lang::Object remove(jlong) const;
            jint size() const;
            ::java::lang::String toString() const;
            ::org::apache::lucene::internal::hppc::LongObjectHashMap$ValuesContainer values() const;
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
          extern PyType_Def PY_TYPE_DEF(LongObjectHashMap);
          extern PyTypeObject *PY_TYPE(LongObjectHashMap);

          class t_LongObjectHashMap {
          public:
            PyObject_HEAD
            LongObjectHashMap object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_LongObjectHashMap *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const LongObjectHashMap&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const LongObjectHashMap&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
