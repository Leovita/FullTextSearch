#ifndef org_apache_lucene_search_similarities_IndriDirichletSimilarity$IndriCollectionModel_H
#define org_apache_lucene_search_similarities_IndriDirichletSimilarity$IndriCollectionModel_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class LMSimilarity$CollectionModel;
          class BasicStats;
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
        namespace similarities {

          class IndriDirichletSimilarity$IndriCollectionModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_computeProbability_b8ff741895585201,
              mid_getName_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndriDirichletSimilarity$IndriCollectionModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndriDirichletSimilarity$IndriCollectionModel(const IndriDirichletSimilarity$IndriCollectionModel& obj) : ::java::lang::Object(obj) {}

            IndriDirichletSimilarity$IndriCollectionModel();

            jdouble computeProbability(const ::org::apache::lucene::search::similarities::BasicStats &) const;
            ::java::lang::String getName() const;
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
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(IndriDirichletSimilarity$IndriCollectionModel);
          extern PyTypeObject *PY_TYPE(IndriDirichletSimilarity$IndriCollectionModel);

          class t_IndriDirichletSimilarity$IndriCollectionModel {
          public:
            PyObject_HEAD
            IndriDirichletSimilarity$IndriCollectionModel object;
            static PyObject *wrap_Object(const IndriDirichletSimilarity$IndriCollectionModel&);
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
