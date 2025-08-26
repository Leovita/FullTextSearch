#ifndef org_apache_lucene_queries_spans_SpanTermQuery_H
#define org_apache_lucene_queries_spans_SpanTermQuery_H

#include "org/apache/lucene/queries/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermStates;
        class Term;
      }
      namespace search {
        class ScoreMode;
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

          class SpanTermQuery : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_init$_ed33f9e055f7213d,
              mid_init$_4dc0793209632872,
              mid_createWeight_b33c2c90db0d1d7e,
              mid_equals_00d17418847797d4,
              mid_getField_e7df854526d67fa3,
              mid_getTerm_b549eaec39b02d52,
              mid_getTermStates_182b9366a2a42e01,
              mid_hashCode_bd89ce15dad49192,
              mid_toString_fef9c036acf290a9,
              mid_visit_85475af8e8904ab4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanTermQuery(jobject obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanTermQuery(const SpanTermQuery& obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {}

            SpanTermQuery(const ::org::apache::lucene::index::Term &);
            SpanTermQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::index::TermStates &);

            ::org::apache::lucene::queries::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::index::Term getTerm() const;
            ::org::apache::lucene::index::TermStates getTermStates() const;
            jint hashCode() const;
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
          extern PyType_Def PY_TYPE_DEF(SpanTermQuery);
          extern PyTypeObject *PY_TYPE(SpanTermQuery);

          class t_SpanTermQuery {
          public:
            PyObject_HEAD
            SpanTermQuery object;
            static PyObject *wrap_Object(const SpanTermQuery&);
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
