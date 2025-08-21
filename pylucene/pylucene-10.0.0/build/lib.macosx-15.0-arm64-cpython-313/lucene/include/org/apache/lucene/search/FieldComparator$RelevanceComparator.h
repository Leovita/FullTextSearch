#ifndef org_apache_lucene_search_FieldComparator$RelevanceComparator_H
#define org_apache_lucene_search_FieldComparator$RelevanceComparator_H

#include "org/apache/lucene/search/FieldComparator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable;
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
    class Float;
    class Class;
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

        class FieldComparator$RelevanceComparator : public ::org::apache::lucene::search::FieldComparator {
         public:
          enum {
            mid_init$_540b2b23d51b1efd,
            mid_compare_7f733b5d08bb5ec4,
            mid_compareBottom_3c9bba330f083871,
            mid_compareTop_3c9bba330f083871,
            mid_compareValues_d9b80a249b891431,
            mid_copy_e13cff512ebda969,
            mid_getLeafComparator_d019da77a226431f,
            mid_setBottom_540b2b23d51b1efd,
            mid_setScorer_dd42dde4c0a7db1e,
            mid_setTopValue_0b97bf2afe6e3ce4,
            mid_value_375542890b644be2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldComparator$RelevanceComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldComparator$RelevanceComparator(const FieldComparator$RelevanceComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

          FieldComparator$RelevanceComparator(jint);

          jint compare(jint, jint) const;
          jint compareBottom(jint) const;
          jint compareTop(jint) const;
          jint compareValues(const ::java::lang::Float &, const ::java::lang::Float &) const;
          void copy(jint, jint) const;
          ::org::apache::lucene::search::LeafFieldComparator getLeafComparator(const ::org::apache::lucene::index::LeafReaderContext &) const;
          void setBottom(jint) const;
          void setScorer(const ::org::apache::lucene::search::Scorable &) const;
          void setTopValue(const ::java::lang::Float &) const;
          ::java::lang::Float value(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(FieldComparator$RelevanceComparator);
        extern PyTypeObject *PY_TYPE(FieldComparator$RelevanceComparator);

        class t_FieldComparator$RelevanceComparator {
        public:
          PyObject_HEAD
          FieldComparator$RelevanceComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldComparator$RelevanceComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldComparator$RelevanceComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldComparator$RelevanceComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
