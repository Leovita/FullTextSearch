#ifndef org_apache_lucene_internal_hppc_LongHashSet_H
#define org_apache_lucene_internal_hppc_LongHashSet_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
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
          class LongHashSet;
          class LongCursor;
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

          class LongHashSet : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_540b2b23d51b1efd,
              mid_init$_bfec175f942874e6,
              mid_add_d8a0ab12857291e0,
              mid_addAll_5844ba7d57ada19d,
              mid_addAll_a5becf816fc63d0c,
              mid_addAll_96d1463b11b9fbe9,
              mid_clear_3720c61b0679eb3e,
              mid_clone_0a21e6a2b3644c89,
              mid_contains_d8a0ab12857291e0,
              mid_ensureCapacity_540b2b23d51b1efd,
              mid_equals_570b5248a6da3ef6,
              mid_from_76511de5218ffb7a,
              mid_hashCode_20fbf7565993c3d7,
              mid_indexExists_ae22d3a856ad56f1,
              mid_indexGet_7b22650fccb5d574,
              mid_indexInsert_52c53d6e59b40db2,
              mid_indexOf_35c872f03f347c10,
              mid_indexRemove_540b2b23d51b1efd,
              mid_indexReplace_cd2eca3bb00d4788,
              mid_isEmpty_947277eca0748c4e,
              mid_iterator_0db4c76ff7ee995b,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_release_3720c61b0679eb3e,
              mid_remove_d8a0ab12857291e0,
              mid_removeAll_a5becf816fc63d0c,
              mid_size_20fbf7565993c3d7,
              mid_toArray_a057bd1a0d2826b3,
              mid_verifyLoadFactor_8fff3d7dcb9fddc5,
              mid_hashKey_35c872f03f347c10,
              mid_allocateThenInsertThenRehash_52c53d6e59b40db2,
              mid_nextIterationSeed_20fbf7565993c3d7,
              mid_shiftConflictingKeys_540b2b23d51b1efd,
              mid_allocateBuffers_540b2b23d51b1efd,
              mid_rehash_140bd592f9f15dfc,
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

            explicit LongHashSet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongHashSet(const LongHashSet& obj) : ::java::lang::Object(obj) {}

            JArray< jlong > _get_keys() const;
            void _set_keys(const JArray< jlong > &) const;

            LongHashSet();
            LongHashSet(jint);
            LongHashSet(jint, jdouble);

            jboolean add(jlong) const;
            jint addAll(const JArray< jlong > &) const;
            jint addAll(const LongHashSet &) const;
            jint addAll(const ::java::lang::Iterable &) const;
            void clear() const;
            LongHashSet clone() const;
            jboolean contains(jlong) const;
            void ensureCapacity(jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            static LongHashSet from(const JArray< jlong > &);
            jint hashCode() const;
            jboolean indexExists(jint) const;
            jlong indexGet(jint) const;
            void indexInsert(jint, jlong) const;
            jint indexOf(jlong) const;
            void indexRemove(jint) const;
            jlong indexReplace(jint, jlong) const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            jlong ramBytesUsed() const;
            void release() const;
            jboolean remove(jlong) const;
            jint removeAll(const LongHashSet &) const;
            jint size() const;
            JArray< jlong > toArray() const;
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
          extern PyType_Def PY_TYPE_DEF(LongHashSet);
          extern PyTypeObject *PY_TYPE(LongHashSet);

          class t_LongHashSet {
          public:
            PyObject_HEAD
            LongHashSet object;
            static PyObject *wrap_Object(const LongHashSet&);
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
