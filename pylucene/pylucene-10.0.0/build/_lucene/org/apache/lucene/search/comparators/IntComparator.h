#ifndef org_apache_lucene_search_comparators_IntComparator_H
#define org_apache_lucene_search_comparators_IntComparator_H

#include "org/apache/lucene/search/comparators/NumericComparator.h"

namespace java {
  namespace lang {
    class Integer;
    class Class;
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

          class IntComparator : public ::org::apache::lucene::search::comparators::NumericComparator {
           public:
            enum {
              mid_init$_f133447687e3c40a,
              mid_compare_7f27cf81a85a97e9,
              mid_getLeafComparator_84b03b9ed9bc3019,
              mid_setTopValue_ded8ed6494d3b015,
              mid_value_557ffba2870d3111,
              mid_sortableBytesToLong_2eea73e2513f100f,
              mid_missingValueAsComparableLong_0f176418e3e16541,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntComparator(jobject obj) : ::org::apache::lucene::search::comparators::NumericComparator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntComparator(const IntComparator& obj) : ::org::apache::lucene::search::comparators::NumericComparator(obj) {}

            IntComparator(jint, const ::java::lang::String &, const ::java::lang::Integer &, jboolean, const ::org::apache::lucene::search::Pruning &);

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
          extern PyType_Def PY_TYPE_DEF(IntComparator);
          extern PyTypeObject *PY_TYPE(IntComparator);

          class t_IntComparator {
          public:
            PyObject_HEAD
            IntComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IntComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntComparator&, PyTypeObject *);
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
