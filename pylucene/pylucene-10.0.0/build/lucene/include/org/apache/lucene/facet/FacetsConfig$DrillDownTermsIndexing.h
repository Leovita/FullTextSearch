#ifndef org_apache_lucene_facet_FacetsConfig$DrillDownTermsIndexing_H
#define org_apache_lucene_facet_FacetsConfig$DrillDownTermsIndexing_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsConfig$DrillDownTermsIndexing;
      }
    }
  }
}
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

        class FacetsConfig$DrillDownTermsIndexing : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_a6b16938cc7474af,
            mid_values_ac43afe52d8eff88,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetsConfig$DrillDownTermsIndexing(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FacetsConfig$DrillDownTermsIndexing(const FacetsConfig$DrillDownTermsIndexing& obj) : ::java::lang::Enum(obj) {}

          static FacetsConfig$DrillDownTermsIndexing *ALL;
          static FacetsConfig$DrillDownTermsIndexing *ALL_PATHS_NO_DIM;
          static FacetsConfig$DrillDownTermsIndexing *DIMENSION_AND_FULL_PATH;
          static FacetsConfig$DrillDownTermsIndexing *FULL_PATH_ONLY;
          static FacetsConfig$DrillDownTermsIndexing *NONE;

          static FacetsConfig$DrillDownTermsIndexing valueOf(const ::java::lang::String &);
          static JArray< FacetsConfig$DrillDownTermsIndexing > values();
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
        extern PyType_Def PY_TYPE_DEF(FacetsConfig$DrillDownTermsIndexing);
        extern PyTypeObject *PY_TYPE(FacetsConfig$DrillDownTermsIndexing);

        class t_FacetsConfig$DrillDownTermsIndexing {
        public:
          PyObject_HEAD
          FacetsConfig$DrillDownTermsIndexing object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FacetsConfig$DrillDownTermsIndexing *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FacetsConfig$DrillDownTermsIndexing&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FacetsConfig$DrillDownTermsIndexing&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
