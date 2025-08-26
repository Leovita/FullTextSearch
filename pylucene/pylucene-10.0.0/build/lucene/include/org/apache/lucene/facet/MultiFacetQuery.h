#ifndef org_apache_lucene_facet_MultiFacetQuery_H
#define org_apache_lucene_facet_MultiFacetQuery_H

#include "org/apache/lucene/search/TermInSetQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsConfig;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class MultiFacetQuery : public ::org::apache::lucene::search::TermInSetQuery {
         public:
          enum {
            mid_init$_248b34d6defce16a,
            mid_init$_594faaa865a0365e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiFacetQuery(jobject obj) : ::org::apache::lucene::search::TermInSetQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiFacetQuery(const MultiFacetQuery& obj) : ::org::apache::lucene::search::TermInSetQuery(obj) {}

          MultiFacetQuery(const ::java::lang::String &, const JArray< JArray< ::java::lang::String > > &);
          MultiFacetQuery(const ::org::apache::lucene::facet::FacetsConfig &, const ::java::lang::String &, const JArray< JArray< ::java::lang::String > > &);
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
        extern PyType_Def PY_TYPE_DEF(MultiFacetQuery);
        extern PyTypeObject *PY_TYPE(MultiFacetQuery);

        class t_MultiFacetQuery {
        public:
          PyObject_HEAD
          MultiFacetQuery object;
          static PyObject *wrap_Object(const MultiFacetQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
