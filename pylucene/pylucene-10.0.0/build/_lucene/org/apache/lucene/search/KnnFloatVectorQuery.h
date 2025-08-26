#ifndef org_apache_lucene_search_KnnFloatVectorQuery_H
#define org_apache_lucene_search_KnnFloatVectorQuery_H

#include "org/apache/lucene/search/AbstractKnnVectorQuery.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class KnnFloatVectorQuery : public ::org::apache::lucene::search::AbstractKnnVectorQuery {
         public:
          enum {
            mid_init$_f41f3863017979be,
            mid_init$_6557f529db2173a2,
            mid_equals_00d17418847797d4,
            mid_getTargetCopy_67d89dc3894661ff,
            mid_hashCode_bd89ce15dad49192,
            mid_toString_fef9c036acf290a9,
            mid_approximateSearch_91ef996fb5702f76,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnFloatVectorQuery(jobject obj) : ::org::apache::lucene::search::AbstractKnnVectorQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnFloatVectorQuery(const KnnFloatVectorQuery& obj) : ::org::apache::lucene::search::AbstractKnnVectorQuery(obj) {}

          KnnFloatVectorQuery(const ::java::lang::String &, const JArray< jfloat > &, jint);
          KnnFloatVectorQuery(const ::java::lang::String &, const JArray< jfloat > &, jint, const ::org::apache::lucene::search::Query &);

          jboolean equals(const ::java::lang::Object &) const;
          JArray< jfloat > getTargetCopy() const;
          jint hashCode() const;
          ::java::lang::String toString(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(KnnFloatVectorQuery);
        extern PyTypeObject *PY_TYPE(KnnFloatVectorQuery);

        class t_KnnFloatVectorQuery {
        public:
          PyObject_HEAD
          KnnFloatVectorQuery object;
          static PyObject *wrap_Object(const KnnFloatVectorQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
