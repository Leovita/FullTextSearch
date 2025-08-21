#ifndef org_apache_lucene_sandbox_facet_iterators_CandidateSetOrdinalIterator_H
#define org_apache_lucene_sandbox_facet_iterators_CandidateSetOrdinalIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace labels {
            class LabelToOrd;
          }
          namespace iterators {
            class OrdinalIterator;
          }
          namespace recorders {
            class FacetRecorder;
          }
        }
      }
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
          namespace iterators {

            class CandidateSetOrdinalIterator : public ::java::lang::Object {
             public:
              enum {
                mid_init$_b6eb707d4512fd12,
                mid_nextOrd_20fbf7565993c3d7,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CandidateSetOrdinalIterator(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CandidateSetOrdinalIterator(const CandidateSetOrdinalIterator& obj) : ::java::lang::Object(obj) {}

              CandidateSetOrdinalIterator(const ::org::apache::lucene::sandbox::facet::recorders::FacetRecorder &, const JArray< ::org::apache::lucene::facet::taxonomy::FacetLabel > &, const ::org::apache::lucene::sandbox::facet::labels::LabelToOrd &);

              jint nextOrd() const;
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
          namespace iterators {
            extern PyType_Def PY_TYPE_DEF(CandidateSetOrdinalIterator);
            extern PyTypeObject *PY_TYPE(CandidateSetOrdinalIterator);

            class t_CandidateSetOrdinalIterator {
            public:
              PyObject_HEAD
              CandidateSetOrdinalIterator object;
              static PyObject *wrap_Object(const CandidateSetOrdinalIterator&);
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
