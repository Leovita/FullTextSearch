#ifndef org_apache_lucene_internal_hppc_CharHashSet_H
#define org_apache_lucene_internal_hppc_CharHashSet_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Cloneable;
    class Class;
    class Iterable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {
          class CharCursor;
          class CharHashSet;
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

          class CharHashSet : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_8226bd0b0fc13dba,
              mid_init$_21c15812094aeb13,
              mid_add_96a1e5bdb33dde4e,
              mid_addAll_b5302190531968fe,
              mid_addAll_70c9ef868020deea,
              mid_addAll_29d327a2ef457411,
              mid_clear_e7bdbe105ce1bafb,
              mid_clone_8f23fb4866395fe6,
              mid_contains_96a1e5bdb33dde4e,
              mid_ensureCapacity_8226bd0b0fc13dba,
              mid_equals_00d17418847797d4,
              mid_from_2c4a68c51b15a1ff,
              mid_hashCode_bd89ce15dad49192,
              mid_indexExists_a8281eb3b9d9672d,
              mid_indexGet_bc94dd98365f92fb,
              mid_indexInsert_53f645c50443c1f0,
              mid_indexOf_71dc1db9b5187263,
              mid_indexRemove_8226bd0b0fc13dba,
              mid_indexReplace_9abdc22200c06b43,
              mid_isEmpty_9aa4f33e82ea333f,
              mid_iterator_c7985fafdcf40e83,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_release_e7bdbe105ce1bafb,
              mid_remove_96a1e5bdb33dde4e,
              mid_removeAll_70c9ef868020deea,
              mid_size_bd89ce15dad49192,
              mid_toArray_e5926045e1917c62,
              mid_nextIterationSeed_bd89ce15dad49192,
              mid_allocateThenInsertThenRehash_53f645c50443c1f0,
              mid_verifyLoadFactor_8493a5edcb36d651,
              mid_hashKey_71dc1db9b5187263,
              mid_shiftConflictingKeys_8226bd0b0fc13dba,
              mid_allocateBuffers_8226bd0b0fc13dba,
              mid_rehash_ae4452529cb9c0dd,
              max_mid
            };

            enum {
              fid_keys,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharHashSet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharHashSet(const CharHashSet& obj) : ::java::lang::Object(obj) {}

            JArray< jchar > _get_keys() const;
            void _set_keys(const JArray< jchar > &) const;

            CharHashSet();
            CharHashSet(jint);
            CharHashSet(jint, jdouble);

            jboolean add(jchar) const;
            jint addAll(const JArray< jchar > &) const;
            jint addAll(const CharHashSet &) const;
            jint addAll(const ::java::lang::Iterable &) const;
            void clear() const;
            CharHashSet clone() const;
            jboolean contains(jchar) const;
            void ensureCapacity(jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            static CharHashSet from(const JArray< jchar > &);
            jint hashCode() const;
            jboolean indexExists(jint) const;
            jchar indexGet(jint) const;
            void indexInsert(jint, jchar) const;
            jint indexOf(jchar) const;
            void indexRemove(jint) const;
            jchar indexReplace(jint, jchar) const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            jlong ramBytesUsed() const;
            void release() const;
            jboolean remove(jchar) const;
            jint removeAll(const CharHashSet &) const;
            jint size() const;
            JArray< jchar > toArray() const;
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
          extern PyType_Def PY_TYPE_DEF(CharHashSet);
          extern PyTypeObject *PY_TYPE(CharHashSet);

          class t_CharHashSet {
          public:
            PyObject_HEAD
            CharHashSet object;
            static PyObject *wrap_Object(const CharHashSet&);
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
