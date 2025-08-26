#ifndef org_apache_lucene_sandbox_facet_FacetFieldCollector_H
#define org_apache_lucene_sandbox_facet_FacetFieldCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class LeafCollector;
        class Collector;
      }
      namespace sandbox {
        namespace facet {
          namespace recorders {
            class FacetRecorder;
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

          class FacetFieldCollector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_91412e55a40ffdf1,
              mid_getLeafCollector_0a34433e6da38be9,
              mid_scoreMode_23e7061dcdc84768,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FacetFieldCollector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FacetFieldCollector(const FacetFieldCollector& obj) : ::java::lang::Object(obj) {}

            FacetFieldCollector(const ::org::apache::lucene::sandbox::facet::cutters::FacetCutter &, const ::org::apache::lucene::sandbox::facet::recorders::FacetRecorder &);

            ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::search::ScoreMode scoreMode() const;
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
          extern PyType_Def PY_TYPE_DEF(FacetFieldCollector);
          extern PyTypeObject *PY_TYPE(FacetFieldCollector);

          class t_FacetFieldCollector {
          public:
            PyObject_HEAD
            FacetFieldCollector object;
            static PyObject *wrap_Object(const FacetFieldCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
