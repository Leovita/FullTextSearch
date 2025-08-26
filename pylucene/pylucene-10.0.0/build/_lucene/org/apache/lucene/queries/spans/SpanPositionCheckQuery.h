#ifndef org_apache_lucene_queries_spans_SpanPositionCheckQuery_H
#define org_apache_lucene_queries_spans_SpanPositionCheckQuery_H

#include "org/apache/lucene/queries/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class Query;
        class QueryVisitor;
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
    class Cloneable;
    class Object;
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

          class SpanPositionCheckQuery : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_init$_11f014ab1950e71b,
              mid_createWeight_b33c2c90db0d1d7e,
              mid_equals_00d17418847797d4,
              mid_getField_e7df854526d67fa3,
              mid_getMatch_181254ec704aaed2,
              mid_hashCode_bd89ce15dad49192,
              mid_rewrite_25984111320dbe39,
              mid_visit_85475af8e8904ab4,
              mid_acceptPosition_ded8f9d8e47cc29a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanPositionCheckQuery(jobject obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanPositionCheckQuery(const SpanPositionCheckQuery& obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {}

            SpanPositionCheckQuery(const ::org::apache::lucene::queries::spans::SpanQuery &);

            ::org::apache::lucene::queries::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::queries::spans::SpanQuery getMatch() const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
            void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanPositionCheckQuery);
          extern PyTypeObject *PY_TYPE(SpanPositionCheckQuery);

          class t_SpanPositionCheckQuery {
          public:
            PyObject_HEAD
            SpanPositionCheckQuery object;
            static PyObject *wrap_Object(const SpanPositionCheckQuery&);
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
