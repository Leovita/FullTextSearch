#ifndef org_apache_lucene_search_IndriAndWeight_H
#define org_apache_lucene_search_IndriAndWeight_H

#include "org/apache/lucene/search/Weight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
        class ScorerSupplier;
        class ScoreMode;
        class IndriAndQuery;
        class IndexSearcher;
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

        class IndriAndWeight : public ::org::apache::lucene::search::Weight {
         public:
          enum {
            mid_init$_2e41fb6bb6942f8f,
            mid_explain_b1310cbadc240f44,
            mid_isCacheable_8e9f6225f14d0ebe,
            mid_scorerSupplier_613b85087b5065ab,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndriAndWeight(jobject obj) : ::org::apache::lucene::search::Weight(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndriAndWeight(const IndriAndWeight& obj) : ::org::apache::lucene::search::Weight(obj) {}

          IndriAndWeight(const ::org::apache::lucene::search::IndriAndQuery &, const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat);

          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
          jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::ScorerSupplier scorerSupplier(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(IndriAndWeight);
        extern PyTypeObject *PY_TYPE(IndriAndWeight);

        class t_IndriAndWeight {
        public:
          PyObject_HEAD
          IndriAndWeight object;
          static PyObject *wrap_Object(const IndriAndWeight&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
