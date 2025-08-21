#ifndef org_apache_lucene_search_Collector_H
#define org_apache_lucene_search_Collector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class LeafCollector;
        class ScoreMode;
        class Weight;
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

        class Collector : public ::java::lang::Object {
         public:
          enum {
            mid_getLeafCollector_aca3f888603431e1,
            mid_scoreMode_45dfdcf7e901559d,
            mid_setWeight_6d6ab2df81fdc63f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Collector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Collector(const Collector& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
          void setWeight(const ::org::apache::lucene::search::Weight &) const;
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
        extern PyType_Def PY_TYPE_DEF(Collector);
        extern PyTypeObject *PY_TYPE(Collector);

        class t_Collector {
        public:
          PyObject_HEAD
          Collector object;
          static PyObject *wrap_Object(const Collector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
