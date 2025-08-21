#ifndef org_apache_lucene_sandbox_facet_recorders_FacetRecorder_H
#define org_apache_lucene_sandbox_facet_recorders_FacetRecorder_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace iterators {
            class OrdinalIterator;
          }
          namespace cutters {
            class FacetCutter;
          }
          namespace recorders {
            class LeafFacetRecorder;
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
                mid_contains_ae22d3a856ad56f1,
                mid_getLeafRecorder_2a2d00636bd9a973,
                mid_isEmpty_947277eca0748c4e,
                mid_recordedOrds_57cddf93ba106e9f,
                mid_reduce_b6f6e293249d2dde,
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
