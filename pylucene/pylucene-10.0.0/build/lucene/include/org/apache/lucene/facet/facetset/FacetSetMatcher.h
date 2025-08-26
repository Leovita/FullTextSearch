#ifndef org_apache_lucene_facet_facetset_FacetSetMatcher_H
#define org_apache_lucene_facet_facetset_FacetSetMatcher_H

#include "java/lang/Object.h"

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
        namespace facetset {

          class FacetSetMatcher : public ::java::lang::Object {
           public:
            enum {
              mid_matches_7ded1ec63264c3c1,
              max_mid
            };

            enum {
              fid_dims,
              fid_label,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FacetSetMatcher(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FacetSetMatcher(const FacetSetMatcher& obj) : ::java::lang::Object(obj) {}

            jint _get_dims() const;
            ::java::lang::String _get_label() const;

            jboolean matches(const JArray< jlong > &) const;
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
          extern PyType_Def PY_TYPE_DEF(FacetSetMatcher);
          extern PyTypeObject *PY_TYPE(FacetSetMatcher);

          class t_FacetSetMatcher {
          public:
            PyObject_HEAD
            FacetSetMatcher object;
            static PyObject *wrap_Object(const FacetSetMatcher&);
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
