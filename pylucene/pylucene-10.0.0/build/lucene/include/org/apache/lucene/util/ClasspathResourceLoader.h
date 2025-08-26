#ifndef org_apache_lucene_util_ClasspathResourceLoader_H
#define org_apache_lucene_util_ClasspathResourceLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class ClassLoader;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class ResourceLoader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class ClasspathResourceLoader : public ::java::lang::Object {
         public:
          enum {
            mid_init$_fbe53aa5d2a68b3e,
            mid_init$_d603563f542d31ba,
            mid_findClass_74b6933dfade62e7,
            mid_openResource_9bd3a7bffb83deee,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ClasspathResourceLoader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ClasspathResourceLoader(const ClasspathResourceLoader& obj) : ::java::lang::Object(obj) {}

          ClasspathResourceLoader(const ::java::lang::Class &);
          ClasspathResourceLoader(const ::java::lang::ClassLoader &);

          ::java::lang::Class findClass(const ::java::lang::String &, const ::java::lang::Class &) const;
          ::java::io::InputStream openResource(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(ClasspathResourceLoader);
        extern PyTypeObject *PY_TYPE(ClasspathResourceLoader);

        class t_ClasspathResourceLoader {
        public:
          PyObject_HEAD
          ClasspathResourceLoader object;
          static PyObject *wrap_Object(const ClasspathResourceLoader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
