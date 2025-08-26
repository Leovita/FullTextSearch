#ifndef org_apache_lucene_search_DisjunctionMaxQuery_H
#define org_apache_lucene_search_DisjunctionMaxQuery_H

#include "org/apache/lucene/search/Query.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
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

        class DisjunctionMaxQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_7edbeb2664d84a51,
            mid_createWeight_dc54d493278607e4,
            mid_equals_00d17418847797d4,
            mid_getDisjuncts_4a269b968b3a511f,
            mid_getTieBreakerMultiplier_8b62236f0e4d0dbc,
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

          explicit DisjunctionMaxQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DisjunctionMaxQuery(const DisjunctionMaxQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          DisjunctionMaxQuery(const ::java::util::Collection &, jfloat);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::util::Collection getDisjuncts() const;
          jfloat getTieBreakerMultiplier() const;
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
        extern PyType_Def PY_TYPE_DEF(DisjunctionMaxQuery);
        extern PyTypeObject *PY_TYPE(DisjunctionMaxQuery);

        class t_DisjunctionMaxQuery {
        public:
          PyObject_HEAD
          DisjunctionMaxQuery object;
          static PyObject *wrap_Object(const DisjunctionMaxQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
