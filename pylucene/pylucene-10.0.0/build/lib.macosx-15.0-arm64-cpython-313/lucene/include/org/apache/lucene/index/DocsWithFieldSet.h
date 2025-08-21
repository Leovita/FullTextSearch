#ifndef org_apache_lucene_index_DocsWithFieldSet_H
#define org_apache_lucene_index_DocsWithFieldSet_H

#include "org/apache/lucene/search/DocIdSet.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSetIterator;
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
      namespace index {

        class DocsWithFieldSet : public ::org::apache::lucene::search::DocIdSet {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_add_540b2b23d51b1efd,
            mid_cardinality_20fbf7565993c3d7,
            mid_iterator_fc644a826c65d236,
            mid_ramBytesUsed_16939d9d0a9a9721,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocsWithFieldSet(jobject obj) : ::org::apache::lucene::search::DocIdSet(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocsWithFieldSet(const DocsWithFieldSet& obj) : ::org::apache::lucene::search::DocIdSet(obj) {}

          DocsWithFieldSet();

          void add(jint) const;
          jint cardinality() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jlong ramBytesUsed() const;
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
        extern PyType_Def PY_TYPE_DEF(DocsWithFieldSet);
        extern PyTypeObject *PY_TYPE(DocsWithFieldSet);

        class t_DocsWithFieldSet {
        public:
          PyObject_HEAD
          DocsWithFieldSet object;
          static PyObject *wrap_Object(const DocsWithFieldSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
