#ifndef org_apache_lucene_sandbox_facet_recorders_FacetRecorder_H
#define org_apache_lucene_sandbox_facet_recorders_FacetRecorder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace recorders {
            class LeafFacetRecorder;
          }
          namespace iterators {
            class OrdinalIterator;
          }
          namespace cutters {
            class FacetCutter;
          }
        }
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace recorders {

            class FacetRecorder : public ::java::lang::Object {
             public:
              enum {
                mid_contains_a8281eb3b9d9672d,
                mid_getLeafRecorder_5bbfd55d37aae51b,
                mid_isEmpty_9aa4f33e82ea333f,
                mid_recordedOrds_8b96a93b5acb34cf,
                mid_reduce_530641278d3adcf6,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FacetRecorder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FacetRecorder(const FacetRecorder& obj) : ::java::lang::Object(obj) {}

              jboolean contains(jint) const;
              ::org::apache::lucene::sandbox::facet::recorders::LeafFacetRecorder getLeafRecorder(const ::org::apache::lucene::index::LeafReaderContext &) const;
              jboolean isEmpty() const;
              ::org::apache::lucene::sandbox::facet::iterators::OrdinalIterator recordedOrds() const;
              void reduce(const ::org::apache::lucene::sandbox::facet::cutters::FacetCutter &) const;
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
          namespace recorders {
            extern PyType_Def PY_TYPE_DEF(FacetRecorder);
            extern PyTypeObject *PY_TYPE(FacetRecorder);

            class t_FacetRecorder {
            public:
              PyObject_HEAD
              FacetRecorder object;
              static PyObject *wrap_Object(const FacetRecorder&);
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
