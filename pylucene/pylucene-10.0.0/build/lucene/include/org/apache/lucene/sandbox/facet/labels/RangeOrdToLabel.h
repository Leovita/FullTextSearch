#ifndef org_apache_lucene_sandbox_facet_labels_RangeOrdToLabel_H
#define org_apache_lucene_sandbox_facet_labels_RangeOrdToLabel_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {
          class Range;
        }
        namespace taxonomy {
          class FacetLabel;
        }
      }
      namespace sandbox {
        namespace facet {
          namespace labels {
            class OrdToLabel;
          }
        }
      }
    }
  }
}
namespace java {
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

            class RangeOrdToLabel : public ::java::lang::Object {
             public:
              enum {
                mid_init$_571023a825f65db1,
                mid_getLabel_6c732e2e2e10e82a,
                mid_getLabels_08f83a8c8bc64590,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RangeOrdToLabel(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              RangeOrdToLabel(const RangeOrdToLabel& obj) : ::java::lang::Object(obj) {}

              RangeOrdToLabel(const JArray< ::org::apache::lucene::facet::range::Range > &);

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
            extern PyType_Def PY_TYPE_DEF(RangeOrdToLabel);
            extern PyTypeObject *PY_TYPE(RangeOrdToLabel);

            class t_RangeOrdToLabel {
            public:
              PyObject_HEAD
              RangeOrdToLabel object;
              static PyObject *wrap_Object(const RangeOrdToLabel&);
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
