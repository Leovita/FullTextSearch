#ifndef org_apache_lucene_misc_search_DocValuesStats$SortedDoubleDocValuesStats_H
#define org_apache_lucene_misc_search_DocValuesStats$SortedDoubleDocValuesStats_H

#include "org/apache/lucene/misc/search/DocValuesStats$SortedNumericDocValuesStats.h"

namespace java {
  namespace lang {
    class Double;
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

          class DocValuesStats$SortedDoubleDocValuesStats : public ::org::apache::lucene::misc::search::DocValuesStats$SortedNumericDocValuesStats {
           public:
            enum {
              mid_init$_ee46a189998009d6,
              mid_sum_4708af7d5ba009e9,
              mid_doAccumulate_8226bd0b0fc13dba,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DocValuesStats$SortedDoubleDocValuesStats(jobject obj) : ::org::apache::lucene::misc::search::DocValuesStats$SortedNumericDocValuesStats(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DocValuesStats$SortedDoubleDocValuesStats(const DocValuesStats$SortedDoubleDocValuesStats& obj) : ::org::apache::lucene::misc::search::DocValuesStats$SortedNumericDocValuesStats(obj) {}

            DocValuesStats$SortedDoubleDocValuesStats(const ::java::lang::String &);

            ::java::lang::Double sum() const;
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
          extern PyType_Def PY_TYPE_DEF(DocValuesStats$SortedDoubleDocValuesStats);
          extern PyTypeObject *PY_TYPE(DocValuesStats$SortedDoubleDocValuesStats);

          class t_DocValuesStats$SortedDoubleDocValuesStats {
          public:
            PyObject_HEAD
            DocValuesStats$SortedDoubleDocValuesStats object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DocValuesStats$SortedDoubleDocValuesStats *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DocValuesStats$SortedDoubleDocValuesStats&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DocValuesStats$SortedDoubleDocValuesStats&, PyTypeObject *);
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
