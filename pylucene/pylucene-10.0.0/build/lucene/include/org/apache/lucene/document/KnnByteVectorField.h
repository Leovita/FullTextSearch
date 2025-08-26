#ifndef org_apache_lucene_document_KnnByteVectorField_H
#define org_apache_lucene_document_KnnByteVectorField_H

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

        class KnnByteVectorField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_fab4d66163274131,
            mid_init$_bb81451650de7840,
            mid_init$_92ce5270255f80e6,
            mid_createFieldType_6a1de06ec1e187fb,
            mid_newVectorQuery_47cab3b9f58206ac,
            mid_setVectorValue_a4d4f283481182e8,
            mid_vectorValue_44e916dc40fc04cb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnByteVectorField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnByteVectorField(const KnnByteVectorField& obj) : ::org::apache::lucene::document::Field(obj) {}

          KnnByteVectorField(const ::java::lang::String &, const JArray< jbyte > &);
          KnnByteVectorField(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::index::VectorSimilarityFunction &);
          KnnByteVectorField(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::document::FieldType &);

          static ::org::apache::lucene::document::FieldType createFieldType(jint, const ::org::apache::lucene::index::VectorSimilarityFunction &);
          static ::org::apache::lucene::search::Query newVectorQuery(const ::java::lang::String &, const JArray< jbyte > &, jint);
          void setVectorValue(const JArray< jbyte > &) const;
          JArray< jbyte > vectorValue() const;
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
        extern PyType_Def PY_TYPE_DEF(KnnByteVectorField);
        extern PyTypeObject *PY_TYPE(KnnByteVectorField);

        class t_KnnByteVectorField {
        public:
          PyObject_HEAD
          KnnByteVectorField object;
          static PyObject *wrap_Object(const KnnByteVectorField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
