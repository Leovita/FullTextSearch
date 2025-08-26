#ifndef org_apache_lucene_internal_hppc_CharObjectHashMap_H
#define org_apache_lucene_internal_hppc_CharObjectHashMap_H

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
          class CharObjectHashMap$CharObjectCursor;
          class CharObjectHashMap$KeysContainer;
          class CharObjectHashMap;
          class CharObjectHashMap$ValuesContainer;
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

          class CharObjectHashMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_8226bd0b0fc13dba,
              mid_init$_21c15812094aeb13,
              mid_clear_e7bdbe105ce1bafb,
              mid_clone_9bcb2750e592a074,
              mid_containsKey_96a1e5bdb33dde4e,
              mid_ensureCapacity_8226bd0b0fc13dba,
              mid_equals_00d17418847797d4,
              mid_from_5533a42038ac7c49,
              mid_get_988c66d9264a501b,
              mid_getOrDefault_ccf31f7dd2f3dcd3,
              mid_hashCode_bd89ce15dad49192,
              mid_indexExists_a8281eb3b9d9672d,
              mid_indexGet_2a2d7d7b9153274c,
              mid_indexInsert_bbb8c9d69aa4f475,
              mid_indexOf_71dc1db9b5187263,
              mid_indexRemove_2a2d7d7b9153274c,
              mid_indexReplace_c8f65d2ef44d5c7c,
              mid_isEmpty_9aa4f33e82ea333f,
              mid_iterator_c7985fafdcf40e83,
              mid_keys_c2f8de802e6c7550,
              mid_put_ccf31f7dd2f3dcd3,
              mid_putAll_29d327a2ef457411,
              mid_putIfAbsent_9f402b59ee95cfdc,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_release_e7bdbe105ce1bafb,
              mid_remove_988c66d9264a501b,
              mid_size_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              mid_values_d90345460dfe7984,
              mid_nextIterationSeed_bd89ce15dad49192,
              mid_allocateThenInsertThenRehash_bbb8c9d69aa4f475,
              mid_verifyLoadFactor_8493a5edcb36d651,
              mid_hashKey_71dc1db9b5187263,
              mid_shiftConflictingKeys_8226bd0b0fc13dba,
              mid_equalElements_fd4fe692483cb5f5,
              mid_allocateBuffers_8226bd0b0fc13dba,
              mid_rehash_e815677867427e8c,
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

            explicit CharObjectHashMap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharObjectHashMap(const CharObjectHashMap& obj) : ::java::lang::Object(obj) {}

            JArray< jchar > _get_keys() const;
            void _set_keys(const JArray< jchar > &) const;
            JArray< ::java::lang::Object > _get_values() const;
            void _set_values(const JArray< ::java::lang::Object > &) const;

            CharObjectHashMap();
            CharObjectHashMap(jint);
            CharObjectHashMap(jint, jdouble);

            void clear() const;
            CharObjectHashMap clone() const;
            jboolean containsKey(jchar) const;
            void ensureCapacity(jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            static CharObjectHashMap from(const JArray< jchar > &, const JArray< ::java::lang::Object > &);
            ::java::lang::Object get(jchar) const;
            ::java::lang::Object getOrDefault(jchar, const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean indexExists(jint) const;
            ::java::lang::Object indexGet(jint) const;
            void indexInsert(jint, jchar, const ::java::lang::Object &) const;
            jint indexOf(jchar) const;
            ::java::lang::Object indexRemove(jint) const;
            ::java::lang::Object indexReplace(jint, const ::java::lang::Object &) const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            ::org::apache::lucene::internal::hppc::CharObjectHashMap$KeysContainer keys() const;
            ::java::lang::Object put(jchar, const ::java::lang::Object &) const;
            jint putAll(const ::java::lang::Iterable &) const;
            jboolean putIfAbsent(jchar, const ::java::lang::Object &) const;
            jlong ramBytesUsed() const;
            void release() const;
            ::java::lang::Object remove(jchar) const;
            jint size() const;
            ::java::lang::String toString() const;
            ::org::apache::lucene::internal::hppc::CharObjectHashMap$ValuesContainer values() const;
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
          extern PyType_Def PY_TYPE_DEF(CharObjectHashMap);
          extern PyTypeObject *PY_TYPE(CharObjectHashMap);

          class t_CharObjectHashMap {
          public:
            PyObject_HEAD
            CharObjectHashMap object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_CharObjectHashMap *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const CharObjectHashMap&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const CharObjectHashMap&, PyTypeObject *);
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
