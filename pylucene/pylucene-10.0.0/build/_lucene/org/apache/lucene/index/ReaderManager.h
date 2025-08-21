#ifndef org_apache_lucene_index_ReaderManager_H
#define org_apache_lucene_index_ReaderManager_H

#include "org/apache/lucene/search/ReferenceManager.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class DirectoryReader;
        class IndexWriter;
      }
      namespace store {
        class Directory;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class ReaderManager : public ::org::apache::lucene::search::ReferenceManager {
         public:
          enum {
            mid_init$_d3e27df2fcbfc7a9,
            mid_init$_b16d1e819f837eb1,
            mid_init$_3c151c130d7f3176,
            mid_init$_8677e1358bc65b72,
            mid_decRef_d3e27df2fcbfc7a9,
            mid_tryIncRef_01cc508029c00f0b,
            mid_getRefCount_b01b5fa97c8cb29b,
            mid_refreshIfNeeded_c0f2d1165a6dcc7c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ReaderManager(jobject obj) : ::org::apache::lucene::search::ReferenceManager(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ReaderManager(const ReaderManager& obj) : ::org::apache::lucene::search::ReferenceManager(obj) {}

          ReaderManager(const ::org::apache::lucene::index::DirectoryReader &);
          ReaderManager(const ::org::apache::lucene::index::IndexWriter &);
          ReaderManager(const ::org::apache::lucene::store::Directory &);
          ReaderManager(const ::org::apache::lucene::index::IndexWriter &, jboolean, jboolean);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(ReaderManager);
        extern PyTypeObject *PY_TYPE(ReaderManager);

        class t_ReaderManager {
        public:
          PyObject_HEAD
          ReaderManager object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ReaderManager *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ReaderManager&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ReaderManager&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
