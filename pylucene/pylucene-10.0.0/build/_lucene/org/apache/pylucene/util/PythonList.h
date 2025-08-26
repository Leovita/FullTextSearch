#ifndef org_apache_pylucene_util_PythonList_H
#define org_apache_pylucene_util_PythonList_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class ListIterator;
    class Collection;
    class List;
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
            mid_init$_e7bdbe105ce1bafb,
            mid_add_00d17418847797d4,
            mid_add_09375f3fd0a3af05,
            mid_addAll_155d0ed876869448,
            mid_addAll_6a33d3084931e945,
            mid_clear_e7bdbe105ce1bafb,
            mid_contains_00d17418847797d4,
            mid_containsAll_155d0ed876869448,
            mid_get_2a2d7d7b9153274c,
            mid_indexOf_3b738b91667a06c2,
            mid_isEmpty_9aa4f33e82ea333f,
            mid_iterator_c7985fafdcf40e83,
            mid_lastIndexOf_3b738b91667a06c2,
            mid_listIterator_f5b10a8957c7e8ce,
            mid_listIterator_a1b8e40853ea22b0,
            mid_pythonExtension_0f176418e3e16541,
            mid_pythonExtension_1d3149fac12f2af3,
            mid_remove_2a2d7d7b9153274c,
            mid_remove_00d17418847797d4,
            mid_removeAll_155d0ed876869448,
            mid_retainAll_155d0ed876869448,
            mid_set_c8f65d2ef44d5c7c,
            mid_size_bd89ce15dad49192,
            mid_subList_6d7644d6c0697519,
            mid_toArray_1e688954528bc160,
            mid_toArray_0b4a993b49b6d8e8,
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
