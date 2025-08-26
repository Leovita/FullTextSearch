#ifndef org_apache_lucene_search_comparators_DocComparator_H
#define org_apache_lucene_search_comparators_DocComparator_H

#include "org/apache/lucene/search/FieldComparator.h"

namespace java {
  namespace lang {
    class Integer;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class LeafFieldComparator;
        class Pruning;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace comparators {

          class DocComparator : public ::org::apache::lucene::search::FieldComparator {
           public:
            enum {
              mid_init$_55751aa7ace456c0,
              mid_compare_7f27cf81a85a97e9,
              mid_getLeafComparator_84b03b9ed9bc3019,
              mid_setTopValue_ded8ed6494d3b015,
              mid_value_557ffba2870d3111,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DocComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DocComparator(const DocComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

            DocComparator(jint, jboolean, const ::org::apache::lucene::search::Pruning &);

            jint compare(jint, jint) const;
            ::org::apache::lucene::search::LeafFieldComparator getLeafComparator(const ::org::apache::lucene::index::LeafReaderContext &) const;
            void setTopValue(const ::java::lang::Integer &) const;
            ::java::lang::Integer value(jint) const;
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
      namespace search {
        namespace comparators {
          extern PyType_Def PY_TYPE_DEF(DocComparator);
          extern PyTypeObject *PY_TYPE(DocComparator);

          class t_DocComparator {
          public:
            PyObject_HEAD
            DocComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DocComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DocComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DocComparator&, PyTypeObject *);
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
