#ifndef org_apache_lucene_document_XYDocValuesField_H
#define org_apache_lucene_document_XYDocValuesField_H

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
      namespace geo {
        class XYGeometry;
        class XYPolygon;
      }
      namespace search {
        class Query;
        class SortField;
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

        class XYDocValuesField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_d92272036f137b6e,
            mid_newDistanceSort_7e675d9653be7eea,
            mid_newSlowBoxQuery_2b2dee22a7ea3941,
            mid_newSlowDistanceQuery_d8abc65d9cd2880f,
            mid_newSlowGeometryQuery_0db2ddb404b8e65c,
            mid_newSlowPolygonQuery_105d97cbf37538b5,
            mid_setLocationValue_cb7687d0612879b8,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYDocValuesField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYDocValuesField(const XYDocValuesField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          XYDocValuesField(const ::java::lang::String &, jfloat, jfloat);

          static ::org::apache::lucene::search::SortField newDistanceSort(const ::java::lang::String &, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newSlowBoxQuery(const ::java::lang::String &, jfloat, jfloat, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newSlowDistanceQuery(const ::java::lang::String &, jfloat, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newSlowGeometryQuery(const ::java::lang::String &, const JArray< ::org::apache::lucene::geo::XYGeometry > &);
          static ::org::apache::lucene::search::Query newSlowPolygonQuery(const ::java::lang::String &, const JArray< ::org::apache::lucene::geo::XYPolygon > &);
          void setLocationValue(jfloat, jfloat) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(XYDocValuesField);
        extern PyTypeObject *PY_TYPE(XYDocValuesField);

        class t_XYDocValuesField {
        public:
          PyObject_HEAD
          XYDocValuesField object;
          static PyObject *wrap_Object(const XYDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
