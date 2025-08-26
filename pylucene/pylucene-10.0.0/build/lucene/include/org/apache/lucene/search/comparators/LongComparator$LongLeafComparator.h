#ifndef org_apache_lucene_search_comparators_LongComparator$LongLeafComparator_H
#define org_apache_lucene_search_comparators_LongComparator$LongLeafComparator_H

#include "org/apache/lucene/search/comparators/NumericComparator$NumericLeafComparator.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class Long;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace comparators {
          class LongComparator;
        }
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

          class LongComparator$LongLeafComparator : public ::org::apache::lucene::search::comparators::NumericComparator$NumericLeafComparator {
           public:
            enum {
              mid_init$_a013dcc3eb7cfc72,
              mid_compareBottom_a3904e10f5bb9437,
              mid_compareTop_a3904e10f5bb9437,
              mid_copy_645c25455f5b9b1c,
              mid_setBottom_8226bd0b0fc13dba,
              mid_bottomAsComparableLong_0f176418e3e16541,
              mid_topAsComparableLong_0f176418e3e16541,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LongComparator$LongLeafComparator(jobject obj) : ::org::apache::lucene::search::comparators::NumericComparator$NumericLeafComparator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongComparator$LongLeafComparator(const LongComparator$LongLeafComparator& obj) : ::org::apache::lucene::search::comparators::NumericComparator$NumericLeafComparator(obj) {}

            LongComparator$LongLeafComparator(const ::org::apache::lucene::search::comparators::LongComparator &, const ::org::apache::lucene::index::LeafReaderContext &);

            jint compareBottom(jint) const;
            jint compareTop(jint) const;
            void copy(jint, jint) const;
            void setBottom(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(LongComparator$LongLeafComparator);
          extern PyTypeObject *PY_TYPE(LongComparator$LongLeafComparator);

          class t_LongComparator$LongLeafComparator {
          public:
            PyObject_HEAD
            LongComparator$LongLeafComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_LongComparator$LongLeafComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const LongComparator$LongLeafComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const LongComparator$LongLeafComparator&, PyTypeObject *);
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
