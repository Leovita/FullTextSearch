#ifndef org_apache_lucene_analysis_util_FilesystemResourceLoader_H
#define org_apache_lucene_analysis_util_FilesystemResourceLoader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class ResourceLoader;
      }
    }
  }
}
namespace java {
  namespace io {
    class InputStream;
    class IOException;
  }
  namespace lang {
    class Class;
    class Module;
    class String;
    class ClassLoader;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class FilesystemResourceLoader : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ede66e9841bb3e77,
              mid_init$_750438018f9205b5,
              mid_init$_232ec0ba2251ed8a,
              mid_findClass_74b6933dfade62e7,
              mid_newInstance_ca22afea7b505a3f,
              mid_openResource_9bd3a7bffb83deee,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FilesystemResourceLoader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FilesystemResourceLoader(const FilesystemResourceLoader& obj) : ::java::lang::Object(obj) {}

            FilesystemResourceLoader(const ::java::nio::file::Path &, const ::java::lang::ClassLoader &);
            FilesystemResourceLoader(const ::java::nio::file::Path &, const ::java::lang::Module &);
            FilesystemResourceLoader(const ::java::nio::file::Path &, const ::org::apache::lucene::util::ResourceLoader &);

            ::java::lang::Class findClass(const ::java::lang::String &, const ::java::lang::Class &) const;
            ::java::lang::Object newInstance(const ::java::lang::String &, const ::java::lang::Class &) const;
            ::java::io::InputStream openResource(const ::java::lang::String &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          extern PyType_Def PY_TYPE_DEF(FilesystemResourceLoader);
          extern PyTypeObject *PY_TYPE(FilesystemResourceLoader);

          class t_FilesystemResourceLoader {
          public:
            PyObject_HEAD
            FilesystemResourceLoader object;
            static PyObject *wrap_Object(const FilesystemResourceLoader&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
