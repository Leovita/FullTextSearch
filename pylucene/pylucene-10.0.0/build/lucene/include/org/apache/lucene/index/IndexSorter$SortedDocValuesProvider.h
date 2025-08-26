#ifndef org_apache_lucene_index_IndexSorter$SortedDocValuesProvider_H
#define org_apache_lucene_index_IndexSorter$SortedDocValuesProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReader;
        class SortedDocValues;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexSorter$SortedDocValuesProvider : public ::java::lang::Object {
         public:
          enum {
            mid_get_bde7fd5be89ace09,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSorter$SortedDocValuesProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSorter$SortedDocValuesProvider(const IndexSorter$SortedDocValuesProvider& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::SortedDocValues get(const ::org::apache::lucene::index::LeafReader &) const;
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
        extern PyType_Def PY_TYPE_DEF(IndexSorter$SortedDocValuesProvider);
        extern PyTypeObject *PY_TYPE(IndexSorter$SortedDocValuesProvider);

        class t_IndexSorter$SortedDocValuesProvider {
        public:
          PyObject_HEAD
          IndexSorter$SortedDocValuesProvider object;
          static PyObject *wrap_Object(const IndexSorter$SortedDocValuesProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
