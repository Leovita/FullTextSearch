#ifndef org_apache_lucene_util_ResourceLoader_H
#define org_apache_lucene_util_ResourceLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class ResourceLoader : public ::java::lang::Object {
         public:
          enum {
            mid_findClass_b5a648522f034964,
            mid_newInstance_41015388295e12f4,
            mid_openResource_4306cf2226901a47,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ResourceLoader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ResourceLoader(const ResourceLoader& obj) : ::java::lang::Object(obj) {}

          ::java::lang::Class findClass(const ::java::lang::String &, const ::java::lang::Class &) const;
          ::java::lang::Object newInstance(const ::java::lang::String &, const ::java::lang::Class &) const;
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
        extern PyType_Def PY_TYPE_DEF(ResourceLoader);
        extern PyTypeObject *PY_TYPE(ResourceLoader);

        class t_ResourceLoader {
        public:
          PyObject_HEAD
          ResourceLoader object;
          static PyObject *wrap_Object(const ResourceLoader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
