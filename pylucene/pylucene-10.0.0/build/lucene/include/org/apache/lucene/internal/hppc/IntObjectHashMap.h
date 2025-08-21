#ifndef org_apache_lucene_internal_hppc_IntObjectHashMap_H
#define org_apache_lucene_internal_hppc_IntObjectHashMap_H

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
          class IntObjectHashMap$IntObjectCursor;
          class IntObjectHashMap$KeysContainer;
          class IntObjectHashMap;
          class IntObjectHashMap$ValuesContainer;
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

          class IntObjectHashMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_540b2b23d51b1efd,
              mid_init$_bfec175f942874e6,
              mid_clear_3720c61b0679eb3e,
              mid_clone_49f1ef04c5e7d846,
              mid_containsKey_ae22d3a856ad56f1,
              mid_ensureCapacity_540b2b23d51b1efd,
              mid_equals_570b5248a6da3ef6,
              mid_from_5462850f2ea6c377,
              mid_get_eb7eace67c4a21fd,
              mid_getOrDefault_b84ce9d3b2137b5e,
              mid_hashCode_20fbf7565993c3d7,
              mid_indexExists_ae22d3a856ad56f1,
              mid_indexGet_eb7eace67c4a21fd,
              mid_indexInsert_0ed0b39bd6dbadc2,
              mid_indexOf_3c9bba330f083871,
              mid_indexRemove_eb7eace67c4a21fd,
              mid_indexReplace_b84ce9d3b2137b5e,
              mid_isEmpty_947277eca0748c4e,
              mid_iterator_0db4c76ff7ee995b,
              mid_keys_50aeb910fb3b0fc7,
              mid_put_b84ce9d3b2137b5e,
              mid_putAll_96d1463b11b9fbe9,
              mid_putIfAbsent_438b00f73739706e,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_release_3720c61b0679eb3e,
              mid_remove_eb7eace67c4a21fd,
              mid_size_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              mid_values_9f87bd7ac493e1cb,
              mid_verifyLoadFactor_8fff3d7dcb9fddc5,
              mid_hashKey_3c9bba330f083871,
              mid_allocateThenInsertThenRehash_0ed0b39bd6dbadc2,
              mid_nextIterationSeed_20fbf7565993c3d7,
              mid_shiftConflictingKeys_540b2b23d51b1efd,
              mid_allocateBuffers_540b2b23d51b1efd,
              mid_equalElements_31ce863bc3e6dbb4,
              mid_rehash_003733dbfa0cfc0c,
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

            explicit IntObjectHashMap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntObjectHashMap(const IntObjectHashMap& obj) : ::java::lang::Object(obj) {}

            JArray< jint > _get_keys() const;
            void _set_keys(const JArray< jint > &) const;
            JArray< ::java::lang::Object > _get_values() const;
            void _set_values(const JArray< ::java::lang::Object > &) const;

            IntObjectHashMap();
            IntObjectHashMap(jint);
            IntObjectHashMap(jint, jdouble);

            void clear() const;
            IntObjectHashMap clone() const;
            jboolean containsKey(jint) const;
            void ensureCapacity(jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            static IntObjectHashMap from(const JArray< jint > &, const JArray< ::java::lang::Object > &);
            ::java::lang::Object get(jint) const;
            ::java::lang::Object getOrDefault(jint, const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean indexExists(jint) const;
            ::java::lang::Object indexGet(jint) const;
            void indexInsert(jint, jint, const ::java::lang::Object &) const;
            jint indexOf(jint) const;
            ::java::lang::Object indexRemove(jint) const;
            ::java::lang::Object indexReplace(jint, const ::java::lang::Object &) const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            ::org::apache::lucene::internal::hppc::IntObjectHashMap$KeysContainer keys() const;
            ::java::lang::Object put(jint, const ::java::lang::Object &) const;
            jint putAll(const ::java::lang::Iterable &) const;
            jboolean putIfAbsent(jint, const ::java::lang::Object &) const;
            jlong ramBytesUsed() const;
            void release() const;
            ::java::lang::Object remove(jint) const;
            jint size() const;
            ::java::lang::String toString() const;
            ::org::apache::lucene::internal::hppc::IntObjectHashMap$ValuesContainer values() const;
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
          extern PyType_Def PY_TYPE_DEF(IntObjectHashMap);
          extern PyTypeObject *PY_TYPE(IntObjectHashMap);

          class t_IntObjectHashMap {
          public:
            PyObject_HEAD
            IntObjectHashMap object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IntObjectHashMap *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntObjectHashMap&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntObjectHashMap&, PyTypeObject *);
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
