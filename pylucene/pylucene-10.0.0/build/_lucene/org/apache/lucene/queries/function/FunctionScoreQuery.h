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
        class QueryVisitor;
        class DoubleValuesSource;
        class ScoreMode;
        class Weight;
        class IndexSearcher;
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
        namespace function {

          class FunctionScoreQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_70be3dc44d57ada2,
              mid_boostByQuery_8491cd1a047bed1b,
              mid_boostByValue_2d27fd16f1580664,
              mid_createWeight_77fe52950093e704,
              mid_equals_570b5248a6da3ef6,
              mid_getSource_7219b817ce6d1d1a,
              mid_getWrappedQuery_a3eacfacada795d4,
              mid_hashCode_20fbf7565993c3d7,
              mid_rewrite_aeaa882ae5e96552,
              mid_toString_cb0eb1432185fc94,
              mid_visit_1b22ec612b613eea,
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
