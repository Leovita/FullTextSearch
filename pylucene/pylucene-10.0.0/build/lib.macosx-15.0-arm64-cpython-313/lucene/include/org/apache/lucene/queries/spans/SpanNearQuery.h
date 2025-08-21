#ifndef org_apache_lucene_queries_spans_SpanNearQuery_H
#define org_apache_lucene_queries_spans_SpanNearQuery_H

#include "org/apache/lucene/queries/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class IndexSearcher;
        class QueryVisitor;
        class ScoreMode;
      }
      namespace queries {
        namespace spans {
          class SpanWeight;
          class SpanNearQuery$Builder;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Cloneable;
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
        namespace spans {

          class SpanNearQuery : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_init$_6dd3dea4f70aaf66,
              mid_createWeight_d7dfaaf9476f49d4,
              mid_equals_570b5248a6da3ef6,
              mid_getClauses_2f88687ab1f58c0a,
              mid_getField_09a7afff1868fc5e,
              mid_getSlop_20fbf7565993c3d7,
              mid_hashCode_20fbf7565993c3d7,
              mid_isInOrder_947277eca0748c4e,
              mid_newOrderedNearQuery_2bcab582f4d0e253,
              mid_newUnorderedNearQuery_2bcab582f4d0e253,
              mid_rewrite_aeaa882ae5e96552,
              mid_toString_cb0eb1432185fc94,
              mid_visit_1b22ec612b613eea,
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
