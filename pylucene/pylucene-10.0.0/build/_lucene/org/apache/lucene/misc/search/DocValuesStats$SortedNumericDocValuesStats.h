#ifndef org_apache_lucene_misc_search_DocValuesStats$SortedNumericDocValuesStats_H
#define org_apache_lucene_misc_search_DocValuesStats$SortedNumericDocValuesStats_H

#include "org/apache/lucene/misc/search/DocValuesStats.h"

namespace java {
  namespace lang {
    class Number;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace search {

          class DocValuesStats$SortedNumericDocValuesStats : public ::org::apache::lucene::misc::search::DocValuesStats {
           public:
            enum {
              mid_mean_6fb37e123fed7a1f,
              mid_stdev_6fb37e123fed7a1f,
              mid_sum_b9665294ea488d3c,
              mid_valuesCount_0f176418e3e16541,
              mid_variance_6fb37e123fed7a1f,
              mid_init_8e9f6225f14d0ebe,
              mid_hasValue_a8281eb3b9d9672d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DocValuesStats$SortedNumericDocValuesStats(jobject obj) : ::org::apache::lucene::misc::search::DocValuesStats(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DocValuesStats$SortedNumericDocValuesStats(const DocValuesStats$SortedNumericDocValuesStats& obj) : ::org::apache::lucene::misc::search::DocValuesStats(obj) {}

            jdouble mean() const;
            jdouble stdev() const;
            ::java::lang::Number sum() const;
            jlong valuesCount() const;
            jdouble variance() const;
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
          extern PyType_Def PY_TYPE_DEF(DocValuesStats$SortedNumericDocValuesStats);
          extern PyTypeObject *PY_TYPE(DocValuesStats$SortedNumericDocValuesStats);

          class t_DocValuesStats$SortedNumericDocValuesStats {
          public:
            PyObject_HEAD
            DocValuesStats$SortedNumericDocValuesStats object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DocValuesStats$SortedNumericDocValuesStats *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DocValuesStats$SortedNumericDocValuesStats&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DocValuesStats$SortedNumericDocValuesStats&, PyTypeObject *);
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
