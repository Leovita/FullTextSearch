#ifndef org_apache_lucene_store_NIOFSDirectory_H
#define org_apache_lucene_store_NIOFSDirectory_H

#include "org/apache/lucene/store/FSDirectory.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class LockFactory;
        class IndexInput;
        class IOContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class NIOFSDirectory : public ::org::apache::lucene::store::FSDirectory {
         public:
          enum {
            mid_init$_8a3244428bfc77b8,
            mid_init$_84a94904a0b471b0,
            mid_openInput_f1f6511a018f52d0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NIOFSDirectory(jobject obj) : ::org::apache::lucene::store::FSDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NIOFSDirectory(const NIOFSDirectory& obj) : ::org::apache::lucene::store::FSDirectory(obj) {}

          NIOFSDirectory(const ::java::nio::file::Path &);
          NIOFSDirectory(const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &);

          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(NIOFSDirectory);
        extern PyTypeObject *PY_TYPE(NIOFSDirectory);

        class t_NIOFSDirectory {
        public:
          PyObject_HEAD
          NIOFSDirectory object;
          static PyObject *wrap_Object(const NIOFSDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
