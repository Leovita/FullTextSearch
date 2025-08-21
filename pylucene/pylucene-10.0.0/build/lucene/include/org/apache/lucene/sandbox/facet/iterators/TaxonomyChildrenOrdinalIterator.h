#ifndef org_apache_lucene_sandbox_facet_iterators_TaxonomyChildrenOrdinalIterator_H
#define org_apache_lucene_sandbox_facet_iterators_TaxonomyChildrenOrdinalIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class ParallelTaxonomyArrays$IntArray;
        }
      }
      namespace sandbox {
        namespace facet {
          namespace iterators {
            class OrdinalIterator;
          }
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

            class TaxonomyChildrenOrdinalIterator : public ::java::lang::Object {
             public:
              enum {
                mid_init$_c8f2e367b5b39dfa,
                mid_nextOrd_20fbf7565993c3d7,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TaxonomyChildrenOrdinalIterator(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TaxonomyChildrenOrdinalIterator(const TaxonomyChildrenOrdinalIterator& obj) : ::java::lang::Object(obj) {}

              TaxonomyChildrenOrdinalIterator(const ::org::apache::lucene::sandbox::facet::iterators::OrdinalIterator &, const ::org::apache::lucene::facet::taxonomy::ParallelTaxonomyArrays$IntArray &, jint);

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
            extern PyType_Def PY_TYPE_DEF(TaxonomyChildrenOrdinalIterator);
            extern PyTypeObject *PY_TYPE(TaxonomyChildrenOrdinalIterator);

            class t_TaxonomyChildrenOrdinalIterator {
            public:
              PyObject_HEAD
              TaxonomyChildrenOrdinalIterator object;
              static PyObject *wrap_Object(const TaxonomyChildrenOrdinalIterator&);
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
