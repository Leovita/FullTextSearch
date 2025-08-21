#ifndef org_apache_lucene_queries_function_FunctionMatchQuery_H
#define org_apache_lucene_queries_function_FunctionMatchQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
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
  namespace util {
    namespace function {
      class DoublePredicate;
    }
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

          class FunctionMatchQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_f6fd891183f18180,
              mid_init$_b199794ec5b9be2d,
              mid_createWeight_77fe52950093e704,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_toString_cb0eb1432185fc94,
              mid_visit_1b22ec612b613eea,
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
