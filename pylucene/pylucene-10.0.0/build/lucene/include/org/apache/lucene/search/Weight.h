#ifndef org_apache_lucene_search_Weight_H
#define org_apache_lucene_search_Weight_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
        class ScorerSupplier;
        class BulkScorer;
        class Matches;
        class SegmentCacheable;
        class Query;
        class Scorer;
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

        class Weight : public ::java::lang::Object {
         public:
          enum {
            mid_bulkScorer_f926bdfcbf8529a7,
            mid_count_a7ecd353ff9c13fa,
            mid_explain_b1310cbadc240f44,
            mid_getQuery_ffa7bd087b2a75aa,
            mid_matches_868b3421ec3687f4,
            mid_scorer_74fa27cefd32650d,
            mid_scorerSupplier_613b85087b5065ab,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Weight(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Weight(const Weight& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::search::BulkScorer bulkScorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
          jint count(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
          ::org::apache::lucene::search::Query getQuery() const;
          ::org::apache::lucene::search::Matches matches(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
          ::org::apache::lucene::search::Scorer scorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(Weight);
        extern PyTypeObject *PY_TYPE(Weight);

        class t_Weight {
        public:
          PyObject_HEAD
          Weight object;
          static PyObject *wrap_Object(const Weight&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
