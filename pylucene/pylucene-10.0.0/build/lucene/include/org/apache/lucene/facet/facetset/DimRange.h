#ifndef org_apache_lucene_facet_facetset_DimRange_H
#define org_apache_lucene_facet_facetset_DimRange_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace facetset {

          class DimRange : public ::java::lang::Record {
           public:
            enum {
              mid_init$_c3501637982a28bc,
              mid_equals_570b5248a6da3ef6,
              mid_fromDoubles_48a591fa26ae3d85,
              mid_fromFloats_5306f6c2fae5c10e,
              mid_fromLongs_98eb7810341ee108,
              mid_hashCode_20fbf7565993c3d7,
              mid_max_16939d9d0a9a9721,
              mid_min_16939d9d0a9a9721,
              mid_toString_09a7afff1868fc5e,
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
