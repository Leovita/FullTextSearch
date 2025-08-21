#ifndef org_apache_lucene_search_comparators_DoubleComparator_H
#define org_apache_lucene_search_comparators_DoubleComparator_H

#include "org/apache/lucene/search/comparators/NumericComparator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Pruning;
        class LeafFieldComparator;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Double;
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
              mid_init$_8708cc5a81ea4d04,
              mid_compare_7f733b5d08bb5ec4,
              mid_getLeafComparator_d019da77a226431f,
              mid_setTopValue_6155374895b9fa17,
              mid_value_4bb5f70f2558e470,
              mid_missingValueAsComparableLong_16939d9d0a9a9721,
              mid_sortableBytesToLong_7dab5080ccb55d77,
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
