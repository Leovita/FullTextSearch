#ifndef org_apache_lucene_queries_spans_FieldMaskingSpanQuery_H
#define org_apache_lucene_queries_spans_FieldMaskingSpanQuery_H

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

          class FieldMaskingSpanQuery : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_init$_9da33701ec4e8e8e,
              mid_createWeight_d7dfaaf9476f49d4,
              mid_equals_570b5248a6da3ef6,
              mid_getField_09a7afff1868fc5e,
              mid_getMaskedQuery_ccd29998bab337f9,
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

            explicit FieldMaskingSpanQuery(jobject obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldMaskingSpanQuery(const FieldMaskingSpanQuery& obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {}

            FieldMaskingSpanQuery(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::java::lang::String &);

            ::org::apache::lucene::queries::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::queries::spans::SpanQuery getMaskedQuery() const;
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
          extern PyType_Def PY_TYPE_DEF(FieldMaskingSpanQuery);
          extern PyTypeObject *PY_TYPE(FieldMaskingSpanQuery);

          class t_FieldMaskingSpanQuery {
          public:
            PyObject_HEAD
            FieldMaskingSpanQuery object;
            static PyObject *wrap_Object(const FieldMaskingSpanQuery&);
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
