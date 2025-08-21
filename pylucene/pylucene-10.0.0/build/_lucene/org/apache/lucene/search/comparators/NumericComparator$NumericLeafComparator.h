#ifndef org_apache_lucene_search_comparators_NumericComparator$NumericLeafComparator_H
#define org_apache_lucene_search_comparators_NumericComparator$NumericLeafComparator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable;
        namespace comparators {
          class NumericComparator;
        }
        class DocIdSetIterator;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace comparators {

          class NumericComparator$NumericLeafComparator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b54ad2ad23752224,
              mid_competitiveIterator_fc644a826c65d236,
              mid_copy_e13cff512ebda969,
              mid_setBottom_540b2b23d51b1efd,
              mid_setHitsThresholdReached_3720c61b0679eb3e,
              mid_setScorer_dd42dde4c0a7db1e,
              mid_bottomAsComparableLong_16939d9d0a9a9721,
              mid_topAsComparableLong_16939d9d0a9a9721,
              mid_getNumericDocValues_cb9185e284e51e2c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NumericComparator$NumericLeafComparator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NumericComparator$NumericLeafComparator(const NumericComparator$NumericLeafComparator& obj) : ::java::lang::Object(obj) {}

            NumericComparator$NumericLeafComparator(const ::org::apache::lucene::search::comparators::NumericComparator &, const ::org::apache::lucene::index::LeafReaderContext &);

            ::org::apache::lucene::search::DocIdSetIterator competitiveIterator() const;
            void copy(jint, jint) const;
            void setBottom(jint) const;
            void setHitsThresholdReached() const;
            void setScorer(const ::org::apache::lucene::search::Scorable &) const;
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
          extern PyType_Def PY_TYPE_DEF(NumericComparator$NumericLeafComparator);
          extern PyTypeObject *PY_TYPE(NumericComparator$NumericLeafComparator);

          class t_NumericComparator$NumericLeafComparator {
          public:
            PyObject_HEAD
            NumericComparator$NumericLeafComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_NumericComparator$NumericLeafComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const NumericComparator$NumericLeafComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const NumericComparator$NumericLeafComparator&, PyTypeObject *);
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
