#ifndef org_apache_lucene_facet_MultiFacets_H
#define org_apache_lucene_facet_MultiFacets_H

#include "org/apache/lucene/facet/Facets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetResult;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Number;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Map;
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class MultiFacets : public ::org::apache::lucene::facet::Facets {
         public:
          enum {
            mid_init$_6a7e23584beb7c0f,
            mid_init$_2b932a0ee1929d10,
            mid_getAllChildren_09e74013a1015c10,
            mid_getAllDims_b4b9401c877452e3,
            mid_getSpecificValue_a53782a5574e06b9,
            mid_getTopChildren_482e0070129e7ccc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiFacets(jobject obj) : ::org::apache::lucene::facet::Facets(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiFacets(const MultiFacets& obj) : ::org::apache::lucene::facet::Facets(obj) {}

          MultiFacets(const ::java::util::Map &);
          MultiFacets(const ::java::util::Map &, const ::org::apache::lucene::facet::Facets &);

          ::org::apache::lucene::facet::FacetResult getAllChildren(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          ::java::util::List getAllDims(jint) const;
          ::java::lang::Number getSpecificValue(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          ::org::apache::lucene::facet::FacetResult getTopChildren(jint, const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
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
        extern PyType_Def PY_TYPE_DEF(MultiFacets);
        extern PyTypeObject *PY_TYPE(MultiFacets);

        class t_MultiFacets {
        public:
          PyObject_HEAD
          MultiFacets object;
          static PyObject *wrap_Object(const MultiFacets&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
