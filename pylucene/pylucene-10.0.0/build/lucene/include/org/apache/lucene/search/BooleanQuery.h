#ifndef org_apache_lucene_search_BooleanQuery_H
#define org_apache_lucene_search_BooleanQuery_H

#include "org/apache/lucene/search/Query.h"

namespace java {
  namespace util {
    class Iterator;
    class List;
  }
  namespace lang {
    class Object;
    class Class;
    class String;
    class Iterable;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class Weight;
        class QueryVisitor;
        class BooleanClause;
        class IndexSearcher;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class BooleanQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_clauses_1387e1e2702ac173,
            mid_createWeight_dc54d493278607e4,
            mid_equals_00d17418847797d4,
            mid_getMinimumNumberShouldMatch_bd89ce15dad49192,
            mid_hashCode_bd89ce15dad49192,
            mid_iterator_c7985fafdcf40e83,
            mid_rewrite_25984111320dbe39,
            mid_toString_fef9c036acf290a9,
            mid_visit_85475af8e8904ab4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BooleanQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BooleanQuery(const BooleanQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          ::java::util::List clauses() const;
          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint getMinimumNumberShouldMatch() const;
          jint hashCode() const;
          ::java::util::Iterator iterator() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
          ::java::lang::String toString(const ::java::lang::String &) const;
          void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(BooleanQuery);
        extern PyTypeObject *PY_TYPE(BooleanQuery);

        class t_BooleanQuery {
        public:
          PyObject_HEAD
          BooleanQuery object;
          static PyObject *wrap_Object(const BooleanQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
