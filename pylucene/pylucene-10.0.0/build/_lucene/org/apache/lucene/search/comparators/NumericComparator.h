#ifndef org_apache_lucene_search_comparators_NumericComparator_H
#define org_apache_lucene_search_comparators_NumericComparator_H

#include "org/apache/lucene/search/FieldComparator.h"

namespace java {
  namespace lang {
    class Number;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace comparators {

          class NumericComparator : public ::org::apache::lucene::search::FieldComparator {
           public:
            enum {
              mid_disableSkipping_e7bdbe105ce1bafb,
              mid_setSingleSort_e7bdbe105ce1bafb,
              mid_setTopValue_a01e288f5ff9f982,
              mid_sortableBytesToLong_2eea73e2513f100f,
              mid_missingValueAsComparableLong_0f176418e3e16541,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NumericComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NumericComparator(const NumericComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

            void disableSkipping() const;
            void setSingleSort() const;
            void setTopValue(const ::java::lang::Number &) const;
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
          extern PyType_Def PY_TYPE_DEF(NumericComparator);
          extern PyTypeObject *PY_TYPE(NumericComparator);

          class t_NumericComparator {
          public:
            PyObject_HEAD
            NumericComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_NumericComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const NumericComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const NumericComparator&, PyTypeObject *);
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
