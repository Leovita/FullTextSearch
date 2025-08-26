#ifndef org_apache_lucene_queries_spans_SpanWithinQuery$SpanWithinWeight_H
#define org_apache_lucene_queries_spans_SpanWithinQuery$SpanWithinWeight_H

#include "org/apache/lucene/queries/spans/SpanContainQuery$SpanContainWeight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermStates;
        class Term;
        class LeafReaderContext;
      }
      namespace queries {
        namespace spans {
          class SpanWeight;
          class Spans;
          class SpanWithinQuery;
          class SpanWeight$Postings;
        }
      }
      namespace search {
        class IndexSearcher;
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

          class SpanWithinQuery$SpanWithinWeight : public ::org::apache::lucene::queries::spans::SpanContainQuery$SpanContainWeight {
           public:
            enum {
              mid_init$_63909c2f7bc4b21d,
              mid_getSpans_03932f6f031979e9,
              mid_isCacheable_8e9f6225f14d0ebe,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanWithinQuery$SpanWithinWeight(jobject obj) : ::org::apache::lucene::queries::spans::SpanContainQuery$SpanContainWeight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanWithinQuery$SpanWithinWeight(const SpanWithinQuery$SpanWithinWeight& obj) : ::org::apache::lucene::queries::spans::SpanContainQuery$SpanContainWeight(obj) {}

            SpanWithinQuery$SpanWithinWeight(const ::org::apache::lucene::queries::spans::SpanWithinQuery &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, const ::org::apache::lucene::queries::spans::SpanWeight &, const ::org::apache::lucene::queries::spans::SpanWeight &, jfloat);

            ::org::apache::lucene::queries::spans::Spans getSpans(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::queries::spans::SpanWeight$Postings &) const;
            jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanWithinQuery$SpanWithinWeight);
          extern PyTypeObject *PY_TYPE(SpanWithinQuery$SpanWithinWeight);

          class t_SpanWithinQuery$SpanWithinWeight {
          public:
            PyObject_HEAD
            SpanWithinQuery$SpanWithinWeight object;
            static PyObject *wrap_Object(const SpanWithinQuery$SpanWithinWeight&);
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
