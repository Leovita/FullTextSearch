#ifndef org_apache_lucene_analysis_util_OpenStringBuilder_H
#define org_apache_lucene_analysis_util_OpenStringBuilder_H

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
      namespace analysis {
        namespace util {
          class OpenStringBuilder;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class OpenStringBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_8226bd0b0fc13dba,
              mid_init$_495b1505e3aef671,
              mid_append_c04071c345c46825,
              mid_append_21a2a7764878a531,
              mid_append_4086204bf865c300,
              mid_capacity_bd89ce15dad49192,
              mid_charAt_bc94dd98365f92fb,
              mid_flush_e7bdbe105ce1bafb,
              mid_getArray_e5926045e1917c62,
              mid_length_bd89ce15dad49192,
              mid_reserve_8226bd0b0fc13dba,
              mid_reset_e7bdbe105ce1bafb,
              mid_set_495b1505e3aef671,
              mid_setCharAt_53f645c50443c1f0,
              mid_setLength_8226bd0b0fc13dba,
              mid_size_bd89ce15dad49192,
              mid_subSequence_e78c175a32c9e667,
              mid_toCharArray_e5926045e1917c62,
              mid_toString_e7df854526d67fa3,
              mid_unsafeWrite_121fb0d25559975f,
              mid_unsafeWrite_8226bd0b0fc13dba,
              mid_unsafeWrite_186bb5d1c1aec30c,
              mid_write_ae4452529cb9c0dd,
              mid_write_ee46a189998009d6,
              mid_write_900a2bfa63b2ba9b,
              mid_write_121fb0d25559975f,
              mid_write_8226bd0b0fc13dba,
              mid_write_186bb5d1c1aec30c,
              mid_resize_8226bd0b0fc13dba,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OpenStringBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OpenStringBuilder(const OpenStringBuilder& obj) : ::java::lang::Object(obj) {}

            OpenStringBuilder();
            OpenStringBuilder(jint);
            OpenStringBuilder(const JArray< jchar > &, jint);

            ::java::lang::Appendable append(jchar) const;
            ::java::lang::Appendable append(const ::java::lang::CharSequence &) const;
            ::java::lang::Appendable append(const ::java::lang::CharSequence &, jint, jint) const;
            jint capacity() const;
            jchar charAt(jint) const;
            void flush() const;
            JArray< jchar > getArray() const;
            jint length() const;
            void reserve(jint) const;
            void reset() const;
            void set(const JArray< jchar > &, jint) const;
            void setCharAt(jint, jchar) const;
            void setLength(jint) const;
            jint size() const;
            ::java::lang::CharSequence subSequence(jint, jint) const;
            JArray< jchar > toCharArray() const;
            ::java::lang::String toString() const;
            void unsafeWrite(jchar) const;
            void unsafeWrite(jint) const;
            void unsafeWrite(const JArray< jchar > &, jint, jint) const;
            void write(const JArray< jchar > &) const;
            void write(const ::java::lang::String &) const;
            void write(const OpenStringBuilder &) const;
            void write(jchar) const;
            void write(jint) const;
            void write(const JArray< jchar > &, jint, jint) const;
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
      namespace analysis {
        namespace util {
          extern PyType_Def PY_TYPE_DEF(OpenStringBuilder);
          extern PyTypeObject *PY_TYPE(OpenStringBuilder);

          class t_OpenStringBuilder {
          public:
            PyObject_HEAD
            OpenStringBuilder object;
            static PyObject *wrap_Object(const OpenStringBuilder&);
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
