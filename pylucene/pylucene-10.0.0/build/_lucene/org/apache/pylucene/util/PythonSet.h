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
            mid_init$_3720c61b0679eb3e,
            mid_add_570b5248a6da3ef6,
            mid_addAll_f2a1f31c5865e20d,
            mid_clear_3720c61b0679eb3e,
            mid_contains_570b5248a6da3ef6,
            mid_containsAll_f2a1f31c5865e20d,
            mid_isEmpty_947277eca0748c4e,
            mid_iterator_0db4c76ff7ee995b,
            mid_pythonExtension_16939d9d0a9a9721,
            mid_pythonExtension_8b3d46852b435a94,
            mid_remove_570b5248a6da3ef6,
            mid_removeAll_f2a1f31c5865e20d,
            mid_retainAll_f2a1f31c5865e20d,
            mid_size_20fbf7565993c3d7,
            mid_toArray_e6b839682a4610a6,
            mid_toArray_1794d6b866766560,
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
