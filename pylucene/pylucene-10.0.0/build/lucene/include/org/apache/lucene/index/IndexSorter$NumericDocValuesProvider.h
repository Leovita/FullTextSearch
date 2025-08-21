#ifndef org_apache_lucene_index_IndexSorter$NumericDocValuesProvider_H
#define org_apache_lucene_index_IndexSorter$NumericDocValuesProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class NumericDocValues;
        class LeafReader;
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

        class IndexSorter$NumericDocValuesProvider : public ::java::lang::Object {
         public:
          enum {
            mid_get_e8cec232f90aacda,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSorter$NumericDocValuesProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSorter$NumericDocValuesProvider(const IndexSorter$NumericDocValuesProvider& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::NumericDocValues get(const ::org::apache::lucene::index::LeafReader &) const;
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
        extern PyType_Def PY_TYPE_DEF(IndexSorter$NumericDocValuesProvider);
        extern PyTypeObject *PY_TYPE(IndexSorter$NumericDocValuesProvider);

        class t_IndexSorter$NumericDocValuesProvider {
        public:
          PyObject_HEAD
          IndexSorter$NumericDocValuesProvider object;
          static PyObject *wrap_Object(const IndexSorter$NumericDocValuesProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
