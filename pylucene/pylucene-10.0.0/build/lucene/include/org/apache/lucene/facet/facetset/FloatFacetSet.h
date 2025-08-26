#ifndef org_apache_lucene_facet_facetset_FloatFacetSet_H
#define org_apache_lucene_facet_facetset_FloatFacetSet_H

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

          class FloatFacetSet : public ::org::apache::lucene::facet::facetset::FacetSet {
           public:
            enum {
              mid_init$_d2e2fadde4bf8d25,
              mid_getComparableValues_1aab5293a9d94cd3,
              mid_packValues_ae2551807aeb85ef,
              mid_sizePackedBytes_bd89ce15dad49192,
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

            explicit FloatFacetSet(jobject obj) : ::org::apache::lucene::facet::facetset::FacetSet(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FloatFacetSet(const FloatFacetSet& obj) : ::org::apache::lucene::facet::facetset::FacetSet(obj) {}

            JArray< jfloat > _get_values() const;

            FloatFacetSet(const JArray< jfloat > &);

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
          extern PyType_Def PY_TYPE_DEF(FloatFacetSet);
          extern PyTypeObject *PY_TYPE(FloatFacetSet);

          class t_FloatFacetSet {
          public:
            PyObject_HEAD
            FloatFacetSet object;
            static PyObject *wrap_Object(const FloatFacetSet&);
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
