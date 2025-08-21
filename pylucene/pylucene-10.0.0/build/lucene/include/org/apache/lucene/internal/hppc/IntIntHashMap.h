#ifndef org_apache_lucene_internal_hppc_IntIntHashMap_H
#define org_apache_lucene_internal_hppc_IntIntHashMap_H

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
          class IntIntHashMap$IntIntCursor;
          class IntIntHashMap$IntContainer;
          class IntIntHashMap;
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
              mid_init$_3720c61b0679eb3e,
              mid_init$_540b2b23d51b1efd,
              mid_init$_bfec175f942874e6,
              mid_addTo_7f733b5d08bb5ec4,
              mid_clear_3720c61b0679eb3e,
              mid_clone_cc3f169af42da796,
              mid_containsKey_ae22d3a856ad56f1,
              mid_ensureCapacity_540b2b23d51b1efd,
              mid_equals_570b5248a6da3ef6,
              mid_from_bb092a1d0e3d65d9,
              mid_get_3c9bba330f083871,
              mid_getOrDefault_7f733b5d08bb5ec4,
              mid_hashCode_20fbf7565993c3d7,
              mid_indexExists_ae22d3a856ad56f1,
              mid_indexGet_3c9bba330f083871,
              mid_indexInsert_20022b6d5e83c732,
              mid_indexOf_3c9bba330f083871,
              mid_indexRemove_3c9bba330f083871,
              mid_indexReplace_7f733b5d08bb5ec4,
              mid_isEmpty_947277eca0748c4e,
              mid_iterator_0db4c76ff7ee995b,
              mid_keys_f67ec8f4616007b8,
              mid_put_7f733b5d08bb5ec4,
              mid_putAll_96d1463b11b9fbe9,
              mid_putIfAbsent_3f91d6e63b0427e9,
              mid_putOrAdd_527fe3c890b0f1b1,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_release_3720c61b0679eb3e,
              mid_remove_3c9bba330f083871,
              mid_size_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              mid_values_e16e387e6758dddb,
              mid_verifyLoadFactor_8fff3d7dcb9fddc5,
              mid_hashKey_3c9bba330f083871,
              mid_allocateThenInsertThenRehash_20022b6d5e83c732,
              mid_nextIterationSeed_20fbf7565993c3d7,
              mid_shiftConflictingKeys_540b2b23d51b1efd,
              mid_allocateBuffers_540b2b23d51b1efd,
              mid_equalElements_fe0f28ac8bf858d0,
              mid_rehash_09cea1ab2441144f,
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
