#ifndef org_apache_lucene_search_AbstractKnnVectorQuery_H
#define org_apache_lucene_search_AbstractKnnVectorQuery_H

#include "org/apache/lucene/search/Query.h"

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
namespace java {
  namespace lang {
    class Class;
    class String;
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

        class AbstractKnnVectorQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_c77abfe775f015a8,
            mid_equals_570b5248a6da3ef6,
            mid_getField_09a7afff1868fc5e,
            mid_getFilter_a3eacfacada795d4,
            mid_getK_20fbf7565993c3d7,
            mid_hashCode_20fbf7565993c3d7,
            mid_rewrite_aeaa882ae5e96552,
            mid_visit_1b22ec612b613eea,
            mid_getKnnCollectorManager_1380dddf22057340,
            mid_mergeLeafResults_5be92ee3fd30acaf,
            mid_approximateSearch_2820dd1f2ca7baa6,
            mid_exactSearch_ea6a22a99de35918,
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
