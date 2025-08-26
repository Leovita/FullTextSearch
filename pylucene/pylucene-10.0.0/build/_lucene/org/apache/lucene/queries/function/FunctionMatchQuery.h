#ifndef org_apache_lucene_queries_function_FunctionMatchQuery_H
#define org_apache_lucene_queries_function_FunctionMatchQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
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
  namespace util {
    namespace function {
      class DoublePredicate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {

          class FunctionMatchQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_2fdf7ade27c462fe,
              mid_init$_88861551dd205518,
              mid_createWeight_dc54d493278607e4,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_toString_fef9c036acf290a9,
              mid_visit_85475af8e8904ab4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FunctionMatchQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FunctionMatchQuery(const FunctionMatchQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            FunctionMatchQuery(const ::org::apache::lucene::search::DoubleValuesSource &, const ::java::util::function::DoublePredicate &);
            FunctionMatchQuery(const ::org::apache::lucene::search::DoubleValuesSource &, const ::java::util::function::DoublePredicate &, jfloat);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
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
        namespace function {
          extern PyType_Def PY_TYPE_DEF(FunctionMatchQuery);
          extern PyTypeObject *PY_TYPE(FunctionMatchQuery);

          class t_FunctionMatchQuery {
          public:
            PyObject_HEAD
            FunctionMatchQuery object;
            static PyObject *wrap_Object(const FunctionMatchQuery&);
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
