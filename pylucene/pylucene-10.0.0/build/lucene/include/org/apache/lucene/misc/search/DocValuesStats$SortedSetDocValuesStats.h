#ifndef org_apache_lucene_misc_search_DocValuesStats$SortedSetDocValuesStats_H
#define org_apache_lucene_misc_search_DocValuesStats$SortedSetDocValuesStats_H

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

          class DocValuesStats$SortedSetDocValuesStats : public ::org::apache::lucene::misc::search::DocValuesStats {
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

            explicit DocValuesStats$SortedSetDocValuesStats(jobject obj) : ::org::apache::lucene::misc::search::DocValuesStats(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DocValuesStats$SortedSetDocValuesStats(const DocValuesStats$SortedSetDocValuesStats& obj) : ::org::apache::lucene::misc::search::DocValuesStats(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(DocValuesStats$SortedSetDocValuesStats);
          extern PyTypeObject *PY_TYPE(DocValuesStats$SortedSetDocValuesStats);

          class t_DocValuesStats$SortedSetDocValuesStats {
          public:
            PyObject_HEAD
            DocValuesStats$SortedSetDocValuesStats object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DocValuesStats$SortedSetDocValuesStats *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DocValuesStats$SortedSetDocValuesStats&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DocValuesStats$SortedSetDocValuesStats&, PyTypeObject *);
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
