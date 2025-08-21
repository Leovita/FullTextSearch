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
            mid_init$_65fbb8dfa540c664,
            mid_init$_98cd59b9a8db03d6,
            mid_init$_4a087004c1580994,
            mid_init$_72110edbbf99fb7f,
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
