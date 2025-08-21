#ifndef org_apache_lucene_queries_spans_SpanContainQuery_H
#define org_apache_lucene_queries_spans_SpanContainQuery_H

#include "org/apache/lucene/queries/spans/SpanQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class QueryVisitor;
        class IndexSearcher;
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

          class SpanContainQuery : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_equals_570b5248a6da3ef6,
              mid_getBig_ccd29998bab337f9,
              mid_getField_09a7afff1868fc5e,
              mid_getLittle_ccd29998bab337f9,
              mid_hashCode_20fbf7565993c3d7,
              mid_rewrite_aeaa882ae5e96552,
              mid_visit_1b22ec612b613eea,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanContainQuery(jobject obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanContainQuery(const SpanContainQuery& obj) : ::org::apache::lucene::queries::spans::SpanQuery(obj) {}

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::queries::spans::SpanQuery getBig() const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::queries::spans::SpanQuery getLittle() const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanContainQuery);
          extern PyTypeObject *PY_TYPE(SpanContainQuery);

          class t_SpanContainQuery {
          public:
            PyObject_HEAD
            SpanContainQuery object;
            static PyObject *wrap_Object(const SpanContainQuery&);
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
