#ifndef org_apache_lucene_search_comparators_FloatComparator$FloatLeafComparator_H
#define org_apache_lucene_search_comparators_FloatComparator$FloatLeafComparator_H

#include "org/apache/lucene/search/comparators/NumericComparator$NumericLeafComparator.h"

namespace java {
  namespace lang {
    class Float;
    class Class;
  }
  namespace io {
    class IOException;
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
              mid_init$_b78ca3047ed888e3,
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
