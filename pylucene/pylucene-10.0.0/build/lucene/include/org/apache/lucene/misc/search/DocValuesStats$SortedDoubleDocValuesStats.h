#ifndef org_apache_lucene_misc_search_DocValuesStats$SortedDoubleDocValuesStats_H
#define org_apache_lucene_misc_search_DocValuesStats$SortedDoubleDocValuesStats_H

#include "org/apache/lucene/misc/search/DocValuesStats$SortedNumericDocValuesStats.h"

namespace java {
  namespace lang {
    class String;
    class Double;
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
              mid_init$_0d82408c6e55bc30,
              mid_sum_3427789f502c230e,
              mid_doAccumulate_540b2b23d51b1efd,
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
