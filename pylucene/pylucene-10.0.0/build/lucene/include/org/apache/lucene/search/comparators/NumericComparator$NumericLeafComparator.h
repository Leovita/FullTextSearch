#ifndef org_apache_lucene_search_comparators_NumericComparator$NumericLeafComparator_H
#define org_apache_lucene_search_comparators_NumericComparator$NumericLeafComparator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
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
        class DocIdSetIterator;
        namespace comparators {
          class NumericComparator;
        }
        class LeafFieldComparator;
        class Scorable;
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

          class NumericComparator$NumericLeafComparator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_841969e36986144a,
              mid_competitiveIterator_b78969502cbf4939,
              mid_copy_645c25455f5b9b1c,
              mid_setBottom_8226bd0b0fc13dba,
              mid_setHitsThresholdReached_e7bdbe105ce1bafb,
              mid_setScorer_c06bdf7d53c6460a,
              mid_bottomAsComparableLong_0f176418e3e16541,
              mid_topAsComparableLong_0f176418e3e16541,
              mid_getNumericDocValues_2a561a5a4dabb45b,
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
