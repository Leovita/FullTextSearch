#ifndef org_apache_lucene_document_KnnFloatVectorField_H
#define org_apache_lucene_document_KnnFloatVectorField_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class VectorSimilarityFunction;
      }
      namespace search {
        class Query;
      }
      namespace document {
        class FieldType;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class KnnFloatVectorField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_833042f82a09f518,
            mid_init$_cdf2bb6af86b9065,
            mid_init$_2cbbdd8a35f61798,
            mid_createFieldType_6a1de06ec1e187fb,
            mid_newVectorQuery_521f528904c5c62f,
            mid_setVectorValue_d2e2fadde4bf8d25,
            mid_vectorValue_67d89dc3894661ff,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnFloatVectorField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnFloatVectorField(const KnnFloatVectorField& obj) : ::org::apache::lucene::document::Field(obj) {}

          KnnFloatVectorField(const ::java::lang::String &, const JArray< jfloat > &);
          KnnFloatVectorField(const ::java::lang::String &, const JArray< jfloat > &, const ::org::apache::lucene::index::VectorSimilarityFunction &);
          KnnFloatVectorField(const ::java::lang::String &, const JArray< jfloat > &, const ::org::apache::lucene::document::FieldType &);

          static ::org::apache::lucene::document::FieldType createFieldType(jint, const ::org::apache::lucene::index::VectorSimilarityFunction &);
          static ::org::apache::lucene::search::Query newVectorQuery(const ::java::lang::String &, const JArray< jfloat > &, jint);
          void setVectorValue(const JArray< jfloat > &) const;
          JArray< jfloat > vectorValue() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(KnnFloatVectorField);
        extern PyTypeObject *PY_TYPE(KnnFloatVectorField);

        class t_KnnFloatVectorField {
        public:
          PyObject_HEAD
          KnnFloatVectorField object;
          static PyObject *wrap_Object(const KnnFloatVectorField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
