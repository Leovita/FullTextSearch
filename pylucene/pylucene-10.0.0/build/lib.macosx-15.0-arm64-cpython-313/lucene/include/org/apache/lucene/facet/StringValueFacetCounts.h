#ifndef org_apache_lucene_facet_StringValueFacetCounts_H
#define org_apache_lucene_facet_StringValueFacetCounts_H

#include "org/apache/lucene/facet/Facets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsCollector;
        class StringDocValuesReaderState;
        class FacetResult;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Number;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class StringValueFacetCounts : public ::org::apache::lucene::facet::Facets {
         public:
          enum {
            mid_init$_1cb43ac3f755abb1,
            mid_init$_bf83210d9664e8ff,
            mid_getAllChildren_51a67cf6dd940ebb,
            mid_getAllDims_3e47fe599d76d583,
            mid_getSpecificValue_7fd685ee82fd50c5,
            mid_getTopChildren_ca1b3747bbcc4341,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StringValueFacetCounts(jobject obj) : ::org::apache::lucene::facet::Facets(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StringValueFacetCounts(const StringValueFacetCounts& obj) : ::org::apache::lucene::facet::Facets(obj) {}

          StringValueFacetCounts(const ::org::apache::lucene::facet::StringDocValuesReaderState &);
          StringValueFacetCounts(const ::org::apache::lucene::facet::StringDocValuesReaderState &, const ::org::apache::lucene::facet::FacetsCollector &);

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
        extern PyType_Def PY_TYPE_DEF(StringValueFacetCounts);
        extern PyTypeObject *PY_TYPE(StringValueFacetCounts);

        class t_StringValueFacetCounts {
        public:
          PyObject_HEAD
          StringValueFacetCounts object;
          static PyObject *wrap_Object(const StringValueFacetCounts&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
