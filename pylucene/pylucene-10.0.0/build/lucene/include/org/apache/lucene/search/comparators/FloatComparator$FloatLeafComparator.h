#ifndef org_apache_lucene_search_comparators_FloatComparator$FloatLeafComparator_H
#define org_apache_lucene_search_comparators_FloatComparator$FloatLeafComparator_H

#include "org/apache/lucene/search/comparators/NumericComparator$NumericLeafComparator.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Float;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace comparators {
          class FloatComparator;
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

          class FloatComparator$FloatLeafComparator : public ::org::apache::lucene::search::comparators::NumericComparator$NumericLeafComparator {
           public:
            enum {
              mid_init$_93c4cc7050dc88ae,
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

            explicit FloatComparator$FloatLeafComparator(jobject obj) : ::org::apache::lucene::search::comparators::NumericComparator$NumericLeafComparator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FloatComparator$FloatLeafComparator(const FloatComparator$FloatLeafComparator& obj) : ::org::apache::lucene::search::comparators::NumericComparator$NumericLeafComparator(obj) {}

            FloatComparator$FloatLeafComparator(const ::org::apache::lucene::search::comparators::FloatComparator &, const ::org::apache::lucene::index::LeafReaderContext &);

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
          extern PyType_Def PY_TYPE_DEF(FloatComparator$FloatLeafComparator);
          extern PyTypeObject *PY_TYPE(FloatComparator$FloatLeafComparator);

          class t_FloatComparator$FloatLeafComparator {
          public:
            PyObject_HEAD
            FloatComparator$FloatLeafComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FloatComparator$FloatLeafComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FloatComparator$FloatLeafComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FloatComparator$FloatLeafComparator&, PyTypeObject *);
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
