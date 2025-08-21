#ifndef org_apache_lucene_facet_facetset_IntFacetSet_H
#define org_apache_lucene_facet_facetset_IntFacetSet_H

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

          class IntFacetSet : public ::org::apache::lucene::facet::facetset::FacetSet {
           public:
            enum {
              mid_init$_143c0cd4e297ef70,
              mid_getComparableValues_a057bd1a0d2826b3,
              mid_packValues_ed6f790242489170,
              mid_sizePackedBytes_20fbf7565993c3d7,
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

            explicit IntFacetSet(jobject obj) : ::org::apache::lucene::facet::facetset::FacetSet(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntFacetSet(const IntFacetSet& obj) : ::org::apache::lucene::facet::facetset::FacetSet(obj) {}

            JArray< jint > _get_values() const;

            IntFacetSet(const JArray< jint > &);

            JArray< jlong > getComparableValues() const;
            jint packValues(const JArray< jbyte > &, jint) const;
            jint sizePackedBytes() const;
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
          extern PyType_Def PY_TYPE_DEF(IntFacetSet);
          extern PyTypeObject *PY_TYPE(IntFacetSet);

          class t_IntFacetSet {
          public:
            PyObject_HEAD
            IntFacetSet object;
            static PyObject *wrap_Object(const IntFacetSet&);
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
