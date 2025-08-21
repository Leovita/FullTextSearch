#ifndef org_apache_lucene_index_SoftDeletesDirectoryReaderWrapper_H
#define org_apache_lucene_index_SoftDeletesDirectoryReaderWrapper_H

#include "org/apache/lucene/index/FilterDirectoryReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class DirectoryReader;
        class LeafReader;
        class IndexReader$CacheHelper;
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
      namespace index {

        class SoftDeletesDirectoryReaderWrapper : public ::org::apache::lucene::index::FilterDirectoryReader {
         public:
          enum {
            mid_init$_57c9f70bf29bc6ac,
            mid_getReaderCacheHelper_3117e2e82cc46163,
            mid_doWrapDirectoryReader_c0f2d1165a6dcc7c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SoftDeletesDirectoryReaderWrapper(jobject obj) : ::org::apache::lucene::index::FilterDirectoryReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SoftDeletesDirectoryReaderWrapper(const SoftDeletesDirectoryReaderWrapper& obj) : ::org::apache::lucene::index::FilterDirectoryReader(obj) {}

          SoftDeletesDirectoryReaderWrapper(const ::org::apache::lucene::index::DirectoryReader &, const ::java::lang::String &);

          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
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
        extern PyType_Def PY_TYPE_DEF(SoftDeletesDirectoryReaderWrapper);
        extern PyTypeObject *PY_TYPE(SoftDeletesDirectoryReaderWrapper);

        class t_SoftDeletesDirectoryReaderWrapper {
        public:
          PyObject_HEAD
          SoftDeletesDirectoryReaderWrapper object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SoftDeletesDirectoryReaderWrapper *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SoftDeletesDirectoryReaderWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SoftDeletesDirectoryReaderWrapper&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
