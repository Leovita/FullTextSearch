#ifndef org_apache_pylucene_util_PythonListIterator_H
#define org_apache_pylucene_util_PythonListIterator_H

#include "org/apache/pylucene/util/PythonIterator.h"

namespace java {
  namespace util {
    class ListIterator;
  }
  namespace lang {
    class Object;
    class Class;
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
            mid_init$_e7bdbe105ce1bafb,
            mid_add_501c3eb890ff6d79,
            mid_hasPrevious_9aa4f33e82ea333f,
            mid_nextIndex_bd89ce15dad49192,
            mid_previous_4819806f62f1360a,
            mid_previousIndex_bd89ce15dad49192,
            mid_remove_e7bdbe105ce1bafb,
            mid_set_501c3eb890ff6d79,
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
