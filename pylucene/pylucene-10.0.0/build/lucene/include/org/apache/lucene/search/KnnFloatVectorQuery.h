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
            mid_init$_b87d4f9c1a1b228f,
            mid_init$_6cd3f93c4b7d050b,
            mid_equals_570b5248a6da3ef6,
            mid_getTargetCopy_808165844ea67079,
            mid_hashCode_20fbf7565993c3d7,
            mid_toString_cb0eb1432185fc94,
            mid_approximateSearch_2820dd1f2ca7baa6,
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
