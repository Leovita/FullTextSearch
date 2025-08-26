#ifndef org_apache_lucene_queries_spans_SpanContainQuery_H
#define org_apache_lucene_queries_spans_SpanContainQuery_H

#include "org/apache/lucene/queries/spans/SpanQuery.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Object;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanContainQuery : public ::org::apache::lucene::queries::spans::SpanQuery {
           public:
            enum {
              mid_equals_00d17418847797d4,
              mid_getBig_181254ec704aaed2,
              mid_getField_e7df854526d67fa3,
              mid_getLittle_181254ec704aaed2,
              mid_hashCode_bd89ce15dad49192,
              mid_rewrite_25984111320dbe39,
              mid_visit_85475af8e8904ab4,
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
