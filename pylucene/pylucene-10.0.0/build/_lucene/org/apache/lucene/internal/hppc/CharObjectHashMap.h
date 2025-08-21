#ifndef org_apache_lucene_internal_hppc_CharObjectHashMap_H
#define org_apache_lucene_internal_hppc_CharObjectHashMap_H

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
          class CharObjectHashMap$KeysContainer;
          class CharObjectHashMap$ValuesContainer;
          class CharObjectHashMap;
          class CharObjectHashMap$CharObjectCursor;
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

          class CharObjectHashMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_540b2b23d51b1efd,
              mid_init$_bfec175f942874e6,
              mid_clear_3720c61b0679eb3e,
              mid_clone_47748dab24f3b3cf,
              mid_containsKey_4e84a8c37896b7c5,
              mid_ensureCapacity_540b2b23d51b1efd,
              mid_equals_570b5248a6da3ef6,
              mid_from_eb132df095e33870,
              mid_get_88daa97650a18803,
              mid_getOrDefault_b662f6e88d32e8db,
              mid_hashCode_20fbf7565993c3d7,
              mid_indexExists_ae22d3a856ad56f1,
              mid_indexGet_eb7eace67c4a21fd,
              mid_indexInsert_164e57569ab55b95,
              mid_indexOf_99c33562a336f6e9,
              mid_indexRemove_eb7eace67c4a21fd,
              mid_indexReplace_b84ce9d3b2137b5e,
              mid_isEmpty_947277eca0748c4e,
              mid_iterator_0db4c76ff7ee995b,
              mid_keys_799c704cc3283c25,
              mid_put_b662f6e88d32e8db,
              mid_putAll_96d1463b11b9fbe9,
              mid_putIfAbsent_0c4931752dd1f794,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_release_3720c61b0679eb3e,
              mid_remove_88daa97650a18803,
              mid_size_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              mid_values_32e4b1377e6a485f,
              mid_verifyLoadFactor_8fff3d7dcb9fddc5,
              mid_hashKey_99c33562a336f6e9,
              mid_allocateThenInsertThenRehash_164e57569ab55b95,
              mid_nextIterationSeed_20fbf7565993c3d7,
              mid_shiftConflictingKeys_540b2b23d51b1efd,
              mid_allocateBuffers_540b2b23d51b1efd,
              mid_equalElements_515121fdfc29d01a,
              mid_rehash_b1f60bea7e146732,
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
