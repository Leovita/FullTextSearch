#ifndef org_apache_lucene_queries_spans_SpanContainingQuery$SpanContainingWeight_H
#define org_apache_lucene_queries_spans_SpanContainingQuery$SpanContainingWeight_H

#include "org/apache/lucene/queries/spans/SpanContainQuery$SpanContainWeight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermStates;
        class Term;
        class LeafReaderContext;
      }
      namespace search {
        class ScorerSupplier;
        class IndexSearcher;
      }
      namespace queries {
        namespace spans {
          class SpanWeight;
          class SpanContainingQuery;
          class Spans;
          class SpanWeight$Postings;
        }
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
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanContainingQuery$SpanContainingWeight : public ::org::apache::lucene::queries::spans::SpanContainQuery$SpanContainWeight {
           public:
            enum {
              mid_init$_6b931f08dd4a5c5a,
              mid_getSpans_03932f6f031979e9,
              mid_isCacheable_8e9f6225f14d0ebe,
              mid_scorerSupplier_613b85087b5065ab,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanContainingQuery$SpanContainingWeight(jobject obj) : ::org::apache::lucene::queries::spans::SpanContainQuery$SpanContainWeight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanContainingQuery$SpanContainingWeight(const SpanContainingQuery$SpanContainingWeight& obj) : ::org::apache::lucene::queries::spans::SpanContainQuery$SpanContainWeight(obj) {}

            SpanContainingQuery$SpanContainingWeight(const ::org::apache::lucene::queries::spans::SpanContainingQuery &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, const ::org::apache::lucene::queries::spans::SpanWeight &, const ::org::apache::lucene::queries::spans::SpanWeight &, jfloat);

            ::org::apache::lucene::queries::spans::Spans getSpans(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::queries::spans::SpanWeight$Postings &) const;
            jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::search::ScorerSupplier scorerSupplier(const ::org::apache::lucene::index::LeafReaderContext &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {
          extern PyType_Def PY_TYPE_DEF(SpanContainingQuery$SpanContainingWeight);
          extern PyTypeObject *PY_TYPE(SpanContainingQuery$SpanContainingWeight);

          class t_SpanContainingQuery$SpanContainingWeight {
          public:
            PyObject_HEAD
            SpanContainingQuery$SpanContainingWeight object;
            static PyObject *wrap_Object(const SpanContainingQuery$SpanContainingWeight&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
