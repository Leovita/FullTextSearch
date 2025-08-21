#ifndef org_apache_pylucene_util_PythonList_H
#define org_apache_pylucene_util_PythonList_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
    class List;
    class ListIterator;
  }
  namespace lang {
    class IllegalArgumentException;
    class Class;
    class IndexOutOfBoundsException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {

        class PythonList : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_add_570b5248a6da3ef6,
            mid_add_45daa0687d5df9b5,
            mid_addAll_f2a1f31c5865e20d,
            mid_addAll_30cee388a7b048af,
            mid_clear_3720c61b0679eb3e,
            mid_contains_570b5248a6da3ef6,
            mid_containsAll_f2a1f31c5865e20d,
            mid_get_eb7eace67c4a21fd,
            mid_indexOf_657656e6a597f732,
            mid_isEmpty_947277eca0748c4e,
            mid_iterator_0db4c76ff7ee995b,
            mid_lastIndexOf_657656e6a597f732,
            mid_listIterator_0f4ac4d253da0dce,
            mid_listIterator_c5b65026385ab4af,
            mid_pythonExtension_16939d9d0a9a9721,
            mid_pythonExtension_8b3d46852b435a94,
            mid_remove_eb7eace67c4a21fd,
            mid_remove_570b5248a6da3ef6,
            mid_removeAll_f2a1f31c5865e20d,
            mid_retainAll_f2a1f31c5865e20d,
            mid_set_b84ce9d3b2137b5e,
            mid_size_20fbf7565993c3d7,
            mid_subList_3690552717f6ec88,
            mid_toArray_e6b839682a4610a6,
            mid_toArray_1794d6b866766560,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonList(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonList(const PythonList& obj) : ::java::lang::Object(obj) {}

          PythonList();

          jboolean add(const ::java::lang::Object &) const;
          void add(jint, const ::java::lang::Object &) const;
          jboolean addAll(const ::java::util::Collection &) const;
          jboolean addAll(jint, const ::java::util::Collection &) const;
          void clear() const;
          jboolean contains(const ::java::lang::Object &) const;
          jboolean containsAll(const ::java::util::Collection &) const;
          ::java::lang::Object get(jint) const;
          jint indexOf(const ::java::lang::Object &) const;
          jboolean isEmpty() const;
          ::java::util::Iterator iterator() const;
          jint lastIndexOf(const ::java::lang::Object &) const;
          ::java::util::ListIterator listIterator() const;
          ::java::util::ListIterator listIterator(jint) const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          ::java::lang::Object remove(jint) const;
          jboolean remove(const ::java::lang::Object &) const;
          jboolean removeAll(const ::java::util::Collection &) const;
          jboolean retainAll(const ::java::util::Collection &) const;
          ::java::lang::Object set(jint, const ::java::lang::Object &) const;
          jint size() const;
          ::java::util::List subList(jint, jint) const;
          JArray< ::java::lang::Object > toArray() const;
          JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(PythonList);
        extern PyTypeObject *PY_TYPE(PythonList);

        class t_PythonList {
        public:
          PyObject_HEAD
          PythonList object;
          static PyObject *wrap_Object(const PythonList&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
