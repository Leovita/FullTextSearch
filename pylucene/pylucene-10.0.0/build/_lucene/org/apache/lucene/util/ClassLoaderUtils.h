#ifndef org_apache_lucene_util_ClassLoaderUtils_H
#define org_apache_lucene_util_ClassLoaderUtils_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ClassLoader;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class ClassLoaderUtils : public ::java::lang::Object {
         public:
          enum {
            mid_isParentClassLoader_14c9c142fc803f0e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ClassLoaderUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ClassLoaderUtils(const ClassLoaderUtils& obj) : ::java::lang::Object(obj) {}

          static jboolean isParentClassLoader(const ::java::lang::ClassLoader &, const ::java::lang::ClassLoader &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(ClassLoaderUtils);
        extern PyTypeObject *PY_TYPE(ClassLoaderUtils);

        class t_ClassLoaderUtils {
        public:
          PyObject_HEAD
          ClassLoaderUtils object;
          static PyObject *wrap_Object(const ClassLoaderUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
