#ifndef org_apache_lucene_queries_function_FunctionScoreQuery_H
#define org_apache_lucene_queries_function_FunctionScoreQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          class FunctionScoreQuery;
        }
      }
      namespace search {
        class ScoreMode;
        class Weight;
        class DoubleValuesSource;
        class QueryVisitor;
        class IndexSearcher;
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
        namespace function {

          class FunctionScoreQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_b1148d742bbe2eaa,
              mid_boostByQuery_a7fcd6a356787ab2,
              mid_boostByValue_b913140678142712,
              mid_createWeight_dc54d493278607e4,
              mid_equals_00d17418847797d4,
              mid_getSource_a04bc8c3654a6fd5,
              mid_getWrappedQuery_ffa7bd087b2a75aa,
              mid_hashCode_bd89ce15dad49192,
              mid_rewrite_25984111320dbe39,
              mid_toString_fef9c036acf290a9,
              mid_visit_85475af8e8904ab4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FunctionScoreQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FunctionScoreQuery(const FunctionScoreQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            FunctionScoreQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::DoubleValuesSource &);

            static FunctionScoreQuery boostByQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Query &, jfloat);
            static FunctionScoreQuery boostByValue(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::DoubleValuesSource &);
            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::search::DoubleValuesSource getSource() const;
            ::org::apache::lucene::search::Query getWrappedQuery() const;
            jint hashCode() const;
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
        namespace function {
          extern PyType_Def PY_TYPE_DEF(FunctionScoreQuery);
          extern PyTypeObject *PY_TYPE(FunctionScoreQuery);

          class t_FunctionScoreQuery {
          public:
            PyObject_HEAD
            FunctionScoreQuery object;
            static PyObject *wrap_Object(const FunctionScoreQuery&);
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
