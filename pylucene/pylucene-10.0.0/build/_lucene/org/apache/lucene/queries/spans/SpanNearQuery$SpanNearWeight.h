#ifndef org_apache_lucene_queries_spans_SpanNearQuery$SpanNearWeight_H
#define org_apache_lucene_queries_spans_SpanNearQuery$SpanNearWeight_H

#include "org/apache/lucene/queries/spans/SpanWeight.h"

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
          class Spans;
          class SpanNearQuery;
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
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanNearQuery$SpanNearWeight : public ::org::apache::lucene::queries::spans::SpanWeight {
           public:
            enum {
              mid_init$_4e8279af7e0a0468,
              mid_extractTermStates_6a7e23584beb7c0f,
              mid_getSpans_03932f6f031979e9,
              mid_isCacheable_8e9f6225f14d0ebe,
              mid_scorerSupplier_613b85087b5065ab,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanNearQuery$SpanNearWeight(jobject obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanNearQuery$SpanNearWeight(const SpanNearQuery$SpanNearWeight& obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {}

            SpanNearQuery$SpanNearWeight(const ::org::apache::lucene::queries::spans::SpanNearQuery &, const ::java::util::List &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, jfloat);

            void extractTermStates(const ::java::util::Map &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanNearQuery$SpanNearWeight);
          extern PyTypeObject *PY_TYPE(SpanNearQuery$SpanNearWeight);

          class t_SpanNearQuery$SpanNearWeight {
          public:
            PyObject_HEAD
            SpanNearQuery$SpanNearWeight object;
            static PyObject *wrap_Object(const SpanNearQuery$SpanNearWeight&);
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
