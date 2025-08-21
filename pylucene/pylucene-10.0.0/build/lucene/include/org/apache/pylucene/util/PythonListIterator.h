#ifndef org_apache_pylucene_util_PythonListIterator_H
#define org_apache_pylucene_util_PythonListIterator_H

#include "org/apache/pylucene/util/PythonIterator.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
  namespace util {
    class ListIterator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {

        class PythonListIterator : public ::org::apache::pylucene::util::PythonIterator {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_add_eb61ef4d1db15d08,
            mid_hasPrevious_947277eca0748c4e,
            mid_nextIndex_20fbf7565993c3d7,
            mid_previous_5655ed8670534604,
            mid_previousIndex_20fbf7565993c3d7,
            mid_remove_3720c61b0679eb3e,
            mid_set_eb61ef4d1db15d08,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonListIterator(jobject obj) : ::org::apache::pylucene::util::PythonIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonListIterator(const PythonListIterator& obj) : ::org::apache::pylucene::util::PythonIterator(obj) {}

          PythonListIterator();

          void add(const ::java::lang::Object &) const;
          jboolean hasPrevious() const;
          jint nextIndex() const;
          ::java::lang::Object previous() const;
          jint previousIndex() const;
          void remove() const;
          void set(const ::java::lang::Object &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonListIterator);
        extern PyTypeObject *PY_TYPE(PythonListIterator);

        class t_PythonListIterator {
        public:
          PyObject_HEAD
          PythonListIterator object;
          static PyObject *wrap_Object(const PythonListIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
