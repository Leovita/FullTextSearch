#ifndef org_apache_lucene_facet_taxonomy_FacetLabel_H
#define org_apache_lucene_facet_taxonomy_FacetLabel_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class FacetLabel;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class FacetLabel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_1f90f2fcbe43e50d,
              mid_init$_4c0d457b1588985f,
              mid_compareTo_36dd33e0173c4244,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_lastComponent_e7df854526d67fa3,
              mid_longHashCode_0f176418e3e16541,
              mid_subpath_6c732e2e2e10e82a,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            enum {
              fid_components,
              fid_length,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FacetLabel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FacetLabel(const FacetLabel& obj) : ::java::lang::Object(obj) {}

            static jint MAX_CATEGORY_PATH_LENGTH;

            JArray< ::java::lang::String > _get_components() const;
            jint _get_length() const;

            FacetLabel(const JArray< ::java::lang::String > &);
            FacetLabel(const ::java::lang::String &, const JArray< ::java::lang::String > &);

            jint compareTo(const FacetLabel &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::java::lang::String lastComponent() const;
            jlong longHashCode() const;
            FacetLabel subpath(jint) const;
            ::java::lang::String toString() const;
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
        namespace taxonomy {
          extern PyType_Def PY_TYPE_DEF(FacetLabel);
          extern PyTypeObject *PY_TYPE(FacetLabel);

          class t_FacetLabel {
          public:
            PyObject_HEAD
            FacetLabel object;
            static PyObject *wrap_Object(const FacetLabel&);
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
