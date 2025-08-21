#ifndef org_apache_lucene_search_comparators_IntComparator_H
#define org_apache_lucene_search_comparators_IntComparator_H

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
  namespace lang {
    class Integer;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
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
              mid_init$_15203498b7459f35,
              mid_compare_7f733b5d08bb5ec4,
              mid_getLeafComparator_d019da77a226431f,
              mid_setTopValue_9d2998185e8f6735,
              mid_value_106c45aea76a783a,
              mid_missingValueAsComparableLong_16939d9d0a9a9721,
              mid_sortableBytesToLong_7dab5080ccb55d77,
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
