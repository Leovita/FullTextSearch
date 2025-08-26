#ifndef org_apache_lucene_queries_spans_SpanNearQuery_H
#define org_apache_lucene_queries_spans_SpanNearQuery_H

#include "org/apache/lucene/queries/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {
          class SpanNearQuery$Builder;
          class SpanWeight;
        }
      }
      namespace search {
        class ScoreMode;
        class Query;
        class QueryVisitor;
        class IndexSearcher;
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

          class SpanNearQuery : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_init$_ac0d654595806ee3,
              mid_createWeight_b33c2c90db0d1d7e,
              mid_equals_00d17418847797d4,
              mid_getClauses_97a83b2e5065399f,
              mid_getField_e7df854526d67fa3,
              mid_getSlop_bd89ce15dad49192,
              mid_hashCode_bd89ce15dad49192,
              mid_isInOrder_9aa4f33e82ea333f,
              mid_newOrderedNearQuery_2ea8894170b590ac,
              mid_newUnorderedNearQuery_2ea8894170b590ac,
              mid_rewrite_25984111320dbe39,
              mid_toString_fef9c036acf290a9,
              mid_visit_85475af8e8904ab4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanNearQuery(jobject obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanNearQuery(const SpanNearQuery& obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {}

            SpanNearQuery(const JArray< ::org::apache::lucene::queries::spans::SpanQuery > &, jint, jboolean);

            ::org::apache::lucene::queries::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            JArray< ::org::apache::lucene::queries::spans::SpanQuery > getClauses() const;
            ::java::lang::String getField() const;
            jint getSlop() const;
            jint hashCode() const;
            jboolean isInOrder() const;
            static ::org::apache::lucene::queries::spans::SpanNearQuery$Builder newOrderedNearQuery(const ::java::lang::String &);
            static ::org::apache::lucene::queries::spans::SpanNearQuery$Builder newUnorderedNearQuery(const ::java::lang::String &);
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanNearQuery);
          extern PyTypeObject *PY_TYPE(SpanNearQuery);

          class t_SpanNearQuery {
          public:
            PyObject_HEAD
            SpanNearQuery object;
            static PyObject *wrap_Object(const SpanNearQuery&);
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
