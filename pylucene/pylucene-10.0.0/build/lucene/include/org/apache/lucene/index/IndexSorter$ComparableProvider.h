#ifndef org_apache_lucene_index_IndexSorter$ComparableProvider_H
#define org_apache_lucene_index_IndexSorter$ComparableProvider_H

#include "java/lang/Object.h"

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

        class IndexSorter$ComparableProvider : public ::java::lang::Object {
         public:
          enum {
            mid_getAsComparableLong_7b22650fccb5d574,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSorter$ComparableProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSorter$ComparableProvider(const IndexSorter$ComparableProvider& obj) : ::java::lang::Object(obj) {}

          jlong getAsComparableLong(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(IndexSorter$ComparableProvider);
        extern PyTypeObject *PY_TYPE(IndexSorter$ComparableProvider);

        class t_IndexSorter$ComparableProvider {
        public:
          PyObject_HEAD
          IndexSorter$ComparableProvider object;
          static PyObject *wrap_Object(const IndexSorter$ComparableProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
