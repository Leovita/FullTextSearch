#ifndef org_apache_lucene_queries_spans_SpanNearQuery$SpanNearWeight_H
#define org_apache_lucene_queries_spans_SpanNearQuery$SpanNearWeight_H

#include "org/apache/lucene/queries/spans/SpanWeight.h"

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
          class SpanWeight$Postings;
          class SpanNearQuery;
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
    class List;
    class Map;
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
              mid_init$_f48fd201cf54165f,
              mid_extractTermStates_79ba0f5a7d05e623,
              mid_getSpans_20bbb107c42cef31,
              mid_isCacheable_03101e9518c66be0,
              mid_scorerSupplier_45b7d9496c5acc93,
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
