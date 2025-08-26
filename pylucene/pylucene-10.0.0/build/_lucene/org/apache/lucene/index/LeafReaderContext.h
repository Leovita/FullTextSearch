#ifndef org_apache_lucene_index_LeafReaderContext_H
#define org_apache_lucene_index_LeafReaderContext_H

#include "org/apache/lucene/index/IndexReaderContext.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReader;
        class LeafReaderContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class LeafReaderContext : public ::org::apache::lucene::index::IndexReaderContext {
         public:
          enum {
            mid_children_1387e1e2702ac173,
            mid_leaves_1387e1e2702ac173,
            mid_reader_de30c7b0a9df694f,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          enum {
            fid_docBase,
            fid_ord,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LeafReaderContext(jobject obj) : ::org::apache::lucene::index::IndexReaderContext(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LeafReaderContext(const LeafReaderContext& obj) : ::org::apache::lucene::index::IndexReaderContext(obj) {}

          jint _get_docBase() const;
          jint _get_ord() const;

          ::java::util::List children() const;
          ::java::util::List leaves() const;
          ::org::apache::lucene::index::LeafReader reader() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(LeafReaderContext);
        extern PyTypeObject *PY_TYPE(LeafReaderContext);

        class t_LeafReaderContext {
        public:
          PyObject_HEAD
          LeafReaderContext object;
          static PyObject *wrap_Object(const LeafReaderContext&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
