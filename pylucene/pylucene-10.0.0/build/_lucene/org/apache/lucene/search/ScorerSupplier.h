#ifndef org_apache_lucene_search_ScorerSupplier_H
#define org_apache_lucene_search_ScorerSupplier_H

#include "java/lang/Object.h"

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
        class BulkScorer;
        class Scorer;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class ScorerSupplier : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_bulkScorer_74feccf85dfee297,
            mid_cost_0f176418e3e16541,
            mid_get_1c459bd9b5807825,
            mid_setTopLevelScoringClause_e7bdbe105ce1bafb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ScorerSupplier(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ScorerSupplier(const ScorerSupplier& obj) : ::java::lang::Object(obj) {}

          ScorerSupplier();

          ::org::apache::lucene::search::BulkScorer bulkScorer() const;
          jlong cost() const;
          ::org::apache::lucene::search::Scorer get(jlong) const;
          void setTopLevelScoringClause() const;
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
        extern PyType_Def PY_TYPE_DEF(ScorerSupplier);
        extern PyTypeObject *PY_TYPE(ScorerSupplier);

        class t_ScorerSupplier {
        public:
          PyObject_HEAD
          ScorerSupplier object;
          static PyObject *wrap_Object(const ScorerSupplier&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
