#ifndef org_apache_lucene_search_BooleanQuery_H
#define org_apache_lucene_search_BooleanQuery_H

#include "org/apache/lucene/search/Query.h"

namespace java {
  namespace util {
    class Iterator;
    class List;
  }
  namespace lang {
    class Class;
    class String;
    class Iterable;
    class Object;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class QueryVisitor;
        class ScoreMode;
        class Weight;
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
            mid_clauses_36830460e10839eb,
            mid_createWeight_77fe52950093e704,
            mid_equals_570b5248a6da3ef6,
            mid_getMinimumNumberShouldMatch_20fbf7565993c3d7,
            mid_hashCode_20fbf7565993c3d7,
            mid_iterator_0db4c76ff7ee995b,
            mid_rewrite_aeaa882ae5e96552,
            mid_toString_cb0eb1432185fc94,
            mid_visit_1b22ec612b613eea,
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
