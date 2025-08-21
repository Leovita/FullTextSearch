#ifndef org_apache_lucene_queries_spans_SpanNotQuery_H
#define org_apache_lucene_queries_spans_SpanNotQuery_H

#include "org/apache/lucene/queries/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class QueryVisitor;
        class ScoreMode;
        class IndexSearcher;
      }
      namespace queries {
        namespace spans {
          class SpanWeight;
        }
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
        namespace spans {

          class SpanNotQuery : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_init$_1a11072446ea80b0,
              mid_init$_f8977f99abc7b71f,
              mid_init$_3e7bfe710be01b58,
              mid_createWeight_d7dfaaf9476f49d4,
              mid_equals_570b5248a6da3ef6,
              mid_getExclude_ccd29998bab337f9,
              mid_getField_09a7afff1868fc5e,
              mid_getInclude_ccd29998bab337f9,
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

            explicit SpanNotQuery(jobject obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanNotQuery(const SpanNotQuery& obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {}

            SpanNotQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::org::apache::lucene::queries::spans::SpanQuery &);
            SpanNotQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::org::apache::lucene::queries::spans::SpanQuery &, jint);
            SpanNotQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::org::apache::lucene::queries::spans::SpanQuery &, jint, jint);

            ::org::apache::lucene::queries::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::queries::spans::SpanQuery getExclude() const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::queries::spans::SpanQuery getInclude() const;
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
        namespace spans {
          extern PyType_Def PY_TYPE_DEF(SpanNotQuery);
          extern PyTypeObject *PY_TYPE(SpanNotQuery);

          class t_SpanNotQuery {
          public:
            PyObject_HEAD
            SpanNotQuery object;
            static PyObject *wrap_Object(const SpanNotQuery&);
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
