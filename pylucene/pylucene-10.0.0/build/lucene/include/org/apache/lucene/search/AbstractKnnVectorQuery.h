#ifndef org_apache_lucene_search_AbstractKnnVectorQuery_H
#define org_apache_lucene_search_AbstractKnnVectorQuery_H

#include "org/apache/lucene/search/Query.h"

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
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
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

        class AbstractKnnVectorQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_72cb4a2ac814e2ea,
            mid_equals_00d17418847797d4,
            mid_getField_e7df854526d67fa3,
            mid_getFilter_ffa7bd087b2a75aa,
            mid_getK_bd89ce15dad49192,
            mid_hashCode_bd89ce15dad49192,
            mid_rewrite_25984111320dbe39,
            mid_visit_85475af8e8904ab4,
            mid_mergeLeafResults_52bea8d016a7563b,
            mid_exactSearch_67b6c9b96ad81056,
            mid_getKnnCollectorManager_f9fe5267960b0dc2,
            mid_approximateSearch_91ef996fb5702f76,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractKnnVectorQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractKnnVectorQuery(const AbstractKnnVectorQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          AbstractKnnVectorQuery(const ::java::lang::String &, jint, const ::org::apache::lucene::search::Query &);

          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String getField() const;
          ::org::apache::lucene::search::Query getFilter() const;
          jint getK() const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractKnnVectorQuery);
        extern PyTypeObject *PY_TYPE(AbstractKnnVectorQuery);

        class t_AbstractKnnVectorQuery {
        public:
          PyObject_HEAD
          AbstractKnnVectorQuery object;
          static PyObject *wrap_Object(const AbstractKnnVectorQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
