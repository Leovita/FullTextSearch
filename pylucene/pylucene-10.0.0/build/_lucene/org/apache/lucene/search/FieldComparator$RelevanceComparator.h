#ifndef org_apache_lucene_search_FieldComparator$RelevanceComparator_H
#define org_apache_lucene_search_FieldComparator$RelevanceComparator_H

#include "org/apache/lucene/search/FieldComparator.h"

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

        class FieldComparator$RelevanceComparator : public ::org::apache::lucene::search::FieldComparator {
         public:
          enum {
            mid_init$_8226bd0b0fc13dba,
            mid_compare_7f27cf81a85a97e9,
            mid_compareBottom_a3904e10f5bb9437,
            mid_compareTop_a3904e10f5bb9437,
            mid_compareValues_4752b9408f1a260d,
            mid_copy_645c25455f5b9b1c,
            mid_getLeafComparator_84b03b9ed9bc3019,
            mid_setBottom_8226bd0b0fc13dba,
            mid_setScorer_c06bdf7d53c6460a,
            mid_setTopValue_2938af09589bdd21,
            mid_value_180f9825b2d0a3dd,
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
