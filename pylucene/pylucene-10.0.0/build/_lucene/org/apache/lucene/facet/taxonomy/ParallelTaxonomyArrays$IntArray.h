#ifndef org_apache_lucene_facet_taxonomy_ParallelTaxonomyArrays$IntArray_H
#define org_apache_lucene_facet_taxonomy_ParallelTaxonomyArrays$IntArray_H

#include "java/lang/Object.h"

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

          class ParallelTaxonomyArrays$IntArray : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_get_3c9bba330f083871,
              mid_length_20fbf7565993c3d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ParallelTaxonomyArrays$IntArray(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ParallelTaxonomyArrays$IntArray(const ParallelTaxonomyArrays$IntArray& obj) : ::java::lang::Object(obj) {}

            ParallelTaxonomyArrays$IntArray();

            jint get(jint) const;
            jint length() const;
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
          extern PyType_Def PY_TYPE_DEF(ParallelTaxonomyArrays$IntArray);
          extern PyTypeObject *PY_TYPE(ParallelTaxonomyArrays$IntArray);

          class t_ParallelTaxonomyArrays$IntArray {
          public:
            PyObject_HEAD
            ParallelTaxonomyArrays$IntArray object;
            static PyObject *wrap_Object(const ParallelTaxonomyArrays$IntArray&);
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
