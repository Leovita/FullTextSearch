#ifndef org_apache_lucene_index_IndexSorter$DocComparator_H
#define org_apache_lucene_index_IndexSorter$DocComparator_H

#include "java/lang/Object.h"

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

        class IndexSorter$DocComparator : public ::java::lang::Object {
         public:
          enum {
            mid_compare_7f27cf81a85a97e9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSorter$DocComparator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSorter$DocComparator(const IndexSorter$DocComparator& obj) : ::java::lang::Object(obj) {}

          jint compare(jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(IndexSorter$DocComparator);
        extern PyTypeObject *PY_TYPE(IndexSorter$DocComparator);

        class t_IndexSorter$DocComparator {
        public:
          PyObject_HEAD
          IndexSorter$DocComparator object;
          static PyObject *wrap_Object(const IndexSorter$DocComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
