#ifndef org_apache_lucene_search_comparators_DoubleComparator_H
#define org_apache_lucene_search_comparators_DoubleComparator_H

#include "org/apache/lucene/search/comparators/NumericComparator.h"

namespace java {
  namespace lang {
    class Class;
    class Double;
    class String;
  }
  namespace io {
    class IOException;
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

          class DoubleComparator : public ::org::apache::lucene::search::comparators::NumericComparator {
           public:
            enum {
              mid_init$_0c0a4b132fd0e363,
              mid_compare_7f27cf81a85a97e9,
              mid_getLeafComparator_84b03b9ed9bc3019,
              mid_setTopValue_0adc5c909a7e3530,
              mid_value_97d0bd4a1c681f44,
              mid_sortableBytesToLong_2eea73e2513f100f,
              mid_missingValueAsComparableLong_0f176418e3e16541,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DoubleComparator(jobject obj) : ::org::apache::lucene::search::comparators::NumericComparator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DoubleComparator(const DoubleComparator& obj) : ::org::apache::lucene::search::comparators::NumericComparator(obj) {}

            DoubleComparator(jint, const ::java::lang::String &, const ::java::lang::Double &, jboolean, const ::org::apache::lucene::search::Pruning &);

            jint compare(jint, jint) const;
            ::org::apache::lucene::search::LeafFieldComparator getLeafComparator(const ::org::apache::lucene::index::LeafReaderContext &) const;
            void setTopValue(const ::java::lang::Double &) const;
            ::java::lang::Double value(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(DoubleComparator);
          extern PyTypeObject *PY_TYPE(DoubleComparator);

          class t_DoubleComparator {
          public:
            PyObject_HEAD
            DoubleComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DoubleComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DoubleComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DoubleComparator&, PyTypeObject *);
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
