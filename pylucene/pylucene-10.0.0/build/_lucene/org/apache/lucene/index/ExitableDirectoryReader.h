#ifndef org_apache_lucene_index_ExitableDirectoryReader_H
#define org_apache_lucene_index_ExitableDirectoryReader_H

#include "org/apache/lucene/index/FilterDirectoryReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class DirectoryReader;
        class QueryTimeout;
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

        class ExitableDirectoryReader : public ::org::apache::lucene::index::FilterDirectoryReader {
         public:
          enum {
            mid_init$_4aa68ee6b8f8fb5d,
            mid_getReaderCacheHelper_3117e2e82cc46163,
            mid_toString_09a7afff1868fc5e,
            mid_wrap_4f9ede19b9c7349b,
            mid_doWrapDirectoryReader_c0f2d1165a6dcc7c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ExitableDirectoryReader(jobject obj) : ::org::apache::lucene::index::FilterDirectoryReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ExitableDirectoryReader(const ExitableDirectoryReader& obj) : ::org::apache::lucene::index::FilterDirectoryReader(obj) {}

          ExitableDirectoryReader(const ::org::apache::lucene::index::DirectoryReader &, const ::org::apache::lucene::index::QueryTimeout &);

          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
          ::java::lang::String toString() const;
          static ::org::apache::lucene::index::DirectoryReader wrap(const ::org::apache::lucene::index::DirectoryReader &, const ::org::apache::lucene::index::QueryTimeout &);
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
        extern PyType_Def PY_TYPE_DEF(ExitableDirectoryReader);
        extern PyTypeObject *PY_TYPE(ExitableDirectoryReader);

        class t_ExitableDirectoryReader {
        public:
          PyObject_HEAD
          ExitableDirectoryReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ExitableDirectoryReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ExitableDirectoryReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ExitableDirectoryReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
