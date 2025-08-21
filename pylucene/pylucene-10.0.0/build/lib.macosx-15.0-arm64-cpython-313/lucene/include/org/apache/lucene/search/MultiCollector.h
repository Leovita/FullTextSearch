#ifndef org_apache_lucene_search_MultiCollector_H
#define org_apache_lucene_search_MultiCollector_H

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
    class Iterable;
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

        class MultiCollector : public ::java::lang::Object {
         public:
          enum {
            mid_getCollectors_8672cf8530ee4ed0,
            mid_getLeafCollector_aca3f888603431e1,
            mid_scoreMode_45dfdcf7e901559d,
            mid_setWeight_6d6ab2df81fdc63f,
            mid_wrap_da1840c9a576aab9,
            mid_wrap_887c905ea7dc0717,
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
