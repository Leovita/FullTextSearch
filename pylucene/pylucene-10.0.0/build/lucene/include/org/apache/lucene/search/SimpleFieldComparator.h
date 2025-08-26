#ifndef org_apache_lucene_search_SimpleFieldComparator_H
#define org_apache_lucene_search_SimpleFieldComparator_H

#include "org/apache/lucene/search/FieldComparator.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
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

        class SimpleFieldComparator : public ::org::apache::lucene::search::FieldComparator {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_getLeafComparator_84b03b9ed9bc3019,
            mid_setScorer_c06bdf7d53c6460a,
            mid_doSetNextReader_32243afefe6b151f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleFieldComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SimpleFieldComparator(const SimpleFieldComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

          SimpleFieldComparator();

          ::org::apache::lucene::search::LeafFieldComparator getLeafComparator(const ::org::apache::lucene::index::LeafReaderContext &) const;
          void setScorer(const ::org::apache::lucene::search::Scorable &) const;
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
        extern PyType_Def PY_TYPE_DEF(SimpleFieldComparator);
        extern PyTypeObject *PY_TYPE(SimpleFieldComparator);

        class t_SimpleFieldComparator {
        public:
          PyObject_HEAD
          SimpleFieldComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SimpleFieldComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SimpleFieldComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SimpleFieldComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
