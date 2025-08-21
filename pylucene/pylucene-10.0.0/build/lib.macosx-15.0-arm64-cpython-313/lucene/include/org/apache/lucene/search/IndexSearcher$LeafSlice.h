#ifndef org_apache_lucene_search_IndexSearcher$LeafSlice_H
#define org_apache_lucene_search_IndexSearcher$LeafSlice_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher$LeafReaderContextPartition;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class IndexSearcher$LeafSlice : public ::java::lang::Object {
         public:
          enum {
            mid_init$_9425cd4f62c94bce,
            mid_getMaxDocs_20fbf7565993c3d7,
            max_mid
          };

          enum {
            fid_partitions,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSearcher$LeafSlice(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSearcher$LeafSlice(const IndexSearcher$LeafSlice& obj) : ::java::lang::Object(obj) {}

          JArray< ::org::apache::lucene::search::IndexSearcher$LeafReaderContextPartition > _get_partitions() const;

          IndexSearcher$LeafSlice(const ::java::util::List &);

          jint getMaxDocs() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(IndexSearcher$LeafSlice);
        extern PyTypeObject *PY_TYPE(IndexSearcher$LeafSlice);

        class t_IndexSearcher$LeafSlice {
        public:
          PyObject_HEAD
          IndexSearcher$LeafSlice object;
          static PyObject *wrap_Object(const IndexSearcher$LeafSlice&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
