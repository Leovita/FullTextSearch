#ifndef org_apache_lucene_util_CharsRefBuilder_H
#define org_apache_lucene_util_CharsRefBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Appendable;
    class Class;
    class String;
    class CharSequence;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class CharsRef;
        class CharsRefBuilder;
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class CharsRefBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_append_740f2d8769b75ff0,
            mid_append_285ce592cb37c468,
            mid_append_186bb5d1c1aec30c,
            mid_append_80b34effdad6f003,
            mid_charAt_bc94dd98365f92fb,
            mid_chars_e5926045e1917c62,
            mid_clear_e7bdbe105ce1bafb,
            mid_copyChars_3e9672e903fb771a,
            mid_copyChars_186bb5d1c1aec30c,
            mid_copyUTF8Bytes_920ce0cdf4259cc9,
            mid_copyUTF8Bytes_116f7fcb5bff0f39,
            mid_equals_00d17418847797d4,
            mid_get_669503bbeca09860,
            mid_grow_8226bd0b0fc13dba,
            mid_hashCode_bd89ce15dad49192,
            mid_length_bd89ce15dad49192,
            mid_setCharAt_53f645c50443c1f0,
            mid_setLength_8226bd0b0fc13dba,
            mid_toCharsRef_669503bbeca09860,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharsRefBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharsRefBuilder(const CharsRefBuilder& obj) : ::java::lang::Object(obj) {}

          CharsRefBuilder();

          CharsRefBuilder append(jchar) const;
          CharsRefBuilder append(const ::java::lang::CharSequence &) const;
          void append(const JArray< jchar > &, jint, jint) const;
          CharsRefBuilder append(const ::java::lang::CharSequence &, jint, jint) const;
          jchar charAt(jint) const;
          JArray< jchar > chars() const;
          void clear() const;
          void copyChars(const ::org::apache::lucene::util::CharsRef &) const;
          void copyChars(const JArray< jchar > &, jint, jint) const;
          void copyUTF8Bytes(const ::org::apache::lucene::util::BytesRef &) const;
          void copyUTF8Bytes(const JArray< jbyte > &, jint, jint) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::CharsRef get() const;
          void grow(jint) const;
          jint hashCode() const;
          jint length() const;
          void setCharAt(jint, jchar) const;
          void setLength(jint) const;
          ::org::apache::lucene::util::CharsRef toCharsRef() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(CharsRefBuilder);
        extern PyTypeObject *PY_TYPE(CharsRefBuilder);

        class t_CharsRefBuilder {
        public:
          PyObject_HEAD
          CharsRefBuilder object;
          static PyObject *wrap_Object(const CharsRefBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
