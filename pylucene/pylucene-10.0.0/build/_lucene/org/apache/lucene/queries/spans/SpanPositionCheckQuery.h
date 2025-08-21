#ifndef org_apache_lucene_queries_spans_SpanPositionCheckQuery_H
#define org_apache_lucene_queries_spans_SpanPositionCheckQuery_H

#include "org/apache/lucene/queries/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class QueryVisitor;
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
    class Cloneable;
    class Object;
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
              mid_init$_aacf3cc85530a8ec,
              mid_createWeight_d7dfaaf9476f49d4,
              mid_equals_570b5248a6da3ef6,
              mid_getField_09a7afff1868fc5e,
              mid_getMatch_ccd29998bab337f9,
              mid_hashCode_20fbf7565993c3d7,
              mid_rewrite_aeaa882ae5e96552,
              mid_visit_1b22ec612b613eea,
              mid_acceptPosition_b59c8c4cfb25644b,
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
