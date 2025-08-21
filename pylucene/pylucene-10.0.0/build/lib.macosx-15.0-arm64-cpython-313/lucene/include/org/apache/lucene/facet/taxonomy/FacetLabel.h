#ifndef org_apache_lucene_facet_taxonomy_FacetLabel_H
#define org_apache_lucene_facet_taxonomy_FacetLabel_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
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
              mid_init$_ce41e621b30e91b1,
              mid_init$_c16980b675f9738f,
              mid_compareTo_b886af148d2e9c5a,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_lastComponent_09a7afff1868fc5e,
              mid_longHashCode_16939d9d0a9a9721,
              mid_subpath_c21e0250a0465b0f,
              mid_toString_09a7afff1868fc5e,
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
