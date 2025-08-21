#ifndef org_apache_lucene_index_VectorSimilarityFunction_H
#define org_apache_lucene_index_VectorSimilarityFunction_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class VectorSimilarityFunction;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class VectorSimilarityFunction : public ::java::lang::Enum {
         public:
          enum {
            mid_compare_1c5889ce893868f9,
            mid_compare_f618322cb97748d7,
            mid_valueOf_2eec03616ed6cd3d,
            mid_values_28f981fb5d7efdb3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit VectorSimilarityFunction(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          VectorSimilarityFunction(const VectorSimilarityFunction& obj) : ::java::lang::Enum(obj) {}

          static VectorSimilarityFunction *COSINE;
          static VectorSimilarityFunction *DOT_PRODUCT;
          static VectorSimilarityFunction *EUCLIDEAN;
          static VectorSimilarityFunction *MAXIMUM_INNER_PRODUCT;

          jfloat compare(const JArray< jbyte > &, const JArray< jbyte > &) const;
          jfloat compare(const JArray< jfloat > &, const JArray< jfloat > &) const;
          static VectorSimilarityFunction valueOf(const ::java::lang::String &);
          static JArray< VectorSimilarityFunction > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(VectorSimilarityFunction);
        extern PyTypeObject *PY_TYPE(VectorSimilarityFunction);

        class t_VectorSimilarityFunction {
        public:
          PyObject_HEAD
          VectorSimilarityFunction object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_VectorSimilarityFunction *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const VectorSimilarityFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const VectorSimilarityFunction&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
