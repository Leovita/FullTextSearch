#ifndef org_apache_lucene_search_IndexSortSortedNumericDocValuesRangeQuery_H
#define org_apache_lucene_search_IndexSortSortedNumericDocValuesRangeQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class IndexSearcher;
        class QueryVisitor;
        class Weight;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class IndexSortSortedNumericDocValuesRangeQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_fd79c741a67d2afc,
            mid_createWeight_dc54d493278607e4,
            mid_equals_00d17418847797d4,
            mid_getFallbackQuery_ffa7bd087b2a75aa,
            mid_hashCode_bd89ce15dad49192,
            mid_rewrite_25984111320dbe39,
            mid_toString_fef9c036acf290a9,
            mid_visit_85475af8e8904ab4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSortSortedNumericDocValuesRangeQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSortSortedNumericDocValuesRangeQuery(const IndexSortSortedNumericDocValuesRangeQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          IndexSortSortedNumericDocValuesRangeQuery(const ::java::lang::String &, jlong, jlong, const ::org::apache::lucene::search::Query &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::Query getFallbackQuery() const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexSortSortedNumericDocValuesRangeQuery);
        extern PyTypeObject *PY_TYPE(IndexSortSortedNumericDocValuesRangeQuery);

        class t_IndexSortSortedNumericDocValuesRangeQuery {
        public:
          PyObject_HEAD
          IndexSortSortedNumericDocValuesRangeQuery object;
          static PyObject *wrap_Object(const IndexSortSortedNumericDocValuesRangeQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
