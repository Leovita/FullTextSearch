#ifndef org_apache_lucene_search_MultiCollector_H
#define org_apache_lucene_search_MultiCollector_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Iterable;
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
        class ScoreMode;
        class LeafCollector;
        class Collector;
        class Weight;
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

        class MultiCollector : public ::java::lang::Object {
         public:
          enum {
            mid_getCollectors_5fdc17e2beba1800,
            mid_getLeafCollector_0a34433e6da38be9,
            mid_scoreMode_23e7061dcdc84768,
            mid_setWeight_36438df74a772106,
            mid_wrap_1691ab4c58d6c2fc,
            mid_wrap_061abdfe0049e89c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiCollector(const MultiCollector& obj) : ::java::lang::Object(obj) {}

          JArray< ::org::apache::lucene::search::Collector > getCollectors() const;
          ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
          void setWeight(const ::org::apache::lucene::search::Weight &) const;
          static ::org::apache::lucene::search::Collector wrap(const JArray< ::org::apache::lucene::search::Collector > &);
          static ::org::apache::lucene::search::Collector wrap(const ::java::lang::Iterable &);
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
        extern PyType_Def PY_TYPE_DEF(MultiCollector);
        extern PyTypeObject *PY_TYPE(MultiCollector);

        class t_MultiCollector {
        public:
          PyObject_HEAD
          MultiCollector object;
          static PyObject *wrap_Object(const MultiCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
