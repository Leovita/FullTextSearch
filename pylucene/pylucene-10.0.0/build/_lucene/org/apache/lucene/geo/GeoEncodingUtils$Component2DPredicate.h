#ifndef org_apache_lucene_geo_GeoEncodingUtils$Component2DPredicate_H
#define org_apache_lucene_geo_GeoEncodingUtils$Component2DPredicate_H

#include "org/apache/lucene/geo/GeoEncodingUtils$Grid.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class GeoEncodingUtils$Component2DPredicate : public ::org::apache::lucene::geo::GeoEncodingUtils$Grid {
         public:
          enum {
            mid_test_5dd9e64338fe1611,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GeoEncodingUtils$Component2DPredicate(jobject obj) : ::org::apache::lucene::geo::GeoEncodingUtils$Grid(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GeoEncodingUtils$Component2DPredicate(const GeoEncodingUtils$Component2DPredicate& obj) : ::org::apache::lucene::geo::GeoEncodingUtils$Grid(obj) {}

          jboolean test(jint, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        extern PyType_Def PY_TYPE_DEF(GeoEncodingUtils$Component2DPredicate);
        extern PyTypeObject *PY_TYPE(GeoEncodingUtils$Component2DPredicate);

        class t_GeoEncodingUtils$Component2DPredicate {
        public:
          PyObject_HEAD
          GeoEncodingUtils$Component2DPredicate object;
          static PyObject *wrap_Object(const GeoEncodingUtils$Component2DPredicate&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
