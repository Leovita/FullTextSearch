#ifndef org_apache_lucene_facet_taxonomy_ParallelTaxonomyArrays_H
#define org_apache_lucene_facet_taxonomy_ParallelTaxonomyArrays_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class ParallelTaxonomyArrays$IntArray;
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
      namespace facet {
        namespace taxonomy {

          class ParallelTaxonomyArrays : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_children_906f31954104150e,
              mid_parents_906f31954104150e,
              mid_siblings_906f31954104150e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ParallelTaxonomyArrays(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ParallelTaxonomyArrays(const ParallelTaxonomyArrays& obj) : ::java::lang::Object(obj) {}

            ParallelTaxonomyArrays();

            ::org::apache::lucene::facet::taxonomy::ParallelTaxonomyArrays$IntArray children() const;
            ::org::apache::lucene::facet::taxonomy::ParallelTaxonomyArrays$IntArray parents() const;
            ::org::apache::lucene::facet::taxonomy::ParallelTaxonomyArrays$IntArray siblings() const;
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
      namespace facet {
        namespace taxonomy {
          extern PyType_Def PY_TYPE_DEF(ParallelTaxonomyArrays);
          extern PyTypeObject *PY_TYPE(ParallelTaxonomyArrays);

          class t_ParallelTaxonomyArrays {
          public:
            PyObject_HEAD
            ParallelTaxonomyArrays object;
            static PyObject *wrap_Object(const ParallelTaxonomyArrays&);
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
