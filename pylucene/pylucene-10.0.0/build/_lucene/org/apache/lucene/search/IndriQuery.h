#ifndef org_apache_lucene_search_IndriQuery_H
#define org_apache_lucene_search_IndriQuery_H

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
        class IndexSearcher;
        class QueryVisitor;
        class BooleanClause;
        class Weight;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class IndriQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_acbb405b60a30822,
            mid_createWeight_dc54d493278607e4,
            mid_equals_00d17418847797d4,
            mid_getClauses_1387e1e2702ac173,
            mid_hashCode_bd89ce15dad49192,
            mid_iterator_c7985fafdcf40e83,
            mid_toString_fef9c036acf290a9,
            mid_visit_85475af8e8904ab4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndriQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndriQuery(const IndriQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          IndriQuery(const ::java::util::List &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::util::List getClauses() const;
          jint hashCode() const;
          ::java::util::Iterator iterator() const;
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
        extern PyType_Def PY_TYPE_DEF(IndriQuery);
        extern PyTypeObject *PY_TYPE(IndriQuery);

        class t_IndriQuery {
        public:
          PyObject_HEAD
          IndriQuery object;
          static PyObject *wrap_Object(const IndriQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
