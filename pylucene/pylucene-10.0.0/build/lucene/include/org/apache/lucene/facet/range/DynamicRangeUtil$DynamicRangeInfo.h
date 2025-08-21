#ifndef org_apache_lucene_facet_range_DynamicRangeUtil$DynamicRangeInfo_H
#define org_apache_lucene_facet_range_DynamicRangeUtil$DynamicRangeInfo_H

#include "java/lang/Record.h"

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
        namespace range {

          class DynamicRangeUtil$DynamicRangeInfo : public ::java::lang::Record {
           public:
            enum {
              mid_init$_5a7ebef4f69d2bb5,
              mid_centroid_32caabaad86c508b,
              mid_count_20fbf7565993c3d7,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_max_16939d9d0a9a9721,
              mid_min_16939d9d0a9a9721,
              mid_toString_09a7afff1868fc5e,
              mid_weight_16939d9d0a9a9721,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DynamicRangeUtil$DynamicRangeInfo(jobject obj) : ::java::lang::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DynamicRangeUtil$DynamicRangeInfo(const DynamicRangeUtil$DynamicRangeInfo& obj) : ::java::lang::Record(obj) {}

            DynamicRangeUtil$DynamicRangeInfo(jint, jlong, jlong, jlong, jdouble);

            jdouble centroid() const;
            jint count() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jlong max$() const;
            jlong min$() const;
            ::java::lang::String toString() const;
            jlong weight() const;
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
        namespace range {
          extern PyType_Def PY_TYPE_DEF(DynamicRangeUtil$DynamicRangeInfo);
          extern PyTypeObject *PY_TYPE(DynamicRangeUtil$DynamicRangeInfo);

          class t_DynamicRangeUtil$DynamicRangeInfo {
          public:
            PyObject_HEAD
            DynamicRangeUtil$DynamicRangeInfo object;
            static PyObject *wrap_Object(const DynamicRangeUtil$DynamicRangeInfo&);
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
