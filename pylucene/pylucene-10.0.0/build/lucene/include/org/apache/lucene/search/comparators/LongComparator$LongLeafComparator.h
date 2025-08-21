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
              mid_init$_79ee5fa27318fdfb,
              mid_compareBottom_3c9bba330f083871,
              mid_compareTop_3c9bba330f083871,
              mid_copy_e13cff512ebda969,
              mid_setBottom_540b2b23d51b1efd,
              mid_bottomAsComparableLong_16939d9d0a9a9721,
              mid_topAsComparableLong_16939d9d0a9a9721,
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
