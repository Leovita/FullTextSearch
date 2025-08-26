#ifndef org_apache_lucene_facet_taxonomy_AssociationAggregationFunction_H
#define org_apache_lucene_facet_taxonomy_AssociationAggregationFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class AssociationAggregationFunction;
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

          class AssociationAggregationFunction : public ::java::lang::Object {
           public:
            enum {
              mid_aggregate_ab52dff7447e3c87,
              mid_aggregate_7f27cf81a85a97e9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AssociationAggregationFunction(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AssociationAggregationFunction(const AssociationAggregationFunction& obj) : ::java::lang::Object(obj) {}

            static AssociationAggregationFunction *MAX;
            static AssociationAggregationFunction *SUM;

            jfloat aggregate(jfloat, jfloat) const;
            jint aggregate(jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(AssociationAggregationFunction);
          extern PyTypeObject *PY_TYPE(AssociationAggregationFunction);

          class t_AssociationAggregationFunction {
          public:
            PyObject_HEAD
            AssociationAggregationFunction object;
            static PyObject *wrap_Object(const AssociationAggregationFunction&);
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
