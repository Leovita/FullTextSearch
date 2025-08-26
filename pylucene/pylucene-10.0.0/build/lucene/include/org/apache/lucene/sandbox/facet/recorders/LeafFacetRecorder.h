#ifndef org_apache_lucene_sandbox_facet_recorders_LeafFacetRecorder_H
#define org_apache_lucene_sandbox_facet_recorders_LeafFacetRecorder_H

#include "java/lang/Object.h"

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
          namespace recorders {

            class LeafFacetRecorder : public ::java::lang::Object {
             public:
              enum {
                mid_record_645c25455f5b9b1c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LeafFacetRecorder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LeafFacetRecorder(const LeafFacetRecorder& obj) : ::java::lang::Object(obj) {}

              void record(jint, jint) const;
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
            extern PyType_Def PY_TYPE_DEF(LeafFacetRecorder);
            extern PyTypeObject *PY_TYPE(LeafFacetRecorder);

            class t_LeafFacetRecorder {
            public:
              PyObject_HEAD
              LeafFacetRecorder object;
              static PyObject *wrap_Object(const LeafFacetRecorder&);
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
