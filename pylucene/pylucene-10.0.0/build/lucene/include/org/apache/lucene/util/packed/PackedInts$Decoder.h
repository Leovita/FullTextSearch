#ifndef org_apache_lucene_util_packed_PackedInts$Decoder_H
#define org_apache_lucene_util_packed_PackedInts$Decoder_H

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

          class PackedInts$Decoder : public ::java::lang::Object {
           public:
            enum {
              mid_byteBlockCount_bd89ce15dad49192,
              mid_byteValueCount_bd89ce15dad49192,
              mid_decode_8260e364225ef13f,
              mid_decode_531a2c05541e385e,
              mid_decode_892946b55131e02e,
              mid_decode_d896d30bdf12de93,
              mid_longBlockCount_bd89ce15dad49192,
              mid_longValueCount_bd89ce15dad49192,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts$Decoder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedInts$Decoder(const PackedInts$Decoder& obj) : ::java::lang::Object(obj) {}

            jint byteBlockCount() const;
            jint byteValueCount() const;
            void decode(const JArray< jbyte > &, jint, const JArray< jint > &, jint, jint) const;
            void decode(const JArray< jbyte > &, jint, const JArray< jlong > &, jint, jint) const;
            void decode(const JArray< jlong > &, jint, const JArray< jint > &, jint, jint) const;
            void decode(const JArray< jlong > &, jint, const JArray< jlong > &, jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(PackedInts$Decoder);
          extern PyTypeObject *PY_TYPE(PackedInts$Decoder);

          class t_PackedInts$Decoder {
          public:
            PyObject_HEAD
            PackedInts$Decoder object;
            static PyObject *wrap_Object(const PackedInts$Decoder&);
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
