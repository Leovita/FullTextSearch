#ifndef org_apache_lucene_queries_spans_SpanNotQuery$SpanNotWeight_H
#define org_apache_lucene_queries_spans_SpanNotQuery$SpanNotWeight_H

#include "org/apache/lucene/queries/spans/SpanWeight.h"

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
          class SpanNotQuery;
          class Spans;
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

          class SpanNotQuery$SpanNotWeight : public ::org::apache::lucene::queries::spans::SpanWeight {
           public:
            enum {
              mid_init$_565648f36a76dd45,
              mid_extractTermStates_6a7e23584beb7c0f,
              mid_getSpans_03932f6f031979e9,
              mid_isCacheable_8e9f6225f14d0ebe,
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
