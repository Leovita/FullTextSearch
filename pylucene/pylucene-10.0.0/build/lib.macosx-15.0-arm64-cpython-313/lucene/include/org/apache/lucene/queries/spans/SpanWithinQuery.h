#ifndef org_apache_lucene_queries_spans_SpanWithinQuery_H
#define org_apache_lucene_queries_spans_SpanWithinQuery_H

#include "org/apache/lucene/queries/spans/SpanContainQuery.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanWithinQuery : public ::org::apache::lucene::queries::spans::SpanContainQuery {
           public:
            enum {
              mid_init$_1a11072446ea80b0,
              mid_createWeight_d7dfaaf9476f49d4,
              mid_toString_cb0eb1432185fc94,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanWithinQuery(jobject obj) : ::org::apache::lucene::queries::spans::SpanContainQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanWithinQuery(const SpanWithinQuery& obj) : ::org::apache::lucene::queries::spans::SpanContainQuery(obj) {}

            SpanWithinQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::org::apache::lucene::queries::spans::SpanQuery &);

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
          extern PyType_Def PY_TYPE_DEF(SpanWithinQuery);
          extern PyTypeObject *PY_TYPE(SpanWithinQuery);

          class t_SpanWithinQuery {
          public:
            PyObject_HEAD
            SpanWithinQuery object;
            static PyObject *wrap_Object(const SpanWithinQuery&);
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
