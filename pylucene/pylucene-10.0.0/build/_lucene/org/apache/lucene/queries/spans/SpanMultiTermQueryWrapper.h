#ifndef org_apache_lucene_queries_spans_SpanMultiTermQueryWrapper_H
#define org_apache_lucene_queries_spans_SpanMultiTermQueryWrapper_H

#include "org/apache/lucene/queries/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class Query;
        class QueryVisitor;
        class MultiTermQuery;
        class IndexSearcher;
      }
      namespace queries {
        namespace spans {
          class SpanWeight;
          class SpanMultiTermQueryWrapper$SpanRewriteMethod;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
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

          class SpanMultiTermQueryWrapper : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_init$_2e5055b713bbc0e9,
              mid_createWeight_b33c2c90db0d1d7e,
              mid_equals_00d17418847797d4,
              mid_getField_e7df854526d67fa3,
              mid_getRewriteMethod_cdab8b408c21d6d4,
              mid_getWrappedQuery_ffa7bd087b2a75aa,
              mid_hashCode_bd89ce15dad49192,
              mid_rewrite_25984111320dbe39,
              mid_setRewriteMethod_1b146ae5766f2523,
              mid_toString_fef9c036acf290a9,
              mid_visit_85475af8e8904ab4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanMultiTermQueryWrapper(jobject obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanMultiTermQueryWrapper(const SpanMultiTermQueryWrapper& obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {}

            static ::org::apache::lucene::queries::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod *SCORING_SPAN_QUERY_REWRITE;

            SpanMultiTermQueryWrapper(const ::org::apache::lucene::search::MultiTermQuery &);

            ::org::apache::lucene::queries::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::queries::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod getRewriteMethod() const;
            ::org::apache::lucene::search::Query getWrappedQuery() const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
            void setRewriteMethod(const ::org::apache::lucene::queries::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod &) const;
            ::java::lang::String toString(const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanMultiTermQueryWrapper);
          extern PyTypeObject *PY_TYPE(SpanMultiTermQueryWrapper);

          class t_SpanMultiTermQueryWrapper {
          public:
            PyObject_HEAD
            SpanMultiTermQueryWrapper object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SpanMultiTermQueryWrapper *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SpanMultiTermQueryWrapper&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SpanMultiTermQueryWrapper&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
