#ifndef org_apache_lucene_document_KnnFloatVectorField_H
#define org_apache_lucene_document_KnnFloatVectorField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace document {
        class FieldType;
      }
      namespace index {
        class VectorSimilarityFunction;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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
            mid_init$_9f83491e7d10ff68,
            mid_init$_86ce9786ccfef999,
            mid_init$_4c80742ae2dbf047,
            mid_createFieldType_e27e798a6159cdbb,
            mid_newVectorQuery_f8855c441b022056,
            mid_setVectorValue_354df523028ef700,
            mid_vectorValue_808165844ea67079,
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
