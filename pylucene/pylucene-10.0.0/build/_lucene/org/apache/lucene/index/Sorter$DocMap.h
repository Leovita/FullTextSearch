#ifndef org_apache_lucene_index_Sorter$DocMap_H
#define org_apache_lucene_index_Sorter$DocMap_H

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

        class Sorter$DocMap : public ::java::lang::Object {
         public:
          enum {
            mid_newToOld_a3904e10f5bb9437,
            mid_oldToNew_a3904e10f5bb9437,
            mid_size_bd89ce15dad49192,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Sorter$DocMap(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Sorter$DocMap(const Sorter$DocMap& obj) : ::java::lang::Object(obj) {}

          jint newToOld(jint) const;
          jint oldToNew(jint) const;
          jint size() const;
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
        extern PyType_Def PY_TYPE_DEF(Sorter$DocMap);
        extern PyTypeObject *PY_TYPE(Sorter$DocMap);

        class t_Sorter$DocMap {
        public:
          PyObject_HEAD
          Sorter$DocMap object;
          static PyObject *wrap_Object(const Sorter$DocMap&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
