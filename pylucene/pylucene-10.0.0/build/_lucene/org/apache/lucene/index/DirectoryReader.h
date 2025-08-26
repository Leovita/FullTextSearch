#ifndef org_apache_lucene_index_DirectoryReader_H
#define org_apache_lucene_index_DirectoryReader_H

#include "org/apache/lucene/index/BaseCompositeReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace index {
        class IndexCommit;
        class IndexWriter;
        class DirectoryReader;
        class LeafReader;
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
  namespace util {
    class Comparator;
    class List;
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
            mid_directory_0b8988a9a36f43ec,
            mid_getIndexCommit_3f5d748efdffe9e0,
            mid_getVersion_0f176418e3e16541,
            mid_indexExists_32385df1b55970bb,
            mid_isCurrent_9aa4f33e82ea333f,
            mid_listCommits_3987047513a78f19,
            mid_open_f3cbd71bf1d7f0c6,
            mid_open_aa7d631f758a2283,
            mid_open_ca7780014fe99b2c,
            mid_open_3c0811c128ca7107,
            mid_open_01c8c62be8953d9f,
            mid_open_e5048006742f0c8d,
            mid_openIfChanged_f4693940cb629eaf,
            mid_openIfChanged_e47c36271bbea3d0,
            mid_openIfChanged_ea0ad5f5f7e52553,
            mid_openIfChanged_d05c6a1bbee53789,
            mid_doOpenIfChanged_a8b6bb613ad0bc66,
            mid_doOpenIfChanged_9a09931027467e73,
            mid_doOpenIfChanged_f3cbd71bf1d7f0c6,
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
