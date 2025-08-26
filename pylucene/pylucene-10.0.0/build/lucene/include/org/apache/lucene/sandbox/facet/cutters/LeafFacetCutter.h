#ifndef org_apache_lucene_sandbox_facet_cutters_LeafFacetCutter_H
#define org_apache_lucene_sandbox_facet_cutters_LeafFacetCutter_H

#include "org/apache/lucene/sandbox/facet/iterators/OrdinalIterator.h"

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
          namespace cutters {

            class LeafFacetCutter : public ::org::apache::lucene::sandbox::facet::iterators::OrdinalIterator {
             public:
              enum {
                mid_advanceExact_a8281eb3b9d9672d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LeafFacetCutter(jobject obj) : ::org::apache::lucene::sandbox::facet::iterators::OrdinalIterator(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LeafFacetCutter(const LeafFacetCutter& obj) : ::org::apache::lucene::sandbox::facet::iterators::OrdinalIterator(obj) {}

              jboolean advanceExact(jint) const;
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
          namespace cutters {
            extern PyType_Def PY_TYPE_DEF(LeafFacetCutter);
            extern PyTypeObject *PY_TYPE(LeafFacetCutter);

            class t_LeafFacetCutter {
            public:
              PyObject_HEAD
              LeafFacetCutter object;
              static PyObject *wrap_Object(const LeafFacetCutter&);
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
