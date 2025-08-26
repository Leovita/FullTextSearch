#ifndef org_apache_lucene_util_BytesRefBuilder_H
#define org_apache_lucene_util_BytesRefBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class CharSequence;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class BytesRefBuilder;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class BytesRefBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_append_920ce0cdf4259cc9,
            mid_append_ac13cc127becbdd7,
            mid_append_a5d0ad9e85e76a64,
            mid_append_116f7fcb5bff0f39,
            mid_byteAt_9e902c8fd52d5208,
            mid_bytes_44e916dc40fc04cb,
            mid_clear_e7bdbe105ce1bafb,
            mid_copyBytes_920ce0cdf4259cc9,
            mid_copyBytes_ac13cc127becbdd7,
            mid_copyBytes_116f7fcb5bff0f39,
            mid_copyChars_fe2ab7d27aa3fe1a,
            mid_copyChars_186bb5d1c1aec30c,
            mid_copyChars_1e5b55d602c23ab6,
            mid_equals_00d17418847797d4,
            mid_get_adbedbc1fa61c358,
            mid_grow_8226bd0b0fc13dba,
            mid_growNoCopy_8226bd0b0fc13dba,
            mid_hashCode_bd89ce15dad49192,
            mid_length_bd89ce15dad49192,
            mid_setByteAt_db535d0d1edecac5,
            mid_setLength_8226bd0b0fc13dba,
            mid_toBytesRef_adbedbc1fa61c358,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BytesRefBuilder(const BytesRefBuilder& obj) : ::java::lang::Object(obj) {}

          BytesRefBuilder();

          void append(const ::org::apache::lucene::util::BytesRef &) const;
          void append(const BytesRefBuilder &) const;
          void append(jbyte) const;
          void append(const JArray< jbyte > &, jint, jint) const;
          jbyte byteAt(jint) const;
          JArray< jbyte > bytes() const;
          void clear() const;
          void copyBytes(const ::org::apache::lucene::util::BytesRef &) const;
          void copyBytes(const BytesRefBuilder &) const;
          void copyBytes(const JArray< jbyte > &, jint, jint) const;
          void copyChars(const ::java::lang::CharSequence &) const;
          void copyChars(const JArray< jchar > &, jint, jint) const;
          void copyChars(const ::java::lang::CharSequence &, jint, jint) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::BytesRef get() const;
          void grow(jint) const;
          void growNoCopy(jint) const;
          jint hashCode() const;
          jint length() const;
          void setByteAt(jint, jbyte) const;
          void setLength(jint) const;
          ::org::apache::lucene::util::BytesRef toBytesRef() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(BytesRefBuilder);
        extern PyTypeObject *PY_TYPE(BytesRefBuilder);

        class t_BytesRefBuilder {
        public:
          PyObject_HEAD
          BytesRefBuilder object;
          static PyObject *wrap_Object(const BytesRefBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
