#ifndef org_apache_pylucene_util_PythonSet_H
#define org_apache_pylucene_util_PythonSet_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
    class Set;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {

        class PythonSet : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_add_00d17418847797d4,
            mid_addAll_155d0ed876869448,
            mid_clear_e7bdbe105ce1bafb,
            mid_contains_00d17418847797d4,
            mid_containsAll_155d0ed876869448,
            mid_isEmpty_9aa4f33e82ea333f,
            mid_iterator_c7985fafdcf40e83,
            mid_pythonExtension_0f176418e3e16541,
            mid_pythonExtension_1d3149fac12f2af3,
            mid_remove_00d17418847797d4,
            mid_removeAll_155d0ed876869448,
            mid_retainAll_155d0ed876869448,
            mid_size_bd89ce15dad49192,
            mid_toArray_1e688954528bc160,
            mid_toArray_0b4a993b49b6d8e8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonSet(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonSet(const PythonSet& obj) : ::java::lang::Object(obj) {}

          PythonSet();

          jboolean add(const ::java::lang::Object &) const;
          jboolean addAll(const ::java::util::Collection &) const;
          void clear() const;
          jboolean contains(const ::java::lang::Object &) const;
          jboolean containsAll(const ::java::util::Collection &) const;
          jboolean isEmpty() const;
          ::java::util::Iterator iterator() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          jboolean remove(const ::java::lang::Object &) const;
          jboolean removeAll(const ::java::util::Collection &) const;
          jboolean retainAll(const ::java::util::Collection &) const;
          jint size() const;
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
        extern PyType_Def PY_TYPE_DEF(PythonSet);
        extern PyTypeObject *PY_TYPE(PythonSet);

        class t_PythonSet {
        public:
          PyObject_HEAD
          PythonSet object;
          static PyObject *wrap_Object(const PythonSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
