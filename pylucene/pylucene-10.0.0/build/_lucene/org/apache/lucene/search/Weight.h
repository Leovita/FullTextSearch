#ifndef org_apache_lucene_search_Weight_H
#define org_apache_lucene_search_Weight_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorer;
        class Query;
        class BulkScorer;
        class Matches;
        class Explanation;
        class SegmentCacheable;
        class ScorerSupplier;
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

        class Weight : public ::java::lang::Object {
         public:
          enum {
            mid_bulkScorer_17b9b3485a67a43a,
            mid_count_2dd037802ee891f5,
            mid_explain_478bccbc961eab03,
            mid_getQuery_a3eacfacada795d4,
            mid_matches_8b48216623017f2b,
            mid_scorer_8d778e1a632d5b37,
            mid_scorerSupplier_45b7d9496c5acc93,
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
