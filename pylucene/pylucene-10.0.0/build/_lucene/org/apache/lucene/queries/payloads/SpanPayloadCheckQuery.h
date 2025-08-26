#ifndef org_apache_lucene_queries_payloads_SpanPayloadCheckQuery_H
#define org_apache_lucene_queries_payloads_SpanPayloadCheckQuery_H

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
          class SpanPayloadCheckQuery$PayloadType;
          class SpanPayloadCheckQuery$MatchOperation;
        }
        namespace spans {
          class SpanWeight;
        }
      }
      namespace util {
        class BytesRef;
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
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace payloads {

          class SpanPayloadCheckQuery : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_init$_625311e8344c118a,
              mid_init$_f511cc998113ea98,
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

            explicit SpanPayloadCheckQuery(jobject obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanPayloadCheckQuery(const SpanPayloadCheckQuery& obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {}

            SpanPayloadCheckQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::java::util::List &);
            SpanPayloadCheckQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::java::util::List &, const ::org::apache::lucene::queries::payloads::SpanPayloadCheckQuery$PayloadType &, const ::org::apache::lucene::queries::payloads::SpanPayloadCheckQuery$MatchOperation &);

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
          extern PyType_Def PY_TYPE_DEF(SpanPayloadCheckQuery);
          extern PyTypeObject *PY_TYPE(SpanPayloadCheckQuery);

          class t_SpanPayloadCheckQuery {
          public:
            PyObject_HEAD
            SpanPayloadCheckQuery object;
            static PyObject *wrap_Object(const SpanPayloadCheckQuery&);
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
