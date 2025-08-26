#ifndef org_apache_lucene_util_bkd_BKDConfig_H
#define org_apache_lucene_util_bkd_BKDConfig_H

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
      namespace util {
        namespace bkd {

          class BKDConfig : public ::java::lang::Record {
           public:
            enum {
              mid_init$_126b4efb1bebbe4a,
              mid_bytesPerDim_bd89ce15dad49192,
              mid_bytesPerDoc_bd89ce15dad49192,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_maxPointsInLeafNode_bd89ce15dad49192,
              mid_numDims_bd89ce15dad49192,
              mid_numIndexDims_bd89ce15dad49192,
              mid_packedBytesLength_bd89ce15dad49192,
              mid_packedIndexBytesLength_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BKDConfig(jobject obj) : ::java::lang::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BKDConfig(const BKDConfig& obj) : ::java::lang::Record(obj) {}

            static jint DEFAULT_MAX_POINTS_IN_LEAF_NODE;
            static jint MAX_DIMS;
            static jint MAX_INDEX_DIMS;

            BKDConfig(jint, jint, jint, jint);

            jint bytesPerDim() const;
            jint bytesPerDoc() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jint maxPointsInLeafNode() const;
            jint numDims() const;
            jint numIndexDims() const;
            jint packedBytesLength() const;
            jint packedIndexBytesLength() const;
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
      namespace util {
        namespace bkd {
          extern PyType_Def PY_TYPE_DEF(BKDConfig);
          extern PyTypeObject *PY_TYPE(BKDConfig);

          class t_BKDConfig {
          public:
            PyObject_HEAD
            BKDConfig object;
            static PyObject *wrap_Object(const BKDConfig&);
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
