#ifndef org_apache_lucene_facet_FacetCountsWithFilterQuery_H
#define org_apache_lucene_facet_FacetCountsWithFilterQuery_H

#include "org/apache/lucene/facet/Facets.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class FacetCountsWithFilterQuery : public ::org::apache::lucene::facet::Facets {
         public:
          enum {
            mid_createIterator_96150192307cffb7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetCountsWithFilterQuery(jobject obj) : ::org::apache::lucene::facet::Facets(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FacetCountsWithFilterQuery(const FacetCountsWithFilterQuery& obj) : ::org::apache::lucene::facet::Facets(obj) {}
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(FacetCountsWithFilterQuery);
        extern PyTypeObject *PY_TYPE(FacetCountsWithFilterQuery);

        class t_FacetCountsWithFilterQuery {
        public:
          PyObject_HEAD
          FacetCountsWithFilterQuery object;
          static PyObject *wrap_Object(const FacetCountsWithFilterQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
