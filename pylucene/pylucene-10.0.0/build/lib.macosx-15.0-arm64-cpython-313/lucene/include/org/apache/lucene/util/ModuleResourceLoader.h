#ifndef org_apache_lucene_util_ModuleResourceLoader_H
#define org_apache_lucene_util_ModuleResourceLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Module;
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

        class ModuleResourceLoader : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0a7a4cd5fd0d5918,
            mid_findClass_b5a648522f034964,
            mid_openResource_4306cf2226901a47,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ModuleResourceLoader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ModuleResourceLoader(const ModuleResourceLoader& obj) : ::java::lang::Object(obj) {}

          ModuleResourceLoader(const ::java::lang::Module &);

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
        extern PyType_Def PY_TYPE_DEF(ModuleResourceLoader);
        extern PyTypeObject *PY_TYPE(ModuleResourceLoader);

        class t_ModuleResourceLoader {
        public:
          PyObject_HEAD
          ModuleResourceLoader object;
          static PyObject *wrap_Object(const ModuleResourceLoader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
