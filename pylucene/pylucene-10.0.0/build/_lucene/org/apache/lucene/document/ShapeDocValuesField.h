#ifndef org_apache_lucene_document_ShapeDocValuesField_H
#define org_apache_lucene_document_ShapeDocValuesField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace document {
        class ShapeField$QueryRelation;
        class ShapeField$DecodedTriangle$TYPE;
      }
      namespace index {
        class IndexableFieldType;
      }
      namespace analysis {
        class Analyzer;
        class TokenStream;
      }
      namespace geo {
        class Geometry;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
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
            mid_fieldType_231a8407c689c49d,
            mid_getBoundingBox_29c6d8aa930fea8d,
            mid_getCentroid_29c6d8aa930fea8d,
            mid_getHighestDimensionType_51afc60d7bb54a69,
            mid_name_09a7afff1868fc5e,
            mid_newGeometryQuery_ae807bfca69d7107,
            mid_numberOfTerms_20fbf7565993c3d7,
            mid_stringValue_09a7afff1868fc5e,
            mid_tokenStream_675528819f96fe99,
            mid_decodeY_788f636887bfcb79,
            mid_decodeX_788f636887bfcb79,
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
