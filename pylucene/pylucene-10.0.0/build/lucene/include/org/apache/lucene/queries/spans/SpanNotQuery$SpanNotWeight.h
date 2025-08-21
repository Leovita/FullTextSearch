#ifndef org_apache_lucene_queries_spans_SpanNotQuery$SpanNotWeight_H
#define org_apache_lucene_queries_spans_SpanNotQuery$SpanNotWeight_H

#include "org/apache/lucene/queries/spans/SpanWeight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
        class Term;
        class TermStates;
      }
      namespace queries {
        namespace spans {
          class Spans;
          class SpanWeight$Postings;
          class SpanNotQuery;
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

          class SpanNotQuery$SpanNotWeight : public ::org::apache::lucene::queries::spans::SpanWeight {
           public:
            enum {
              mid_init$_2e00c9e756a86fc2,
              mid_extractTermStates_79ba0f5a7d05e623,
              mid_getSpans_20bbb107c42cef31,
              mid_isCacheable_03101e9518c66be0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanNotQuery$SpanNotWeight(jobject obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanNotQuery$SpanNotWeight(const SpanNotQuery$SpanNotWeight& obj) : ::org::apache::lucene::queries::spans::SpanWeight(obj) {}

            SpanNotQuery$SpanNotWeight(const ::org::apache::lucene::queries::spans::SpanNotQuery &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, const ::org::apache::lucene::queries::spans::SpanWeight &, const ::org::apache::lucene::queries::spans::SpanWeight &, jfloat);

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
          extern PyType_Def PY_TYPE_DEF(SpanNotQuery$SpanNotWeight);
          extern PyTypeObject *PY_TYPE(SpanNotQuery$SpanNotWeight);

          class t_SpanNotQuery$SpanNotWeight {
          public:
            PyObject_HEAD
            SpanNotQuery$SpanNotWeight object;
            static PyObject *wrap_Object(const SpanNotQuery$SpanNotWeight&);
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
