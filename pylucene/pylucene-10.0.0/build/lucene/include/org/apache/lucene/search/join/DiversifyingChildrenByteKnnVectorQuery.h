#ifndef org_apache_lucene_search_join_DiversifyingChildrenByteKnnVectorQuery_H
#define org_apache_lucene_search_join_DiversifyingChildrenByteKnnVectorQuery_H

#include "org/apache/lucene/search/KnnByteVectorQuery.h"

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
namespace java {
  namespace lang {
    class String;
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {

          class DiversifyingChildrenByteKnnVectorQuery : public ::org::apache::lucene::search::KnnByteVectorQuery {
           public:
            enum {
              mid_init$_47153aee0610bee0,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_toString_cb0eb1432185fc94,
              mid_getKnnCollectorManager_1380dddf22057340,
              mid_approximateSearch_2820dd1f2ca7baa6,
              mid_exactSearch_ea6a22a99de35918,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DiversifyingChildrenByteKnnVectorQuery(jobject obj) : ::org::apache::lucene::search::KnnByteVectorQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DiversifyingChildrenByteKnnVectorQuery(const DiversifyingChildrenByteKnnVectorQuery& obj) : ::org::apache::lucene::search::KnnByteVectorQuery(obj) {}

            DiversifyingChildrenByteKnnVectorQuery(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::join::BitSetProducer &);

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
          extern PyType_Def PY_TYPE_DEF(DiversifyingChildrenByteKnnVectorQuery);
          extern PyTypeObject *PY_TYPE(DiversifyingChildrenByteKnnVectorQuery);

          class t_DiversifyingChildrenByteKnnVectorQuery {
          public:
            PyObject_HEAD
            DiversifyingChildrenByteKnnVectorQuery object;
            static PyObject *wrap_Object(const DiversifyingChildrenByteKnnVectorQuery&);
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
