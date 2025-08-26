#ifndef org_apache_lucene_queries_spans_SpanQuery_H
#define org_apache_lucene_queries_spans_SpanQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermStates;
        class Term;
      }
      namespace search {
        class ScoreMode;
        class IndexSearcher;
      }
      namespace queries {
        namespace spans {
          class SpanWeight;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Map;
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_createWeight_b33c2c90db0d1d7e,
              mid_getField_e7df854526d67fa3,
              mid_getTermStates_b4fb48d65fd33556,
              mid_getTermStates_fce42ca2d157f88f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanQuery(const SpanQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            SpanQuery();

            ::org::apache::lucene::queries::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            ::java::lang::String getField() const;
            static ::java::util::Map getTermStates(const JArray< ::org::apache::lucene::queries::spans::SpanWeight > &);
            static ::java::util::Map getTermStates(const ::java::util::Collection &);
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
          extern PyType_Def PY_TYPE_DEF(SpanQuery);
          extern PyTypeObject *PY_TYPE(SpanQuery);

          class t_SpanQuery {
          public:
            PyObject_HEAD
            SpanQuery object;
            static PyObject *wrap_Object(const SpanQuery&);
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
