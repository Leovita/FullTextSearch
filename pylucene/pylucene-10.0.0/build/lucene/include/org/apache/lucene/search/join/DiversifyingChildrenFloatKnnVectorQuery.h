#ifndef org_apache_lucene_search_join_DiversifyingChildrenFloatKnnVectorQuery_H
#define org_apache_lucene_search_join_DiversifyingChildrenFloatKnnVectorQuery_H

#include "org/apache/lucene/search/KnnFloatVectorQuery.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace join {
          class BitSetProducer;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {

          class DiversifyingChildrenFloatKnnVectorQuery : public ::org::apache::lucene::search::KnnFloatVectorQuery {
           public:
            enum {
              mid_init$_ba21d2a51585063c,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_toString_fef9c036acf290a9,
              mid_exactSearch_67b6c9b96ad81056,
              mid_getKnnCollectorManager_f9fe5267960b0dc2,
              mid_approximateSearch_91ef996fb5702f76,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DiversifyingChildrenFloatKnnVectorQuery(jobject obj) : ::org::apache::lucene::search::KnnFloatVectorQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DiversifyingChildrenFloatKnnVectorQuery(const DiversifyingChildrenFloatKnnVectorQuery& obj) : ::org::apache::lucene::search::KnnFloatVectorQuery(obj) {}

            DiversifyingChildrenFloatKnnVectorQuery(const ::java::lang::String &, const JArray< jfloat > &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::join::BitSetProducer &);

            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::java::lang::String toString(const ::java::lang::String &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {
          extern PyType_Def PY_TYPE_DEF(DiversifyingChildrenFloatKnnVectorQuery);
          extern PyTypeObject *PY_TYPE(DiversifyingChildrenFloatKnnVectorQuery);

          class t_DiversifyingChildrenFloatKnnVectorQuery {
          public:
            PyObject_HEAD
            DiversifyingChildrenFloatKnnVectorQuery object;
            static PyObject *wrap_Object(const DiversifyingChildrenFloatKnnVectorQuery&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
