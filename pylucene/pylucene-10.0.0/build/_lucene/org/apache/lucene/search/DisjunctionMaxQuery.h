#ifndef org_apache_lucene_search_DisjunctionMaxQuery_H
#define org_apache_lucene_search_DisjunctionMaxQuery_H

#include "org/apache/lucene/search/Query.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
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
            mid_init$_6884714f3b6c651b,
            mid_createWeight_77fe52950093e704,
            mid_equals_570b5248a6da3ef6,
            mid_getDisjuncts_aa58b3beec16cbbd,
            mid_getTieBreakerMultiplier_9b6c3480dac00edf,
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
