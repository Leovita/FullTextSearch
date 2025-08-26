#ifndef org_apache_lucene_sandbox_facet_FacetFieldCollectorManager_H
#define org_apache_lucene_sandbox_facet_FacetFieldCollectorManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace recorders {
            class FacetRecorder;
          }
          class FacetFieldCollector;
          namespace cutters {
            class FacetCutter;
          }
        }
      }
      namespace search {
        class CollectorManager;
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
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {

          class FacetFieldCollectorManager : public ::java::lang::Object {
           public:
            enum {
              mid_init$_91412e55a40ffdf1,
              mid_newCollector_1226572c6d35c967,
              mid_reduce_53c7d5698eef8044,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FacetFieldCollectorManager(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FacetFieldCollectorManager(const FacetFieldCollectorManager& obj) : ::java::lang::Object(obj) {}

            FacetFieldCollectorManager(const ::org::apache::lucene::sandbox::facet::cutters::FacetCutter &, const ::org::apache::lucene::sandbox::facet::recorders::FacetRecorder &);

            ::org::apache::lucene::sandbox::facet::FacetFieldCollector newCollector() const;
            ::org::apache::lucene::sandbox::facet::recorders::FacetRecorder reduce(const ::java::util::Collection &) const;
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
      namespace sandbox {
        namespace facet {
          extern PyType_Def PY_TYPE_DEF(FacetFieldCollectorManager);
          extern PyTypeObject *PY_TYPE(FacetFieldCollectorManager);

          class t_FacetFieldCollectorManager {
          public:
            PyObject_HEAD
            FacetFieldCollectorManager object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FacetFieldCollectorManager *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FacetFieldCollectorManager&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FacetFieldCollectorManager&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
