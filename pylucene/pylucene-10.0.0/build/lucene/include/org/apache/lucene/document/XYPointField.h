#ifndef org_apache_lucene_document_XYPointField_H
#define org_apache_lucene_document_XYPointField_H

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
      namespace geo {
        class XYGeometry;
        class XYPolygon;
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

        class XYPointField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_718f262b86e1be29,
            mid_newBoxQuery_70655ebbf0e97082,
            mid_newDistanceQuery_c8bcc65a049a42ea,
            mid_newGeometryQuery_ad82294ac6e13ebf,
            mid_newPolygonQuery_c064891a08451493,
            mid_setLocationValue_13cb7e72f513d797,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYPointField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYPointField(const XYPointField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static jint BYTES;
          static ::org::apache::lucene::document::FieldType *TYPE;

          XYPointField(const ::java::lang::String &, jfloat, jfloat);

          static ::org::apache::lucene::search::Query newBoxQuery(const ::java::lang::String &, jfloat, jfloat, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newDistanceQuery(const ::java::lang::String &, jfloat, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newGeometryQuery(const ::java::lang::String &, const JArray< ::org::apache::lucene::geo::XYGeometry > &);
          static ::org::apache::lucene::search::Query newPolygonQuery(const ::java::lang::String &, const JArray< ::org::apache::lucene::geo::XYPolygon > &);
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
        extern PyType_Def PY_TYPE_DEF(XYPointField);
        extern PyTypeObject *PY_TYPE(XYPointField);

        class t_XYPointField {
        public:
          PyObject_HEAD
          XYPointField object;
          static PyObject *wrap_Object(const XYPointField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
