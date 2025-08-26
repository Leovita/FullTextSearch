#ifndef org_apache_pylucene_util_PythonIterator_H
#define org_apache_pylucene_util_PythonIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
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

        class PythonIterator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_hasNext_9aa4f33e82ea333f,
            mid_next_4819806f62f1360a,
            mid_pythonExtension_0f176418e3e16541,
            mid_pythonExtension_1d3149fac12f2af3,
            mid_remove_e7bdbe105ce1bafb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonIterator(const PythonIterator& obj) : ::java::lang::Object(obj) {}

          PythonIterator();

          jboolean hasNext() const;
          ::java::lang::Object next() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void remove() const;
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
        extern PyType_Def PY_TYPE_DEF(PythonIterator);
        extern PyTypeObject *PY_TYPE(PythonIterator);

        class t_PythonIterator {
        public:
          PyObject_HEAD
          PythonIterator object;
          static PyObject *wrap_Object(const PythonIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
