#ifndef org_apache_lucene_index_DirectoryReader_H
#define org_apache_lucene_index_DirectoryReader_H

#include "org/apache/lucene/index/BaseCompositeReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class DirectoryReader;
        class IndexWriter;
        class IndexCommit;
        class LeafReader;
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
  namespace util {
    class List;
    class Comparator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class DirectoryReader : public ::org::apache::lucene::index::BaseCompositeReader {
         public:
          enum {
            mid_directory_0d3b52699e153434,
            mid_getIndexCommit_271a09cc45c80524,
            mid_getVersion_16939d9d0a9a9721,
            mid_indexExists_7b61d161dbcd407d,
            mid_isCurrent_947277eca0748c4e,
            mid_listCommits_4b0986df9f52b12e,
            mid_open_774a8b4c09b28fb4,
            mid_open_c84aecaf0e3ee77f,
            mid_open_305366f7010e8381,
            mid_open_90e7f2b21d1c5f9b,
            mid_open_836a6a2e86e11b63,
            mid_open_4736a4a2979dcef8,
            mid_openIfChanged_c0f2d1165a6dcc7c,
            mid_openIfChanged_877ce014dd23551c,
            mid_openIfChanged_1af19c818e73f816,
            mid_openIfChanged_ccc7bed723c10ab3,
            mid_doOpenIfChanged_398ab3433e6a540a,
            mid_doOpenIfChanged_774a8b4c09b28fb4,
            mid_doOpenIfChanged_f7fded1703ce6ca1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DirectoryReader(jobject obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DirectoryReader(const DirectoryReader& obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {}

          ::org::apache::lucene::store::Directory directory() const;
          ::org::apache::lucene::index::IndexCommit getIndexCommit() const;
          jlong getVersion() const;
          static jboolean indexExists(const ::org::apache::lucene::store::Directory &);
          jboolean isCurrent() const;
          static ::java::util::List listCommits(const ::org::apache::lucene::store::Directory &);
          static DirectoryReader open(const ::org::apache::lucene::index::IndexCommit &);
          static DirectoryReader open(const ::org::apache::lucene::index::IndexWriter &);
          static DirectoryReader open(const ::org::apache::lucene::store::Directory &);
          static DirectoryReader open(const ::org::apache::lucene::store::Directory &, const ::java::util::Comparator &);
          static DirectoryReader open(const ::org::apache::lucene::index::IndexWriter &, jboolean, jboolean);
          static DirectoryReader open(const ::org::apache::lucene::index::IndexCommit &, jint, const ::java::util::Comparator &);
          static DirectoryReader openIfChanged(const DirectoryReader &);
          static DirectoryReader openIfChanged(const DirectoryReader &, const ::org::apache::lucene::index::IndexCommit &);
          static DirectoryReader openIfChanged(const DirectoryReader &, const ::org::apache::lucene::index::IndexWriter &);
          static DirectoryReader openIfChanged(const DirectoryReader &, const ::org::apache::lucene::index::IndexWriter &, jboolean);
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
        extern PyType_Def PY_TYPE_DEF(DirectoryReader);
        extern PyTypeObject *PY_TYPE(DirectoryReader);

        class t_DirectoryReader {
        public:
          PyObject_HEAD
          DirectoryReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DirectoryReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DirectoryReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DirectoryReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
