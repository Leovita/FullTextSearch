#ifndef org_apache_lucene_search_ByteVectorSimilarityQuery_H
#define org_apache_lucene_search_ByteVectorSimilarityQuery_H

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

        class ByteVectorSimilarityQuery : public ::org::apache::lucene::search::AbstractVectorSimilarityQuery {
         public:
          enum {
            mid_init$_e6b869c49b5977e2,
            mid_init$_fe726bb122c99684,
            mid_init$_056bbbc19f3256ad,
            mid_init$_6e49c7d6aff376fe,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_toString_fef9c036acf290a9,
            mid_approximateSearch_91ef996fb5702f76,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteVectorSimilarityQuery(jobject obj) : ::org::apache::lucene::search::AbstractVectorSimilarityQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteVectorSimilarityQuery(const ByteVectorSimilarityQuery& obj) : ::org::apache::lucene::search::AbstractVectorSimilarityQuery(obj) {}

          ByteVectorSimilarityQuery(const ::java::lang::String &, const JArray< jbyte > &, jfloat);
          ByteVectorSimilarityQuery(const ::java::lang::String &, const JArray< jbyte > &, jfloat, const ::org::apache::lucene::search::Query &);
          ByteVectorSimilarityQuery(const ::java::lang::String &, const JArray< jbyte > &, jfloat, jfloat);
          ByteVectorSimilarityQuery(const ::java::lang::String &, const JArray< jbyte > &, jfloat, jfloat, const ::org::apache::lucene::search::Query &);

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
        extern PyType_Def PY_TYPE_DEF(ByteVectorSimilarityQuery);
        extern PyTypeObject *PY_TYPE(ByteVectorSimilarityQuery);

        class t_ByteVectorSimilarityQuery {
        public:
          PyObject_HEAD
          ByteVectorSimilarityQuery object;
          static PyObject *wrap_Object(const ByteVectorSimilarityQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
