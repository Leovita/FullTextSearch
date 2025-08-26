#ifndef org_apache_lucene_search_AbstractVectorSimilarityQuery_H
#define org_apache_lucene_search_AbstractVectorSimilarityQuery_H

#include "org/apache/lucene/search/Query.h"

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
namespace java {
  namespace lang {
    class Object;
    class Class;
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

        class AbstractVectorSimilarityQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_createWeight_dc54d493278607e4,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_visit_85475af8e8904ab4,
            mid_getKnnCollectorManager_231c57a261cea5a7,
            mid_approximateSearch_91ef996fb5702f76,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractVectorSimilarityQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractVectorSimilarityQuery(const AbstractVectorSimilarityQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractVectorSimilarityQuery);
        extern PyTypeObject *PY_TYPE(AbstractVectorSimilarityQuery);

        class t_AbstractVectorSimilarityQuery {
        public:
          PyObject_HEAD
          AbstractVectorSimilarityQuery object;
          static PyObject *wrap_Object(const AbstractVectorSimilarityQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
