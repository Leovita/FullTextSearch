#ifndef org_apache_lucene_search_comparators_LongComparator_H
#define org_apache_lucene_search_comparators_LongComparator_H

#include "org/apache/lucene/search/comparators/NumericComparator.h"

namespace java {
  namespace lang {
    class Class;
    class Long;
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

          class LongComparator : public ::org::apache::lucene::search::comparators::NumericComparator {
           public:
            enum {
              mid_init$_799b367721077ddd,
              mid_compare_7f27cf81a85a97e9,
              mid_getLeafComparator_84b03b9ed9bc3019,
              mid_setTopValue_c23189ad2db23734,
              mid_value_5a84ffd8c19b3c2b,
              mid_sortableBytesToLong_2eea73e2513f100f,
              mid_missingValueAsComparableLong_0f176418e3e16541,
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
