#ifndef org_apache_lucene_misc_search_DocValuesStats$NumericDocValuesStats_H
#define org_apache_lucene_misc_search_DocValuesStats$NumericDocValuesStats_H

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

          class DocValuesStats$NumericDocValuesStats : public ::org::apache::lucene::misc::search::DocValuesStats {
           public:
            enum {
              mid_mean_32caabaad86c508b,
              mid_stdev_32caabaad86c508b,
              mid_sum_1b3282bb4db06655,
              mid_variance_32caabaad86c508b,
              mid_init_03101e9518c66be0,
              mid_hasValue_ae22d3a856ad56f1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DocValuesStats$NumericDocValuesStats(jobject obj) : ::org::apache::lucene::misc::search::DocValuesStats(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DocValuesStats$NumericDocValuesStats(const DocValuesStats$NumericDocValuesStats& obj) : ::org::apache::lucene::misc::search::DocValuesStats(obj) {}

            jdouble mean() const;
            jdouble stdev() const;
            ::java::lang::Number sum() const;
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
          extern PyType_Def PY_TYPE_DEF(DocValuesStats$NumericDocValuesStats);
          extern PyTypeObject *PY_TYPE(DocValuesStats$NumericDocValuesStats);

          class t_DocValuesStats$NumericDocValuesStats {
          public:
            PyObject_HEAD
            DocValuesStats$NumericDocValuesStats object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DocValuesStats$NumericDocValuesStats *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DocValuesStats$NumericDocValuesStats&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DocValuesStats$NumericDocValuesStats&, PyTypeObject *);
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
