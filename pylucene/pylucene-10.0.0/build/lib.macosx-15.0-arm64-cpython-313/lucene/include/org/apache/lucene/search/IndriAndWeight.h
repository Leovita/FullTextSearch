#ifndef org_apache_lucene_search_IndriAndWeight_H
#define org_apache_lucene_search_IndriAndWeight_H

#include "org/apache/lucene/search/Weight.h"

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
        class ScoreMode;
        class IndriAndQuery;
        class Explanation;
        class ScorerSupplier;
        class IndexSearcher;
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

        class IndriAndWeight : public ::org::apache::lucene::search::Weight {
         public:
          enum {
            mid_init$_b67cb407f39e4f4f,
            mid_explain_478bccbc961eab03,
            mid_isCacheable_03101e9518c66be0,
            mid_scorerSupplier_45b7d9496c5acc93,
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
