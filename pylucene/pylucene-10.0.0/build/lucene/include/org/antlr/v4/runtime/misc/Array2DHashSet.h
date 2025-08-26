#ifndef org_antlr_v4_runtime_misc_Array2DHashSet_H
#define org_antlr_v4_runtime_misc_Array2DHashSet_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace misc {

          class Array2DHashSet : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_add_00d17418847797d4,
              mid_addAll_155d0ed876869448,
              mid_clear_e7bdbe105ce1bafb,
              mid_contains_00d17418847797d4,
              mid_containsAll_155d0ed876869448,
              mid_containsFast_00d17418847797d4,
              mid_equals_00d17418847797d4,
              mid_get_e2c45b124c12f4ec,
              mid_getOrAdd_e2c45b124c12f4ec,
              mid_hashCode_bd89ce15dad49192,
              mid_isEmpty_9aa4f33e82ea333f,
              mid_iterator_c7985fafdcf40e83,
              mid_remove_00d17418847797d4,
              mid_removeAll_155d0ed876869448,
              mid_removeFast_00d17418847797d4,
              mid_retainAll_155d0ed876869448,
              mid_size_bd89ce15dad49192,
              mid_toArray_1e688954528bc160,
              mid_toArray_0b4a993b49b6d8e8,
              mid_toString_e7df854526d67fa3,
              mid_toTableString_e7df854526d67fa3,
              mid_getBucket_3b738b91667a06c2,
              mid_asElementType_e2c45b124c12f4ec,
              mid_createBuckets_3aaa746aefca9e82,
              mid_createBucket_4eb6ea80b63848d4,
              mid_getOrAddImpl_e2c45b124c12f4ec,
              mid_expand_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Array2DHashSet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Array2DHashSet(const Array2DHashSet& obj) : ::java::lang::Object(obj) {}

            static jint INITAL_BUCKET_CAPACITY;
            static jint INITAL_CAPACITY;
            static jdouble LOAD_FACTOR;

            Array2DHashSet();

            jboolean add(const ::java::lang::Object &) const;
            jboolean addAll(const ::java::util::Collection &) const;
            void clear() const;
            jboolean contains(const ::java::lang::Object &) const;
            jboolean containsAll(const ::java::util::Collection &) const;
            jboolean containsFast(const ::java::lang::Object &) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::Object get(const ::java::lang::Object &) const;
            ::java::lang::Object getOrAdd(const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean isEmpty() const;
            ::java::util::Iterator iterator() const;
            jboolean remove(const ::java::lang::Object &) const;
            jboolean removeAll(const ::java::util::Collection &) const;
            jboolean removeFast(const ::java::lang::Object &) const;
            jboolean retainAll(const ::java::util::Collection &) const;
            jint size() const;
            JArray< ::java::lang::Object > toArray() const;
            JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
            ::java::lang::String toString() const;
            ::java::lang::String toTableString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace misc {
          extern PyType_Def PY_TYPE_DEF(Array2DHashSet);
          extern PyTypeObject *PY_TYPE(Array2DHashSet);

          class t_Array2DHashSet {
          public:
            PyObject_HEAD
            Array2DHashSet object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Array2DHashSet *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Array2DHashSet&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Array2DHashSet&, PyTypeObject *);
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
