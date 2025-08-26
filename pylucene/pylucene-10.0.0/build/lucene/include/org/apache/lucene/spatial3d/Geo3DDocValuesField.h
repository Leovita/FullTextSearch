#ifndef org_apache_lucene_spatial3d_Geo3DDocValuesField_H
#define org_apache_lucene_spatial3d_Geo3DDocValuesField_H

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
        class Polygon;
      }
      namespace document {
        class FieldType;
      }
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class GeoPoint;
        }
      }
      namespace search {
        class SortField;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {

        class Geo3DDocValuesField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_a9ef6e79d1c2143b,
            mid_init$_794a089583fd8058,
            mid_newDistanceSort_ace7752a68e86f31,
            mid_newOutsideBoxSort_ff860b1a9851a5d9,
            mid_newOutsideDistanceSort_ace7752a68e86f31,
            mid_newOutsideLargePolygonSort_44970f0f3fa30a6b,
            mid_newOutsidePathSort_cc5d7f650c000ff9,
            mid_newOutsidePolygonSort_44970f0f3fa30a6b,
            mid_newPathSort_cc5d7f650c000ff9,
            mid_setLocationValue_ee35f58793f14ff8,
            mid_setLocationValue_643492163a564694,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Geo3DDocValuesField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Geo3DDocValuesField(const Geo3DDocValuesField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          Geo3DDocValuesField(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          Geo3DDocValuesField(const ::java::lang::String &, jdouble, jdouble, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);

          static ::org::apache::lucene::search::SortField newDistanceSort(const ::java::lang::String &, jdouble, jdouble, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static ::org::apache::lucene::search::SortField newOutsideBoxSort(const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static ::org::apache::lucene::search::SortField newOutsideDistanceSort(const ::java::lang::String &, jdouble, jdouble, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static ::org::apache::lucene::search::SortField newOutsideLargePolygonSort(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const JArray< ::org::apache::lucene::geo::Polygon > &);
          static ::org::apache::lucene::search::SortField newOutsidePathSort(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static ::org::apache::lucene::search::SortField newOutsidePolygonSort(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const JArray< ::org::apache::lucene::geo::Polygon > &);
          static ::org::apache::lucene::search::SortField newPathSort(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          void setLocationValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
          void setLocationValue(jdouble, jdouble, jdouble) const;
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
      namespace spatial3d {
        extern PyType_Def PY_TYPE_DEF(Geo3DDocValuesField);
        extern PyTypeObject *PY_TYPE(Geo3DDocValuesField);

        class t_Geo3DDocValuesField {
        public:
          PyObject_HEAD
          Geo3DDocValuesField object;
          static PyObject *wrap_Object(const Geo3DDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
