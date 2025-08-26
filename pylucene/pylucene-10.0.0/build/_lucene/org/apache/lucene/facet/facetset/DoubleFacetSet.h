#ifndef org_apache_lucene_facet_facetset_DoubleFacetSet_H
#define org_apache_lucene_facet_facetset_DoubleFacetSet_H

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

          class DoubleFacetSet : public ::org::apache::lucene::facet::facetset::FacetSet {
           public:
            enum {
              mid_init$_7dc1191a69fe0b60,
              mid_getComparableValues_1aab5293a9d94cd3,
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

            explicit DoubleFacetSet(jobject obj) : ::org::apache::lucene::facet::facetset::FacetSet(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DoubleFacetSet(const DoubleFacetSet& obj) : ::org::apache::lucene::facet::facetset::FacetSet(obj) {}

            JArray< jdouble > _get_values() const;

            DoubleFacetSet(const JArray< jdouble > &);

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
          extern PyType_Def PY_TYPE_DEF(DoubleFacetSet);
          extern PyTypeObject *PY_TYPE(DoubleFacetSet);

          class t_DoubleFacetSet {
          public:
            PyObject_HEAD
            DoubleFacetSet object;
            static PyObject *wrap_Object(const DoubleFacetSet&);
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
