#ifndef org_apache_lucene_search_FloatVectorSimilarityQuery_H
#define org_apache_lucene_search_FloatVectorSimilarityQuery_H

#include "org/apache/lucene/search/AbstractVectorSimilarityQuery.h"

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

        class FloatVectorSimilarityQuery : public ::org::apache::lucene::search::AbstractVectorSimilarityQuery {
         public:
          enum {
            mid_init$_af0976d36d789d28,
            mid_init$_1ffd91a65df74965,
            mid_init$_ae600c2a68a12f7c,
            mid_init$_6315980074f7a283,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_toString_cb0eb1432185fc94,
            mid_approximateSearch_2820dd1f2ca7baa6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FloatVectorSimilarityQuery(jobject obj) : ::org::apache::lucene::search::AbstractVectorSimilarityQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FloatVectorSimilarityQuery(const FloatVectorSimilarityQuery& obj) : ::org::apache::lucene::search::AbstractVectorSimilarityQuery(obj) {}

          FloatVectorSimilarityQuery(const ::java::lang::String &, const JArray< jfloat > &, jfloat);
          FloatVectorSimilarityQuery(const ::java::lang::String &, const JArray< jfloat > &, jfloat, const ::org::apache::lucene::search::Query &);
          FloatVectorSimilarityQuery(const ::java::lang::String &, const JArray< jfloat > &, jfloat, jfloat);
          FloatVectorSimilarityQuery(const ::java::lang::String &, const JArray< jfloat > &, jfloat, jfloat, const ::org::apache::lucene::search::Query &);

          jboolean equals(const ::java::lang::Object &) const;
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
        extern PyType_Def PY_TYPE_DEF(FloatVectorSimilarityQuery);
        extern PyTypeObject *PY_TYPE(FloatVectorSimilarityQuery);

        class t_FloatVectorSimilarityQuery {
        public:
          PyObject_HEAD
          FloatVectorSimilarityQuery object;
          static PyObject *wrap_Object(const FloatVectorSimilarityQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
