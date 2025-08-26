#ifndef org_apache_lucene_facet_sortedset_AbstractSortedSetDocValueFacetCounts_H
#define org_apache_lucene_facet_sortedset_AbstractSortedSetDocValueFacetCounts_H

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
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {

          class AbstractSortedSetDocValueFacetCounts : public ::org::apache::lucene::facet::Facets {
           public:
            enum {
              mid_getAllChildren_09e74013a1015c10,
              mid_getAllDims_b4b9401c877452e3,
              mid_getSpecificValue_a53782a5574e06b9,
              mid_getTopChildren_482e0070129e7ccc,
              mid_getTopDims_6d7644d6c0697519,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractSortedSetDocValueFacetCounts(jobject obj) : ::org::apache::lucene::facet::Facets(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractSortedSetDocValueFacetCounts(const AbstractSortedSetDocValueFacetCounts& obj) : ::org::apache::lucene::facet::Facets(obj) {}

            ::org::apache::lucene::facet::FacetResult getAllChildren(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::java::util::List getAllDims(jint) const;
            ::java::lang::Number getSpecificValue(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::org::apache::lucene::facet::FacetResult getTopChildren(jint, const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::java::util::List getTopDims(jint, jint) const;
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
      namespace facet {
        namespace sortedset {
          extern PyType_Def PY_TYPE_DEF(AbstractSortedSetDocValueFacetCounts);
          extern PyTypeObject *PY_TYPE(AbstractSortedSetDocValueFacetCounts);

          class t_AbstractSortedSetDocValueFacetCounts {
          public:
            PyObject_HEAD
            AbstractSortedSetDocValueFacetCounts object;
            static PyObject *wrap_Object(const AbstractSortedSetDocValueFacetCounts&);
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
