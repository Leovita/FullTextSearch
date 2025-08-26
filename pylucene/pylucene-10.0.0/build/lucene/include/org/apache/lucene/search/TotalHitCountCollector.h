#ifndef org_apache_lucene_search_TotalHitCountCollector_H
#define org_apache_lucene_search_TotalHitCountCollector_H

#include "java/lang/Object.h"

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

        class TotalHitCountCollector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_getLeafCollector_0a34433e6da38be9,
            mid_getTotalHits_bd89ce15dad49192,
            mid_scoreMode_23e7061dcdc84768,
            mid_setWeight_36438df74a772106,
            mid_createLeafCollector_e9146ccda5a78691,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TotalHitCountCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TotalHitCountCollector(const TotalHitCountCollector& obj) : ::java::lang::Object(obj) {}

          TotalHitCountCollector();

          ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
          jint getTotalHits() const;
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
        extern PyType_Def PY_TYPE_DEF(TotalHitCountCollector);
        extern PyTypeObject *PY_TYPE(TotalHitCountCollector);

        class t_TotalHitCountCollector {
        public:
          PyObject_HEAD
          TotalHitCountCollector object;
          static PyObject *wrap_Object(const TotalHitCountCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
