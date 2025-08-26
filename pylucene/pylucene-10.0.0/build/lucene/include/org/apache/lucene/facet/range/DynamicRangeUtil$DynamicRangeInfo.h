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
              mid_init$_3c8bda65d8908ab4,
              mid_centroid_6fb37e123fed7a1f,
              mid_count_bd89ce15dad49192,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_max_0f176418e3e16541,
              mid_min_0f176418e3e16541,
              mid_toString_e7df854526d67fa3,
              mid_weight_0f176418e3e16541,
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
