#ifndef org_apache_lucene_facet_facetset_FacetSetsField_H
#define org_apache_lucene_facet_facetset_FacetSetsField_H

#include "org/apache/lucene/document/BinaryDocValuesField.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace facetset {
          class FacetSet;
          class FacetSetsField;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace facetset {

          class FacetSetsField : public ::org::apache::lucene::document::BinaryDocValuesField {
           public:
            enum {
              mid_create_5c5635baa64c9a83,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FacetSetsField(jobject obj) : ::org::apache::lucene::document::BinaryDocValuesField(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FacetSetsField(const FacetSetsField& obj) : ::org::apache::lucene::document::BinaryDocValuesField(obj) {}

            static FacetSetsField create(const ::java::lang::String &, const JArray< ::org::apache::lucene::facet::facetset::FacetSet > &);
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
        namespace facetset {
          extern PyType_Def PY_TYPE_DEF(FacetSetsField);
          extern PyTypeObject *PY_TYPE(FacetSetsField);

          class t_FacetSetsField {
          public:
            PyObject_HEAD
            FacetSetsField object;
            static PyObject *wrap_Object(const FacetSetsField&);
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
