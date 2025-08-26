#ifndef org_apache_lucene_index_MergeState$DocMap_H
#define org_apache_lucene_index_MergeState$DocMap_H

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

        class MergeState$DocMap : public ::java::lang::Object {
         public:
          enum {
            mid_get_a3904e10f5bb9437,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergeState$DocMap(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergeState$DocMap(const MergeState$DocMap& obj) : ::java::lang::Object(obj) {}

          jint get(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(MergeState$DocMap);
        extern PyTypeObject *PY_TYPE(MergeState$DocMap);

        class t_MergeState$DocMap {
        public:
          PyObject_HEAD
          MergeState$DocMap object;
          static PyObject *wrap_Object(const MergeState$DocMap&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
