#ifndef org_apache_lucene_misc_search_DocValuesStats$LongDocValuesStats_H
#define org_apache_lucene_misc_search_DocValuesStats$LongDocValuesStats_H

#include "org/apache/lucene/misc/search/DocValuesStats$NumericDocValuesStats.h"

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

          class DocValuesStats$LongDocValuesStats : public ::org::apache::lucene::misc::search::DocValuesStats$NumericDocValuesStats {
           public:
            enum {
              mid_init$_0d82408c6e55bc30,
              mid_sum_34383b55cea8435b,
              mid_doAccumulate_540b2b23d51b1efd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DocValuesStats$LongDocValuesStats(jobject obj) : ::org::apache::lucene::misc::search::DocValuesStats$NumericDocValuesStats(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DocValuesStats$LongDocValuesStats(const DocValuesStats$LongDocValuesStats& obj) : ::org::apache::lucene::misc::search::DocValuesStats$NumericDocValuesStats(obj) {}

            DocValuesStats$LongDocValuesStats(const ::java::lang::String &);

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
          extern PyType_Def PY_TYPE_DEF(DocValuesStats$LongDocValuesStats);
          extern PyTypeObject *PY_TYPE(DocValuesStats$LongDocValuesStats);

          class t_DocValuesStats$LongDocValuesStats {
          public:
            PyObject_HEAD
            DocValuesStats$LongDocValuesStats object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DocValuesStats$LongDocValuesStats *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DocValuesStats$LongDocValuesStats&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DocValuesStats$LongDocValuesStats&, PyTypeObject *);
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
