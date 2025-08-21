#ifndef org_apache_lucene_index_FilterDirectoryReader_H
#define org_apache_lucene_index_FilterDirectoryReader_H

#include "org/apache/lucene/index/DirectoryReader.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class FilterDirectoryReader$SubReaderWrapper;
        class IndexCommit;
        class LeafReader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class FilterDirectoryReader : public ::org::apache::lucene::index::DirectoryReader {
         public:
          enum {
            mid_init$_b2e81a5862d8e947,
            mid_getDelegate_f7fded1703ce6ca1,
            mid_getIndexCommit_271a09cc45c80524,
            mid_getVersion_16939d9d0a9a9721,
            mid_isCurrent_947277eca0748c4e,
            mid_unwrap_c0f2d1165a6dcc7c,
            mid_doClose_3720c61b0679eb3e,
            mid_doOpenIfChanged_774a8b4c09b28fb4,
            mid_doOpenIfChanged_f7fded1703ce6ca1,
            mid_doOpenIfChanged_398ab3433e6a540a,
            mid_doWrapDirectoryReader_c0f2d1165a6dcc7c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterDirectoryReader(jobject obj) : ::org::apache::lucene::index::DirectoryReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterDirectoryReader(const FilterDirectoryReader& obj) : ::org::apache::lucene::index::DirectoryReader(obj) {}

          FilterDirectoryReader(const ::org::apache::lucene::index::DirectoryReader &, const ::org::apache::lucene::index::FilterDirectoryReader$SubReaderWrapper &);

          ::org::apache::lucene::index::DirectoryReader getDelegate() const;
          ::org::apache::lucene::index::IndexCommit getIndexCommit() const;
          jlong getVersion() const;
          jboolean isCurrent() const;
          static ::org::apache::lucene::index::DirectoryReader unwrap(const ::org::apache::lucene::index::DirectoryReader &);
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
        extern PyType_Def PY_TYPE_DEF(FilterDirectoryReader);
        extern PyTypeObject *PY_TYPE(FilterDirectoryReader);

        class t_FilterDirectoryReader {
        public:
          PyObject_HEAD
          FilterDirectoryReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FilterDirectoryReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FilterDirectoryReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FilterDirectoryReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
