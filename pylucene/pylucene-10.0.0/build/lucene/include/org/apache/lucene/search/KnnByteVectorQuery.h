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
            mid_init$_9be52dc5e7a345ae,
            mid_init$_a078c8536d604f7d,
            mid_equals_00d17418847797d4,
            mid_getTargetCopy_44e916dc40fc04cb,
            mid_hashCode_bd89ce15dad49192,
            mid_toString_fef9c036acf290a9,
            mid_approximateSearch_91ef996fb5702f76,
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
