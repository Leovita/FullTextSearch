#ifndef org_apache_lucene_queries_payloads_PayloadScoreQuery_H
#define org_apache_lucene_queries_payloads_PayloadScoreQuery_H

#include "org/apache/lucene/queries/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class Query;
        class QueryVisitor;
        class IndexSearcher;
      }
      namespace queries {
        namespace payloads {
          class PayloadDecoder;
          class PayloadFunction;
        }
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
        namespace payloads {

          class PayloadScoreQuery : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_init$_ebc6cf9e1be53e82,
              mid_init$_1cba9aa483a056d8,
              mid_createWeight_b33c2c90db0d1d7e,
              mid_equals_00d17418847797d4,
              mid_getField_e7df854526d67fa3,
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

            explicit PayloadScoreQuery(jobject obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PayloadScoreQuery(const PayloadScoreQuery& obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {}

            PayloadScoreQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::org::apache::lucene::queries::payloads::PayloadFunction &, const ::org::apache::lucene::queries::payloads::PayloadDecoder &);
            PayloadScoreQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::org::apache::lucene::queries::payloads::PayloadFunction &, const ::org::apache::lucene::queries::payloads::PayloadDecoder &, jboolean);

            ::org::apache::lucene::queries::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getField() const;
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
        namespace payloads {
          extern PyType_Def PY_TYPE_DEF(PayloadScoreQuery);
          extern PyTypeObject *PY_TYPE(PayloadScoreQuery);

          class t_PayloadScoreQuery {
          public:
            PyObject_HEAD
            PayloadScoreQuery object;
            static PyObject *wrap_Object(const PayloadScoreQuery&);
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
