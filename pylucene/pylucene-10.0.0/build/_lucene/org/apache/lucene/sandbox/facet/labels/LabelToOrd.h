#ifndef org_apache_lucene_sandbox_facet_labels_LabelToOrd_H
#define org_apache_lucene_sandbox_facet_labels_LabelToOrd_H

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

            class LabelToOrd : public ::java::lang::Object {
             public:
              enum {
                mid_getOrd_b886af148d2e9c5a,
                mid_getOrds_7d0bc717fafc6e60,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LabelToOrd(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LabelToOrd(const LabelToOrd& obj) : ::java::lang::Object(obj) {}

              static jint INVALID_ORD;

              jint getOrd(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
              JArray< jint > getOrds(const JArray< ::org::apache::lucene::facet::taxonomy::FacetLabel > &) const;
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
            extern PyType_Def PY_TYPE_DEF(LabelToOrd);
            extern PyTypeObject *PY_TYPE(LabelToOrd);

            class t_LabelToOrd {
            public:
              PyObject_HEAD
              LabelToOrd object;
              static PyObject *wrap_Object(const LabelToOrd&);
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
