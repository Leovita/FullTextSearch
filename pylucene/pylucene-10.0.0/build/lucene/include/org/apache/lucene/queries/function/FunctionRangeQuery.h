#ifndef org_apache_lucene_queries_function_FunctionRangeQuery_H
#define org_apache_lucene_queries_function_FunctionRangeQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class IndexSearcher;
        class QueryVisitor;
        class Weight;
      }
      namespace queries {
        namespace function {
          class ValueSource;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class Number;
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

          class FunctionRangeQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_b5c09e08a098c196,
              mid_init$_fbe7dcd2a3f3e417,
              mid_createWeight_dc54d493278607e4,
              mid_equals_00d17418847797d4,
              mid_getLowerVal_e7df854526d67fa3,
              mid_getUpperVal_e7df854526d67fa3,
              mid_getValueSource_60e3d6394e3f177c,
              mid_hashCode_bd89ce15dad49192,
              mid_isIncludeLower_9aa4f33e82ea333f,
              mid_isIncludeUpper_9aa4f33e82ea333f,
              mid_toString_fef9c036acf290a9,
              mid_visit_85475af8e8904ab4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FunctionRangeQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FunctionRangeQuery(const FunctionRangeQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            FunctionRangeQuery(const ::org::apache::lucene::queries::function::ValueSource &, const ::java::lang::Number &, const ::java::lang::Number &, jboolean, jboolean);
            FunctionRangeQuery(const ::org::apache::lucene::queries::function::ValueSource &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getLowerVal() const;
            ::java::lang::String getUpperVal() const;
            ::org::apache::lucene::queries::function::ValueSource getValueSource() const;
            jint hashCode() const;
            jboolean isIncludeLower() const;
            jboolean isIncludeUpper() const;
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
          extern PyType_Def PY_TYPE_DEF(FunctionRangeQuery);
          extern PyTypeObject *PY_TYPE(FunctionRangeQuery);

          class t_FunctionRangeQuery {
          public:
            PyObject_HEAD
            FunctionRangeQuery object;
            static PyObject *wrap_Object(const FunctionRangeQuery&);
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
