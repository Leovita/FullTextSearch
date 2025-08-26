#ifndef org_apache_lucene_document_ShapeDocValuesField_H
#define org_apache_lucene_document_ShapeDocValuesField_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class ShapeField$DecodedTriangle$TYPE;
        class ShapeField$QueryRelation;
      }
      namespace analysis {
        class TokenStream;
        class Analyzer;
      }
      namespace search {
        class Query;
      }
      namespace index {
        class IndexableFieldType;
      }
      namespace geo {
        class Geometry;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class ShapeDocValuesField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_fieldType_fa2f4688e330515c,
            mid_getBoundingBox_76f13cb944295f5f,
            mid_getCentroid_76f13cb944295f5f,
            mid_getHighestDimensionType_b3356d9fb10d4eb7,
            mid_name_e7df854526d67fa3,
            mid_newGeometryQuery_87a659bded1931ca,
            mid_numberOfTerms_bd89ce15dad49192,
            mid_stringValue_e7df854526d67fa3,
            mid_tokenStream_c33c4c82a743c93e,
            mid_decodeX_3bb466f769ef1c7f,
            mid_decodeY_3bb466f769ef1c7f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ShapeDocValuesField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ShapeDocValuesField(const ShapeDocValuesField& obj) : ::org::apache::lucene::document::Field(obj) {}

          ::org::apache::lucene::index::IndexableFieldType fieldType() const;
          ::org::apache::lucene::geo::Geometry getBoundingBox() const;
          ::org::apache::lucene::geo::Geometry getCentroid() const;
          ::org::apache::lucene::document::ShapeField$DecodedTriangle$TYPE getHighestDimensionType() const;
          ::java::lang::String name() const;
          static ::org::apache::lucene::search::Query newGeometryQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::java::lang::Object > &);
          jint numberOfTerms() const;
          ::java::lang::String stringValue() const;
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
        extern PyType_Def PY_TYPE_DEF(ShapeDocValuesField);
        extern PyTypeObject *PY_TYPE(ShapeDocValuesField);

        class t_ShapeDocValuesField {
        public:
          PyObject_HEAD
          ShapeDocValuesField object;
          static PyObject *wrap_Object(const ShapeDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
