#ifndef org_apache_lucene_search_AbstractVectorSimilarityQuery_H
#define org_apache_lucene_search_AbstractVectorSimilarityQuery_H

#include "org/apache/lucene/search/Query.h"

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
namespace java {
  namespace lang {
    class Class;
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
      namespace search {

        class AbstractVectorSimilarityQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_createWeight_77fe52950093e704,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_visit_1b22ec612b613eea,
            mid_getKnnCollectorManager_0362cc9e9dae94ff,
            mid_approximateSearch_2820dd1f2ca7baa6,
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
