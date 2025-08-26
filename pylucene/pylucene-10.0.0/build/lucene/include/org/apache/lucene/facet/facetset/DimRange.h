#ifndef org_apache_lucene_facet_facetset_DimRange_H
#define org_apache_lucene_facet_facetset_DimRange_H

#include "java/lang/Record.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace facetset {
          class DimRange;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace facetset {

          class DimRange : public ::java::lang::Record {
           public:
            enum {
              mid_init$_9ebf8c93de5f0fe1,
              mid_equals_00d17418847797d4,
              mid_fromDoubles_c9b1346f81ade9d9,
              mid_fromFloats_0fe90e929bf6a7b9,
              mid_fromLongs_d509010c7ec5e1ad,
              mid_hashCode_bd89ce15dad49192,
              mid_max_0f176418e3e16541,
              mid_min_0f176418e3e16541,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DimRange(jobject obj) : ::java::lang::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DimRange(const DimRange& obj) : ::java::lang::Record(obj) {}

            DimRange(jlong, jlong);

            jboolean equals(const ::java::lang::Object &) const;
            static DimRange fromDoubles(jdouble, jboolean, jdouble, jboolean);
            static DimRange fromFloats(jfloat, jboolean, jfloat, jboolean);
            static DimRange fromLongs(jlong, jboolean, jlong, jboolean);
            jint hashCode() const;
            jlong max$() const;
            jlong min$() const;
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
      namespace facet {
        namespace facetset {
          extern PyType_Def PY_TYPE_DEF(DimRange);
          extern PyTypeObject *PY_TYPE(DimRange);

          class t_DimRange {
          public:
            PyObject_HEAD
            DimRange object;
            static PyObject *wrap_Object(const DimRange&);
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
