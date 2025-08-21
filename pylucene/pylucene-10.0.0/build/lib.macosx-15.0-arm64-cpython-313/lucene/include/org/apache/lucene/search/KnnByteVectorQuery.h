#ifndef org_apache_lucene_search_KnnByteVectorQuery_H
#define org_apache_lucene_search_KnnByteVectorQuery_H

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

        class KnnByteVectorQuery : public ::org::apache::lucene::search::AbstractKnnVectorQuery {
         public:
          enum {
            mid_init$_1504bc44c69157b3,
            mid_init$_b6ec23a27bc13555,
            mid_equals_570b5248a6da3ef6,
            mid_getTargetCopy_5560da88fc44aa82,
            mid_hashCode_20fbf7565993c3d7,
            mid_toString_cb0eb1432185fc94,
            mid_approximateSearch_2820dd1f2ca7baa6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnByteVectorQuery(jobject obj) : ::org::apache::lucene::search::AbstractKnnVectorQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnByteVectorQuery(const KnnByteVectorQuery& obj) : ::org::apache::lucene::search::AbstractKnnVectorQuery(obj) {}

          KnnByteVectorQuery(const ::java::lang::String &, const JArray< jbyte > &, jint);
          KnnByteVectorQuery(const ::java::lang::String &, const JArray< jbyte > &, jint, const ::org::apache::lucene::search::Query &);

          jboolean equals(const ::java::lang::Object &) const;
          JArray< jbyte > getTargetCopy() const;
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
        extern PyType_Def PY_TYPE_DEF(KnnByteVectorQuery);
        extern PyTypeObject *PY_TYPE(KnnByteVectorQuery);

        class t_KnnByteVectorQuery {
        public:
          PyObject_HEAD
          KnnByteVectorQuery object;
          static PyObject *wrap_Object(const KnnByteVectorQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
