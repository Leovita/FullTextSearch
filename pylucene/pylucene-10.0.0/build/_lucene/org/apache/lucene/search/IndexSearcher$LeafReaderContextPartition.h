#ifndef org_apache_lucene_search_IndexSearcher$LeafReaderContextPartition_H
#define org_apache_lucene_search_IndexSearcher$LeafReaderContextPartition_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher$LeafReaderContextPartition;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class IndexSearcher$LeafReaderContextPartition : public ::java::lang::Object {
         public:
          enum {
            mid_createForEntireSegment_163de04b946e2971,
            mid_createFromAndTo_98e50b930dd4087c,
            max_mid
          };

          enum {
            fid_ctx,
            fid_maxDocId,
            fid_minDocId,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSearcher$LeafReaderContextPartition(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSearcher$LeafReaderContextPartition(const IndexSearcher$LeafReaderContextPartition& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::LeafReaderContext _get_ctx() const;
          jint _get_maxDocId() const;
          jint _get_minDocId() const;

          static IndexSearcher$LeafReaderContextPartition createForEntireSegment(const ::org::apache::lucene::index::LeafReaderContext &);
          static IndexSearcher$LeafReaderContextPartition createFromAndTo(const ::org::apache::lucene::index::LeafReaderContext &, jint, jint);
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
        extern PyType_Def PY_TYPE_DEF(IndexSearcher$LeafReaderContextPartition);
        extern PyTypeObject *PY_TYPE(IndexSearcher$LeafReaderContextPartition);

        class t_IndexSearcher$LeafReaderContextPartition {
        public:
          PyObject_HEAD
          IndexSearcher$LeafReaderContextPartition object;
          static PyObject *wrap_Object(const IndexSearcher$LeafReaderContextPartition&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
