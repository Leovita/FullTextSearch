#ifndef org_apache_lucene_document_FeatureField_H
#define org_apache_lucene_document_FeatureField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class DoubleValuesSource;
        class SortField;
      }
      namespace analysis {
        class Analyzer;
        class TokenStream;
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
            mid_init$_f61248330d4b259e,
            mid_getFeatureValue_9b6c3480dac00edf,
            mid_newDoubleValues_55593851c33ceb3b,
            mid_newFeatureSort_edbea1a6658792cb,
            mid_newLinearQuery_afdd0007c4927190,
            mid_newLogQuery_3fb9f2db1d8e4f1e,
            mid_newSaturationQuery_9c67907ed0ac8b67,
            mid_newSaturationQuery_3fb9f2db1d8e4f1e,
            mid_newSigmoidQuery_4100888aea16714f,
            mid_setFeatureValue_c771a95b0227fb6a,
            mid_tokenStream_675528819f96fe99,
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
