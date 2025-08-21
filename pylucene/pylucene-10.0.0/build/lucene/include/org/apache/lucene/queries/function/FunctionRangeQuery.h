#ifndef org_apache_lucene_queries_function_FunctionRangeQuery_H
#define org_apache_lucene_queries_function_FunctionRangeQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class QueryVisitor;
        class ScoreMode;
        class Weight;
        class IndexSearcher;
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
    class Class;
    class String;
    class Number;
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

          class FunctionRangeQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_e4f6c833f6cb1c34,
              mid_init$_f52995fc36b099b9,
              mid_createWeight_77fe52950093e704,
              mid_equals_570b5248a6da3ef6,
              mid_getLowerVal_09a7afff1868fc5e,
              mid_getUpperVal_09a7afff1868fc5e,
              mid_getValueSource_7ac7f4aead9d4416,
              mid_hashCode_20fbf7565993c3d7,
              mid_isIncludeLower_947277eca0748c4e,
              mid_isIncludeUpper_947277eca0748c4e,
              mid_toString_cb0eb1432185fc94,
              mid_visit_1b22ec612b613eea,
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
