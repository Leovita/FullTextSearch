#ifndef org_apache_lucene_sandbox_facet_labels_OrdToLabel_H
#define org_apache_lucene_sandbox_facet_labels_OrdToLabel_H

#include "java/lang/Object.h"

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
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace labels {

            class OrdToLabel : public ::java::lang::Object {
             public:
              enum {
                mid_getLabel_6c732e2e2e10e82a,
                mid_getLabels_08f83a8c8bc64590,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit OrdToLabel(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              OrdToLabel(const OrdToLabel& obj) : ::java::lang::Object(obj) {}

              ::org::apache::lucene::facet::taxonomy::FacetLabel getLabel(jint) const;
              JArray< ::org::apache::lucene::facet::taxonomy::FacetLabel > getLabels(const JArray< jint > &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace labels {
            extern PyType_Def PY_TYPE_DEF(OrdToLabel);
            extern PyTypeObject *PY_TYPE(OrdToLabel);

            class t_OrdToLabel {
            public:
              PyObject_HEAD
              OrdToLabel object;
              static PyObject *wrap_Object(const OrdToLabel&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
