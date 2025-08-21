#ifndef org_apache_lucene_internal_hppc_LongIntHashMap_H
#define org_apache_lucene_internal_hppc_LongIntHashMap_H

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
          class LongIntHashMap$KeysContainer;
          class LongIntHashMap$ValuesContainer;
          class LongIntHashMap$LongIntCursor;
          class LongIntHashMap;
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

          class LongIntHashMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_540b2b23d51b1efd,
              mid_init$_bfec175f942874e6,
              mid_addTo_b1cd3475cb297685,
              mid_clear_3720c61b0679eb3e,
              mid_clone_fb114f16335405dc,
              mid_containsKey_d8a0ab12857291e0,
              mid_ensureCapacity_540b2b23d51b1efd,
              mid_equals_570b5248a6da3ef6,
              mid_from_0930625445b9639c,
              mid_get_35c872f03f347c10,
              mid_getOrDefault_b1cd3475cb297685,
              mid_hashCode_20fbf7565993c3d7,
              mid_indexExists_ae22d3a856ad56f1,
              mid_indexGet_3c9bba330f083871,
              mid_indexInsert_9dad91a8bfd86810,
              mid_indexOf_35c872f03f347c10,
              mid_indexRemove_3c9bba330f083871,
              mid_indexReplace_7f733b5d08bb5ec4,
              mid_isEmpty_947277eca0748c4e,
              mid_iterator_0db4c76ff7ee995b,
              mid_keys_708e3fe4977a01a9,
              mid_put_b1cd3475cb297685,
              mid_putAll_96d1463b11b9fbe9,
              mid_putIfAbsent_42bb0fb87803ccf8,
              mid_putOrAdd_47871a4cb6030193,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_release_3720c61b0679eb3e,
              mid_remove_35c872f03f347c10,
              mid_size_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              mid_values_9e289bdec4cbc41c,
              mid_verifyLoadFactor_8fff3d7dcb9fddc5,
              mid_hashKey_35c872f03f347c10,
              mid_allocateThenInsertThenRehash_9dad91a8bfd86810,
              mid_nextIterationSeed_20fbf7565993c3d7,
              mid_shiftConflictingKeys_540b2b23d51b1efd,
              mid_allocateBuffers_540b2b23d51b1efd,
              mid_equalElements_ff1e76693cef8174,
              mid_rehash_6cace44417e80015,
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

            explicit LongIntHashMap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongIntHashMap(const LongIntHashMap& obj) : ::java::lang::Object(obj) {}

            JArray< jlong > _get_keys() const;
            void _set_keys(const JArray< jlong > &) const;
            JArray< jint > _get_values() const;
            void _set_values(const JArray< jint > &) const;

            LongIntHashMap();
            LongIntHashMap(jint);
            LongIntHashMap(jint, jdouble);

            jint addTo(jlong, jint) const;
            void clear() const;
            LongIntHashMap clone() const;
            jboolean containsKey(jlong) const;
            void ensureCapacity(jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            static LongIntHashMap from(const JArray< jlong > &, const JArray< jint > &);
            jint get(jlong) const;
            jint getOrDefault(jlong, jint) const;
            jint hashCode() const;
            jboolean indexExists(jint) const;
            jint indexGet(jint) const;
            void indexInsert(jint, jlong, jint) const;
            jint indexOf(jlong) const;
            jint indexRemove(jint) const;
            jint indexReplace(jint, jint) const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            ::org::apache::lucene::internal::hppc::LongIntHashMap$KeysContainer keys() const;
            jint put(jlong, jint) const;
            jint putAll(const ::java::lang::Iterable &) const;
            jboolean putIfAbsent(jlong, jint) const;
            jint putOrAdd(jlong, jint, jint) const;
            jlong ramBytesUsed() const;
            void release() const;
            jint remove(jlong) const;
            jint size() const;
            ::java::lang::String toString() const;
            ::org::apache::lucene::internal::hppc::LongIntHashMap$ValuesContainer values() const;
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
          extern PyType_Def PY_TYPE_DEF(LongIntHashMap);
          extern PyTypeObject *PY_TYPE(LongIntHashMap);

          class t_LongIntHashMap {
          public:
            PyObject_HEAD
            LongIntHashMap object;
            static PyObject *wrap_Object(const LongIntHashMap&);
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
