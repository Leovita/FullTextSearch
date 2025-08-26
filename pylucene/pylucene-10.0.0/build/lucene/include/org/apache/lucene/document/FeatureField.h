#ifndef org_apache_lucene_document_FeatureField_H
#define org_apache_lucene_document_FeatureField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DoubleValuesSource;
        class Query;
        class SortField;
      }
      namespace analysis {
        class TokenStream;
        class Analyzer;
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

        class FeatureField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_d294b1e2e0c50e22,
            mid_getFeatureValue_8b62236f0e4d0dbc,
            mid_newDoubleValues_493d536ed42e49a1,
            mid_newFeatureSort_a78fe62288bfca7f,
            mid_newLinearQuery_5aabae9afa99de9b,
            mid_newLogQuery_5770b557159e5c85,
            mid_newSaturationQuery_550dcf54034665c0,
            mid_newSaturationQuery_5770b557159e5c85,
            mid_newSigmoidQuery_5a95ea497dd1b373,
            mid_setFeatureValue_675f4cb9a2529ee0,
            mid_tokenStream_c33c4c82a743c93e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FeatureField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FeatureField(const FeatureField& obj) : ::org::apache::lucene::document::Field(obj) {}

          FeatureField(const ::java::lang::String &, const ::java::lang::String &, jfloat);

          jfloat getFeatureValue() const;
          static ::org::apache::lucene::search::DoubleValuesSource newDoubleValues(const ::java::lang::String &, const ::java::lang::String &);
          static ::org::apache::lucene::search::SortField newFeatureSort(const ::java::lang::String &, const ::java::lang::String &);
          static ::org::apache::lucene::search::Query newLinearQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat);
          static ::org::apache::lucene::search::Query newLogQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newSaturationQuery(const ::java::lang::String &, const ::java::lang::String &);
          static ::org::apache::lucene::search::Query newSaturationQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newSigmoidQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat, jfloat, jfloat);
          void setFeatureValue(jfloat) const;
          ::org::apache::lucene::analysis::TokenStream tokenStream(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::TokenStream &) const;
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
        extern PyType_Def PY_TYPE_DEF(FeatureField);
        extern PyTypeObject *PY_TYPE(FeatureField);

        class t_FeatureField {
        public:
          PyObject_HEAD
          FeatureField object;
          static PyObject *wrap_Object(const FeatureField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
