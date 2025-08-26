#ifndef org_apache_lucene_queries_spans_SpanContainingQuery_H
#define org_apache_lucene_queries_spans_SpanContainingQuery_H

#include "org/apache/lucene/queries/spans/SpanContainQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class IndexSearcher;
      }
      namespace queries {
        namespace spans {
          class SpanWeight;
          class SpanQuery;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanContainingQuery : public ::org::apache::lucene::queries::spans::SpanContainQuery {
           public:
            enum {
              mid_init$_e1ad395c4cae76d2,
              mid_createWeight_b33c2c90db0d1d7e,
              mid_toString_fef9c036acf290a9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanContainingQuery(jobject obj) : ::org::apache::lucene::queries::spans::SpanContainQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanContainingQuery(const SpanContainingQuery& obj) : ::org::apache::lucene::queries::spans::SpanContainQuery(obj) {}

            SpanContainingQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::org::apache::lucene::queries::spans::SpanQuery &);

            ::org::apache::lucene::queries::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            ::java::lang::String toString(const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanContainingQuery);
          extern PyTypeObject *PY_TYPE(SpanContainingQuery);

          class t_SpanContainingQuery {
          public:
            PyObject_HEAD
            SpanContainingQuery object;
            static PyObject *wrap_Object(const SpanContainingQuery&);
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
