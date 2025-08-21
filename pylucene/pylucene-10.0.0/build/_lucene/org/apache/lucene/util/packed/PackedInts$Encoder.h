#ifndef org_apache_lucene_util_packed_PackedInts$Encoder_H
#define org_apache_lucene_util_packed_PackedInts$Encoder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {

          class PackedInts$Encoder : public ::java::lang::Object {
           public:
            enum {
              mid_byteBlockCount_20fbf7565993c3d7,
              mid_byteValueCount_20fbf7565993c3d7,
              mid_encode_5296665277c51f94,
              mid_encode_a5462f9bfbfd9103,
              mid_encode_9fde3176ca36dc42,
              mid_encode_42b916e356f7a343,
              mid_longBlockCount_20fbf7565993c3d7,
              mid_longValueCount_20fbf7565993c3d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts$Encoder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedInts$Encoder(const PackedInts$Encoder& obj) : ::java::lang::Object(obj) {}

            jint byteBlockCount() const;
            jint byteValueCount() const;
            void encode(const JArray< jint > &, jint, const JArray< jbyte > &, jint, jint) const;
            void encode(const JArray< jlong > &, jint, const JArray< jbyte > &, jint, jint) const;
            void encode(const JArray< jint > &, jint, const JArray< jlong > &, jint, jint) const;
            void encode(const JArray< jlong > &, jint, const JArray< jlong > &, jint, jint) const;
            jint longBlockCount() const;
            jint longValueCount() const;
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
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(PackedInts$Encoder);
          extern PyTypeObject *PY_TYPE(PackedInts$Encoder);

          class t_PackedInts$Encoder {
          public:
            PyObject_HEAD
            PackedInts$Encoder object;
            static PyObject *wrap_Object(const PackedInts$Encoder&);
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
