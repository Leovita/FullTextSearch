#ifndef org_apache_lucene_search_FilterCollector_H
#define org_apache_lucene_search_FilterCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class LeafCollector;
        class ScoreMode;
        class Weight;
        class Collector;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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

        class FilterCollector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_91ebd1d75c9c0390,
            mid_getLeafCollector_aca3f888603431e1,
            mid_scoreMode_45dfdcf7e901559d,
            mid_setWeight_6d6ab2df81fdc63f,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterCollector(const FilterCollector& obj) : ::java::lang::Object(obj) {}

          FilterCollector(const ::org::apache::lucene::search::Collector &);

          ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
          void setWeight(const ::org::apache::lucene::search::Weight &) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterCollector);
        extern PyTypeObject *PY_TYPE(FilterCollector);

        class t_FilterCollector {
        public:
          PyObject_HEAD
          FilterCollector object;
          static PyObject *wrap_Object(const FilterCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
