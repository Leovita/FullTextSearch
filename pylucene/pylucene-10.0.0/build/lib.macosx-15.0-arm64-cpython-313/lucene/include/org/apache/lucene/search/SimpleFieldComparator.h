#ifndef org_apache_lucene_search_SimpleFieldComparator_H
#define org_apache_lucene_search_SimpleFieldComparator_H

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

        class SimpleFieldComparator : public ::org::apache::lucene::search::FieldComparator {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_getLeafComparator_d019da77a226431f,
            mid_setScorer_dd42dde4c0a7db1e,
            mid_doSetNextReader_b7b06dce0a4097ed,
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
