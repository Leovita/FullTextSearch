#ifndef org_apache_lucene_search_comparators_LongComparator_H
#define org_apache_lucene_search_comparators_LongComparator_H

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
    class Long;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace comparators {

          class LongComparator : public ::org::apache::lucene::search::comparators::NumericComparator {
           public:
            enum {
              mid_init$_adc4eab86b1fca6d,
              mid_compare_7f733b5d08bb5ec4,
              mid_getLeafComparator_d019da77a226431f,
              mid_setTopValue_da7b5cb3a904717b,
              mid_value_398464d497590ea2,
              mid_missingValueAsComparableLong_16939d9d0a9a9721,
              mid_sortableBytesToLong_7dab5080ccb55d77,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LongComparator(jobject obj) : ::org::apache::lucene::search::comparators::NumericComparator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongComparator(const LongComparator& obj) : ::org::apache::lucene::search::comparators::NumericComparator(obj) {}

            LongComparator(jint, const ::java::lang::String &, const ::java::lang::Long &, jboolean, const ::org::apache::lucene::search::Pruning &);

            jint compare(jint, jint) const;
            ::org::apache::lucene::search::LeafFieldComparator getLeafComparator(const ::org::apache::lucene::index::LeafReaderContext &) const;
            void setTopValue(const ::java::lang::Long &) const;
            ::java::lang::Long value(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(LongComparator);
          extern PyTypeObject *PY_TYPE(LongComparator);

          class t_LongComparator {
          public:
            PyObject_HEAD
            LongComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_LongComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const LongComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const LongComparator&, PyTypeObject *);
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
