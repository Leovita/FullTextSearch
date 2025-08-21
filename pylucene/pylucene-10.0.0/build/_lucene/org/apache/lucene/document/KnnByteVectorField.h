#ifndef org_apache_lucene_document_KnnByteVectorField_H
#define org_apache_lucene_document_KnnByteVectorField_H

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

        class KnnByteVectorField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_385c741f3858c842,
            mid_init$_326bda8d065a79b4,
            mid_init$_7034192ed4b78da8,
            mid_createFieldType_e27e798a6159cdbb,
            mid_newVectorQuery_18fdc70c860ccd32,
            mid_setVectorValue_3ce1e597fb62ac79,
            mid_vectorValue_5560da88fc44aa82,
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
