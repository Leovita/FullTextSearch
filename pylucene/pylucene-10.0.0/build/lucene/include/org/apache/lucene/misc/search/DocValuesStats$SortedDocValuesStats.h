#ifndef org_apache_lucene_misc_search_DocValuesStats$SortedDocValuesStats_H
#define org_apache_lucene_misc_search_DocValuesStats$SortedDocValuesStats_H

#include "org/apache/lucene/misc/search/DocValuesStats.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
      namespace misc {
        namespace search {

          class DocValuesStats$SortedDocValuesStats : public ::org::apache::lucene::misc::search::DocValuesStats {
           public:
            enum {
              mid_doAccumulate_540b2b23d51b1efd,
              mid_init_03101e9518c66be0,
              mid_hasValue_ae22d3a856ad56f1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DocValuesStats$SortedDocValuesStats(jobject obj) : ::org::apache::lucene::misc::search::DocValuesStats(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DocValuesStats$SortedDocValuesStats(const DocValuesStats$SortedDocValuesStats& obj) : ::org::apache::lucene::misc::search::DocValuesStats(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(DocValuesStats$SortedDocValuesStats);
          extern PyTypeObject *PY_TYPE(DocValuesStats$SortedDocValuesStats);

          class t_DocValuesStats$SortedDocValuesStats {
          public:
            PyObject_HEAD
            DocValuesStats$SortedDocValuesStats object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DocValuesStats$SortedDocValuesStats *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DocValuesStats$SortedDocValuesStats&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DocValuesStats$SortedDocValuesStats&, PyTypeObject *);
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
