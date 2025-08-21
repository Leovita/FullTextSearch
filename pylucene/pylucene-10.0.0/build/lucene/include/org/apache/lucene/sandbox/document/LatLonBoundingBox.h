#ifndef org_apache_lucene_sandbox_document_LatLonBoundingBox_H
#define org_apache_lucene_sandbox_document_LatLonBoundingBox_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace document {

          class LatLonBoundingBox : public ::org::apache::lucene::document::Field {
           public:
            enum {
              mid_init$_a581ccacec68600e,
              mid_newContainsQuery_e637eb4fbb66cd45,
              mid_newCrossesQuery_e637eb4fbb66cd45,
              mid_newIntersectsQuery_e637eb4fbb66cd45,
              mid_newWithinQuery_e637eb4fbb66cd45,
              mid_setRangeValues_e61e485ff70a664a,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LatLonBoundingBox(jobject obj) : ::org::apache::lucene::document::Field(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LatLonBoundingBox(const LatLonBoundingBox& obj) : ::org::apache::lucene::document::Field(obj) {}

            static jint BYTES;

            LatLonBoundingBox(const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble);

            static ::org::apache::lucene::search::Query newContainsQuery(const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble);
            static ::org::apache::lucene::search::Query newCrossesQuery(const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble);
            static ::org::apache::lucene::search::Query newIntersectsQuery(const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble);
            static ::org::apache::lucene::search::Query newWithinQuery(const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble);
            void setRangeValues(jdouble, jdouble, jdouble, jdouble) const;
            ::java::lang::String toString() const;
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
      namespace sandbox {
        namespace document {
          extern PyType_Def PY_TYPE_DEF(LatLonBoundingBox);
          extern PyTypeObject *PY_TYPE(LatLonBoundingBox);

          class t_LatLonBoundingBox {
          public:
            PyObject_HEAD
            LatLonBoundingBox object;
            static PyObject *wrap_Object(const LatLonBoundingBox&);
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
