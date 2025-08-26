#ifndef org_apache_lucene_misc_search_DocValuesStats_H
#define org_apache_lucene_misc_search_DocValuesStats_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace search {

          class DocValuesStats : public ::java::lang::Object {
           public:
            enum {
              mid_count_bd89ce15dad49192,
              mid_field_e7df854526d67fa3,
              mid_max_4819806f62f1360a,
              mid_min_4819806f62f1360a,
              mid_missing_bd89ce15dad49192,
              mid_doAccumulate_8226bd0b0fc13dba,
              mid_init_8e9f6225f14d0ebe,
              mid_hasValue_a8281eb3b9d9672d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DocValuesStats(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DocValuesStats(const DocValuesStats& obj) : ::java::lang::Object(obj) {}

            jint count() const;
            ::java::lang::String field() const;
            ::java::lang::Object max$() const;
            ::java::lang::Object min$() const;
            jint missing() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(DocValuesStats);
          extern PyTypeObject *PY_TYPE(DocValuesStats);

          class t_DocValuesStats {
          public:
            PyObject_HEAD
            DocValuesStats object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DocValuesStats *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DocValuesStats&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DocValuesStats&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
