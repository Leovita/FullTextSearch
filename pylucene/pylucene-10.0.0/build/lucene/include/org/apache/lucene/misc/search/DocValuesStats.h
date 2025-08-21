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
              mid_count_20fbf7565993c3d7,
              mid_field_09a7afff1868fc5e,
              mid_max_5655ed8670534604,
              mid_min_5655ed8670534604,
              mid_missing_20fbf7565993c3d7,
              mid_doAccumulate_540b2b23d51b1efd,
              mid_init_03101e9518c66be0,
              mid_hasValue_ae22d3a856ad56f1,
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
