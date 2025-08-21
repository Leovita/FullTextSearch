#ifndef org_apache_lucene_queries_spans_SpanOrQuery$SpanOrWeight_H
#define org_apache_lucene_queries_spans_SpanOrQuery$SpanOrWeight_H

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
          class SpanOrQuery;
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

          class SpanOrQuery$SpanOrWeight : public ::org::apache::lucene::queries::spans::SpanWeight {
           public:
            enum {
              mid_init$_1e07a00f623d0926,
              mid_extractTermStates_79ba0f5a7d05e623,
              mid_getSpans_20bbb107c42cef31,
              mid_isCacheable_03101e9518c66be0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanOrQuery$SpanOrWeight(jobject obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanOrQuery$SpanOrWeight(const SpanOrQuery$SpanOrWeight& obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {}

            SpanOrQuery$SpanOrWeight(const ::org::apache::lucene::queries::spans::SpanOrQuery &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, const ::java::util::List &, jfloat);

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
          extern PyType_Def PY_TYPE_DEF(SpanOrQuery$SpanOrWeight);
          extern PyTypeObject *PY_TYPE(SpanOrQuery$SpanOrWeight);

          class t_SpanOrQuery$SpanOrWeight {
          public:
            PyObject_HEAD
            SpanOrQuery$SpanOrWeight object;
            static PyObject *wrap_Object(const SpanOrQuery$SpanOrWeight&);
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
