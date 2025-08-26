#ifndef org_apache_lucene_index_FilterDirectoryReader_H
#define org_apache_lucene_index_FilterDirectoryReader_H

#include "org/apache/lucene/index/DirectoryReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexCommit;
        class LeafReader;
        class FilterDirectoryReader$SubReaderWrapper;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
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
            mid_init$_345a24660967548d,
            mid_getDelegate_a8b6bb613ad0bc66,
            mid_getIndexCommit_3f5d748efdffe9e0,
            mid_getVersion_0f176418e3e16541,
            mid_isCurrent_9aa4f33e82ea333f,
            mid_unwrap_f4693940cb629eaf,
            mid_doWrapDirectoryReader_f4693940cb629eaf,
            mid_doOpenIfChanged_f3cbd71bf1d7f0c6,
            mid_doOpenIfChanged_a8b6bb613ad0bc66,
            mid_doOpenIfChanged_9a09931027467e73,
            mid_doClose_e7bdbe105ce1bafb,
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
