#ifndef org_apache_lucene_queries_spans_SpanContainingQuery$SpanContainingWeight_H
#define org_apache_lucene_queries_spans_SpanContainingQuery$SpanContainingWeight_H

#include "org/apache/lucene/queries/spans/SpanContainQuery$SpanContainWeight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class TermStates;
        class LeafReaderContext;
      }
      namespace queries {
        namespace spans {
          class Spans;
          class SpanWeight;
          class SpanWeight$Postings;
          class SpanContainingQuery;
        }
      }
      namespace search {
        class ScorerSupplier;
        class IndexSearcher;
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
              mid_init$_bed79168307bb564,
              mid_getSpans_20bbb107c42cef31,
              mid_isCacheable_03101e9518c66be0,
              mid_scorerSupplier_45b7d9496c5acc93,
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
