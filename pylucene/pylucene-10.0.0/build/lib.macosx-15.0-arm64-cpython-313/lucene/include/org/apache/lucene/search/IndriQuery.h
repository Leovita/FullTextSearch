#ifndef org_apache_lucene_search_IndriQuery_H
#define org_apache_lucene_search_IndriQuery_H

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

        class IndriQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_9425cd4f62c94bce,
            mid_createWeight_77fe52950093e704,
            mid_equals_570b5248a6da3ef6,
            mid_getClauses_36830460e10839eb,
            mid_hashCode_20fbf7565993c3d7,
            mid_iterator_0db4c76ff7ee995b,
            mid_toString_cb0eb1432185fc94,
            mid_visit_1b22ec612b613eea,
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
