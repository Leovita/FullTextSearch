#ifndef org_apache_lucene_facet_facetset_FacetSet_H
#define org_apache_lucene_facet_facetset_FacetSet_H

#include "java/lang/Object.h"

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

          class FacetSet : public ::java::lang::Object {
           public:
            enum {
              mid_getComparableValues_a057bd1a0d2826b3,
              mid_packValues_ed6f790242489170,
              mid_sizePackedBytes_20fbf7565993c3d7,
              max_mid
            };

            enum {
              fid_dims,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FacetSet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FacetSet(const FacetSet& obj) : ::java::lang::Object(obj) {}

            jint _get_dims() const;

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
          extern PyType_Def PY_TYPE_DEF(FacetSet);
          extern PyTypeObject *PY_TYPE(FacetSet);

          class t_FacetSet {
          public:
            PyObject_HEAD
            FacetSet object;
            static PyObject *wrap_Object(const FacetSet&);
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
