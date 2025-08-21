#ifndef org_apache_lucene_facet_facetset_LongFacetSet_H
#define org_apache_lucene_facet_facetset_LongFacetSet_H

#include "org/apache/lucene/facet/facetset/FacetSet.h"

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
        namespace facetset {

          class LongFacetSet : public ::org::apache::lucene::facet::facetset::FacetSet {
           public:
            enum {
              mid_init$_140bd592f9f15dfc,
              mid_getComparableValues_a057bd1a0d2826b3,
              max_mid
            };

            enum {
              fid_values,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LongFacetSet(jobject obj) : ::org::apache::lucene::facet::facetset::FacetSet(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongFacetSet(const LongFacetSet& obj) : ::org::apache::lucene::facet::facetset::FacetSet(obj) {}

            JArray< jlong > _get_values() const;

            LongFacetSet(const JArray< jlong > &);

            JArray< jlong > getComparableValues() const;
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
        namespace facetset {
          extern PyType_Def PY_TYPE_DEF(LongFacetSet);
          extern PyTypeObject *PY_TYPE(LongFacetSet);

          class t_LongFacetSet {
          public:
            PyObject_HEAD
            LongFacetSet object;
            static PyObject *wrap_Object(const LongFacetSet&);
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
