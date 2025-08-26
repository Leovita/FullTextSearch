#ifndef org_apache_lucene_internal_hppc_IntHashSet_H
#define org_apache_lucene_internal_hppc_IntHashSet_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
  }
  namespace lang {
    class Cloneable;
    class Integer;
    class Class;
    class Iterable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {
          class IntCursor;
          class IntHashSet;
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

          class IntHashSet : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_8226bd0b0fc13dba,
              mid_init$_b5398b431eb321fb,
              mid_init$_21c15812094aeb13,
              mid_add_a8281eb3b9d9672d,
              mid_addAll_ce3442f6684197de,
              mid_addAll_f462381b4502d11e,
              mid_addAll_29d327a2ef457411,
              mid_addAll_4cd7ffd482b3c390,
              mid_clear_e7bdbe105ce1bafb,
              mid_clone_4c6aba0b044ee016,
              mid_contains_a8281eb3b9d9672d,
              mid_ensureCapacity_8226bd0b0fc13dba,
              mid_equals_00d17418847797d4,
              mid_from_a3d5c3c2678ccadb,
              mid_hashCode_bd89ce15dad49192,
              mid_indexExists_a8281eb3b9d9672d,
              mid_indexGet_a3904e10f5bb9437,
              mid_indexInsert_645c25455f5b9b1c,
              mid_indexOf_a3904e10f5bb9437,
              mid_indexRemove_8226bd0b0fc13dba,
              mid_indexReplace_7f27cf81a85a97e9,
              mid_isEmpty_9aa4f33e82ea333f,
              mid_iterator_c7985fafdcf40e83,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_release_e7bdbe105ce1bafb,
              mid_remove_a8281eb3b9d9672d,
              mid_removeAll_f462381b4502d11e,
              mid_size_bd89ce15dad49192,
              mid_toArray_4b72a28a860ae838,
              mid_nextIterationSeed_bd89ce15dad49192,
              mid_allocateThenInsertThenRehash_645c25455f5b9b1c,
              mid_verifyLoadFactor_8493a5edcb36d651,
              mid_hashKey_a3904e10f5bb9437,
              mid_shiftConflictingKeys_8226bd0b0fc13dba,
              mid_allocateBuffers_8226bd0b0fc13dba,
              mid_rehash_5434f4e6ff59bff9,
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

            explicit IntHashSet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntHashSet(const IntHashSet& obj) : ::java::lang::Object(obj) {}

            JArray< jint > _get_keys() const;
            void _set_keys(const JArray< jint > &) const;

            IntHashSet();
            IntHashSet(jint);
            IntHashSet(const ::java::util::Collection &);
            IntHashSet(jint, jdouble);

            jboolean add(jint) const;
            jint addAll(const JArray< jint > &) const;
            jint addAll(const IntHashSet &) const;
            jint addAll(const ::java::lang::Iterable &) const;
            jint addAll(const ::java::util::Collection &) const;
            void clear() const;
            IntHashSet clone() const;
            jboolean contains(jint) const;
            void ensureCapacity(jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            static IntHashSet from(const JArray< jint > &);
            jint hashCode() const;
            jboolean indexExists(jint) const;
            jint indexGet(jint) const;
            void indexInsert(jint, jint) const;
            jint indexOf(jint) const;
            void indexRemove(jint) const;
            jint indexReplace(jint, jint) const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            jlong ramBytesUsed() const;
            void release() const;
            jboolean remove(jint) const;
            jint removeAll(const IntHashSet &) const;
            jint size() const;
            JArray< jint > toArray() const;
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
          extern PyType_Def PY_TYPE_DEF(IntHashSet);
          extern PyTypeObject *PY_TYPE(IntHashSet);

          class t_IntHashSet {
          public:
            PyObject_HEAD
            IntHashSet object;
            static PyObject *wrap_Object(const IntHashSet&);
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
