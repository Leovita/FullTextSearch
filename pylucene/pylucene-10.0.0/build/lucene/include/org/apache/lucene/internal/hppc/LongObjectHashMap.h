#ifndef org_apache_lucene_internal_hppc_LongObjectHashMap_H
#define org_apache_lucene_internal_hppc_LongObjectHashMap_H

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
          class LongObjectHashMap$KeysContainer;
          class LongObjectHashMap;
          class LongObjectHashMap$ValuesContainer;
          class LongObjectHashMap$LongObjectCursor;
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

          class LongObjectHashMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_540b2b23d51b1efd,
              mid_init$_bfec175f942874e6,
              mid_clear_3720c61b0679eb3e,
              mid_clone_0b188dab72a83f1f,
              mid_containsKey_d8a0ab12857291e0,
              mid_ensureCapacity_540b2b23d51b1efd,
              mid_equals_570b5248a6da3ef6,
              mid_from_1f2480af3a413f37,
              mid_get_fbeea4c1018ff27e,
              mid_getOrDefault_138eb8aef00f365c,
              mid_hashCode_20fbf7565993c3d7,
              mid_indexExists_ae22d3a856ad56f1,
              mid_indexGet_eb7eace67c4a21fd,
              mid_indexInsert_a6b84b806d1effe0,
              mid_indexOf_35c872f03f347c10,
              mid_indexRemove_eb7eace67c4a21fd,
              mid_indexReplace_b84ce9d3b2137b5e,
              mid_isEmpty_947277eca0748c4e,
              mid_iterator_0db4c76ff7ee995b,
              mid_keys_c63f7b8411910b5f,
              mid_put_138eb8aef00f365c,
              mid_putAll_96d1463b11b9fbe9,
              mid_putIfAbsent_010519bd19dff278,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_release_3720c61b0679eb3e,
              mid_remove_fbeea4c1018ff27e,
              mid_size_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              mid_values_d786c5b0307f6109,
              mid_verifyLoadFactor_8fff3d7dcb9fddc5,
              mid_hashKey_35c872f03f347c10,
              mid_allocateThenInsertThenRehash_a6b84b806d1effe0,
              mid_nextIterationSeed_20fbf7565993c3d7,
              mid_shiftConflictingKeys_540b2b23d51b1efd,
              mid_allocateBuffers_540b2b23d51b1efd,
              mid_equalElements_698d0ef46c6b5dff,
              mid_rehash_e0d1572e59b3e5e5,
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
