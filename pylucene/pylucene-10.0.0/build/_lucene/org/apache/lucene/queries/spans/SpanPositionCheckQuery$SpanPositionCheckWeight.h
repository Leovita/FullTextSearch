#ifndef org_apache_lucene_queries_spans_SpanPositionCheckQuery$SpanPositionCheckWeight_H
#define org_apache_lucene_queries_spans_SpanPositionCheckQuery$SpanPositionCheckWeight_H

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
          class SpanPositionCheckQuery;
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

          class SpanPositionCheckQuery$SpanPositionCheckWeight : public ::org::apache::lucene::queries::spans::SpanWeight {
           public:
            enum {
              mid_init$_fe4283b183b93360,
              mid_extractTermStates_79ba0f5a7d05e623,
              mid_getSpans_20bbb107c42cef31,
              mid_isCacheable_03101e9518c66be0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanPositionCheckQuery$SpanPositionCheckWeight(jobject obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanPositionCheckQuery$SpanPositionCheckWeight(const SpanPositionCheckQuery$SpanPositionCheckWeight& obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {}

            SpanPositionCheckQuery$SpanPositionCheckWeight(const ::org::apache::lucene::queries::spans::SpanPositionCheckQuery &, const ::org::apache::lucene::queries::spans::SpanWeight &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, jfloat);

            void extractTermStates(const ::java::util::Map &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanPositionCheckQuery$SpanPositionCheckWeight);
          extern PyTypeObject *PY_TYPE(SpanPositionCheckQuery$SpanPositionCheckWeight);

          class t_SpanPositionCheckQuery$SpanPositionCheckWeight {
          public:
            PyObject_HEAD
            SpanPositionCheckQuery$SpanPositionCheckWeight object;
            static PyObject *wrap_Object(const SpanPositionCheckQuery$SpanPositionCheckWeight&);
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
