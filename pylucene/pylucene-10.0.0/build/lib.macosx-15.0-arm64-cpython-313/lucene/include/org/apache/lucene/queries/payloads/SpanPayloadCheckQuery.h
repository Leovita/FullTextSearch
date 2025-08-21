#ifndef org_apache_lucene_queries_payloads_SpanPayloadCheckQuery_H
#define org_apache_lucene_queries_payloads_SpanPayloadCheckQuery_H

#include "org/apache/lucene/queries/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace payloads {
          class SpanPayloadCheckQuery$PayloadType;
          class SpanPayloadCheckQuery$MatchOperation;
        }
        namespace spans {
          class SpanWeight;
        }
      }
      namespace search {
        class Query;
        class IndexSearcher;
        class QueryVisitor;
        class ScoreMode;
      }
      namespace util {
        class BytesRef;
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
    class List;
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

          class SpanPayloadCheckQuery : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_init$_a972b223d9950ca3,
              mid_init$_aafc4285b864bb48,
              mid_createWeight_d7dfaaf9476f49d4,
              mid_equals_570b5248a6da3ef6,
              mid_getField_09a7afff1868fc5e,
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
