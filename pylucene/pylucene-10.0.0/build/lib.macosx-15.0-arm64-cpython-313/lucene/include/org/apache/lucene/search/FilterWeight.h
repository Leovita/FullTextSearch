#ifndef org_apache_lucene_search_FilterWeight_H
#define org_apache_lucene_search_FilterWeight_H

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
        class Matches;
        class Explanation;
        class ScorerSupplier;
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

        class FilterWeight : public ::org::apache::lucene::search::Weight {
         public:
          enum {
            mid_explain_478bccbc961eab03,
            mid_isCacheable_03101e9518c66be0,
            mid_matches_8b48216623017f2b,
            mid_scorerSupplier_45b7d9496c5acc93,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterWeight(jobject obj) : ::org::apache::lucene::search::Weight(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterWeight(const FilterWeight& obj) : ::org::apache::lucene::search::Weight(obj) {}

          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
          jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::Matches matches(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(FilterWeight);
        extern PyTypeObject *PY_TYPE(FilterWeight);

        class t_FilterWeight {
        public:
          PyObject_HEAD
          FilterWeight object;
          static PyObject *wrap_Object(const FilterWeight&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
