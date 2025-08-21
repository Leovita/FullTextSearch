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
            mid_init$_3720c61b0679eb3e,
            mid_hasNext_947277eca0748c4e,
            mid_next_5655ed8670534604,
            mid_pythonExtension_16939d9d0a9a9721,
            mid_pythonExtension_8b3d46852b435a94,
            mid_remove_3720c61b0679eb3e,
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
