#ifndef org_apache_lucene_spatial3d_geom_PlanetModel$DocValueEncoder_H
#define org_apache_lucene_spatial3d_geom_PlanetModel$DocValueEncoder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoPoint;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class PlanetModel$DocValueEncoder : public ::java::lang::Object {
           public:
            enum {
              mid_decodePoint_d3209e9ffe415ce2,
              mid_decodeXValue_1f153cac77223155,
              mid_decodeYValue_1f153cac77223155,
              mid_decodeZValue_1f153cac77223155,
              mid_encodePoint_5b4a2ff160afee9a,
              mid_encodePoint_5d9048d54f1deb89,
              mid_roundDownX_8493a5edcb36d651,
              mid_roundDownY_8493a5edcb36d651,
              mid_roundDownZ_8493a5edcb36d651,
              mid_roundUpX_8493a5edcb36d651,
              mid_roundUpY_8493a5edcb36d651,
              mid_roundUpZ_8493a5edcb36d651,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PlanetModel$DocValueEncoder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PlanetModel$DocValueEncoder(const PlanetModel$DocValueEncoder& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::spatial3d::geom::GeoPoint decodePoint(jlong) const;
            jdouble decodeXValue(jlong) const;
            jdouble decodeYValue(jlong) const;
            jdouble decodeZValue(jlong) const;
            jlong encodePoint(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jlong encodePoint(jdouble, jdouble, jdouble) const;
            jdouble roundDownX(jdouble) const;
            jdouble roundDownY(jdouble) const;
            jdouble roundDownZ(jdouble) const;
            jdouble roundUpX(jdouble) const;
            jdouble roundUpY(jdouble) const;
            jdouble roundUpZ(jdouble) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          extern PyType_Def PY_TYPE_DEF(PlanetModel$DocValueEncoder);
          extern PyTypeObject *PY_TYPE(PlanetModel$DocValueEncoder);

          class t_PlanetModel$DocValueEncoder {
          public:
            PyObject_HEAD
            PlanetModel$DocValueEncoder object;
            static PyObject *wrap_Object(const PlanetModel$DocValueEncoder&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
