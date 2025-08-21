#ifndef org_apache_lucene_queries_spans_SpanTermQuery_H
#define org_apache_lucene_queries_spans_SpanTermQuery_H

#include "org/apache/lucene/queries/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class TermStates;
      }
      namespace search {
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

          class SpanTermQuery : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_init$_3b0982cb6e1bfb9d,
              mid_init$_bbb34b86902b0d49,
              mid_createWeight_d7dfaaf9476f49d4,
              mid_equals_570b5248a6da3ef6,
              mid_getField_09a7afff1868fc5e,
              mid_getTerm_8b5614d1be154430,
              mid_getTermStates_adb7caab542db1be,
              mid_hashCode_20fbf7565993c3d7,
              mid_toString_cb0eb1432185fc94,
              mid_visit_1b22ec612b613eea,
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
