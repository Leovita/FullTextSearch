#ifndef org_apache_lucene_misc_search_DocValuesStats$SortedLongDocValuesStats_H
#define org_apache_lucene_misc_search_DocValuesStats$SortedLongDocValuesStats_H

#include "org/apache/lucene/misc/search/DocValuesStats$SortedNumericDocValuesStats.h"

namespace java {
  namespace lang {
    class String;
    class Long;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace search {

          class DocValuesStats$SortedLongDocValuesStats : public ::org::apache::lucene::misc::search::DocValuesStats$SortedNumericDocValuesStats {
           public:
            enum {
              mid_init$_ee46a189998009d6,
              mid_sum_c4ac57d488686cc8,
              mid_doAccumulate_8226bd0b0fc13dba,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DocValuesStats$SortedLongDocValuesStats(jobject obj) : ::org::apache::lucene::misc::search::DocValuesStats$SortedNumericDocValuesStats(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DocValuesStats$SortedLongDocValuesStats(const DocValuesStats$SortedLongDocValuesStats& obj) : ::org::apache::lucene::misc::search::DocValuesStats$SortedNumericDocValuesStats(obj) {}

            DocValuesStats$SortedLongDocValuesStats(const ::java::lang::String &);

            ::java::lang::Long sum() const;
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
          extern PyType_Def PY_TYPE_DEF(DocValuesStats$SortedLongDocValuesStats);
          extern PyTypeObject *PY_TYPE(DocValuesStats$SortedLongDocValuesStats);

          class t_DocValuesStats$SortedLongDocValuesStats {
          public:
            PyObject_HEAD
            DocValuesStats$SortedLongDocValuesStats object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DocValuesStats$SortedLongDocValuesStats *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DocValuesStats$SortedLongDocValuesStats&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DocValuesStats$SortedLongDocValuesStats&, PyTypeObject *);
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
