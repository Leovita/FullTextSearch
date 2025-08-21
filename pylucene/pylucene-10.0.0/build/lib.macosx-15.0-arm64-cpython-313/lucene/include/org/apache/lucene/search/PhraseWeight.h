#ifndef org_apache_lucene_search_PhraseWeight_H
#define org_apache_lucene_search_PhraseWeight_H

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

        class PhraseWeight : public ::org::apache::lucene::search::Weight {
         public:
          enum {
            mid_explain_478bccbc961eab03,
            mid_isCacheable_03101e9518c66be0,
            mid_matches_8b48216623017f2b,
            mid_scorerSupplier_45b7d9496c5acc93,
            mid_getStats_a1481349ba0bc2df,
            mid_getPhraseMatcher_d7123eb1a1107652,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PhraseWeight(jobject obj) : ::org::apache::lucene::search::Weight(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PhraseWeight(const PhraseWeight& obj) : ::org::apache::lucene::search::Weight(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(PhraseWeight);
        extern PyTypeObject *PY_TYPE(PhraseWeight);

        class t_PhraseWeight {
        public:
          PyObject_HEAD
          PhraseWeight object;
          static PyObject *wrap_Object(const PhraseWeight&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
