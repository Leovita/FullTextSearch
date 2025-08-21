#ifndef org_apache_lucene_internal_hppc_CharHashSet_H
#define org_apache_lucene_internal_hppc_CharHashSet_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {
          class CharHashSet;
          class CharCursor;
        }
      }
      namespace util {
        class Accountable;
      }
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {

          class CharHashSet : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_540b2b23d51b1efd,
              mid_init$_bfec175f942874e6,
              mid_add_4e84a8c37896b7c5,
              mid_addAll_1d6980f6711df1e4,
              mid_addAll_c0cd1088f95462ce,
              mid_addAll_96d1463b11b9fbe9,
              mid_clear_3720c61b0679eb3e,
              mid_clone_6819e28c952c6659,
              mid_contains_4e84a8c37896b7c5,
              mid_ensureCapacity_540b2b23d51b1efd,
              mid_equals_570b5248a6da3ef6,
              mid_from_bbf9befb53834603,
              mid_hashCode_20fbf7565993c3d7,
              mid_indexExists_ae22d3a856ad56f1,
              mid_indexGet_92a13ce4196a7e69,
              mid_indexInsert_931c9794de74ba08,
              mid_indexOf_99c33562a336f6e9,
              mid_indexRemove_540b2b23d51b1efd,
              mid_indexReplace_d0078caac5d553f4,
              mid_isEmpty_947277eca0748c4e,
              mid_iterator_0db4c76ff7ee995b,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_release_3720c61b0679eb3e,
              mid_remove_4e84a8c37896b7c5,
              mid_removeAll_c0cd1088f95462ce,
              mid_size_20fbf7565993c3d7,
              mid_toArray_77d52ded526199de,
              mid_verifyLoadFactor_8fff3d7dcb9fddc5,
              mid_hashKey_99c33562a336f6e9,
              mid_allocateThenInsertThenRehash_931c9794de74ba08,
              mid_nextIterationSeed_20fbf7565993c3d7,
              mid_shiftConflictingKeys_540b2b23d51b1efd,
              mid_allocateBuffers_540b2b23d51b1efd,
              mid_rehash_cc40ee25f19f0868,
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
