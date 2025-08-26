#ifndef org_apache_lucene_sandbox_facet_recorders_MultiFacetsRecorder_H
#define org_apache_lucene_sandbox_facet_recorders_MultiFacetsRecorder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace recorders {
            class FacetRecorder;
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
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace recorders {

            class MultiFacetsRecorder : public ::java::lang::Object {
             public:
              enum {
                mid_init$_de41fd8b782c01fb,
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

              explicit MultiFacetsRecorder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MultiFacetsRecorder(const MultiFacetsRecorder& obj) : ::java::lang::Object(obj) {}

              MultiFacetsRecorder(const JArray< ::org::apache::lucene::sandbox::facet::recorders::FacetRecorder > &);

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
            extern PyType_Def PY_TYPE_DEF(MultiFacetsRecorder);
            extern PyTypeObject *PY_TYPE(MultiFacetsRecorder);

            class t_MultiFacetsRecorder {
            public:
              PyObject_HEAD
              MultiFacetsRecorder object;
              static PyObject *wrap_Object(const MultiFacetsRecorder&);
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
