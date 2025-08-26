#ifndef org_apache_lucene_misc_store_HardlinkCopyDirectoryWrapper_H
#define org_apache_lucene_misc_store_HardlinkCopyDirectoryWrapper_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IOContext;
      }
    }
  }
}
namespace java {
  namespace io {
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
      namespace misc {
        namespace store {

          class HardlinkCopyDirectoryWrapper : public ::org::apache::lucene::store::FilterDirectory {
           public:
            enum {
              mid_init$_0bf39a7351552ef4,
              mid_copyFrom_690af4af74b7d11b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HardlinkCopyDirectoryWrapper(jobject obj) : ::org::apache::lucene::store::FilterDirectory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HardlinkCopyDirectoryWrapper(const HardlinkCopyDirectoryWrapper& obj) : ::org::apache::lucene::store::FilterDirectory(obj) {}

            HardlinkCopyDirectoryWrapper(const ::org::apache::lucene::store::Directory &);

            void copyFrom(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
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
      namespace misc {
        namespace store {
          extern PyType_Def PY_TYPE_DEF(HardlinkCopyDirectoryWrapper);
          extern PyTypeObject *PY_TYPE(HardlinkCopyDirectoryWrapper);

          class t_HardlinkCopyDirectoryWrapper {
          public:
            PyObject_HEAD
            HardlinkCopyDirectoryWrapper object;
            static PyObject *wrap_Object(const HardlinkCopyDirectoryWrapper&);
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
