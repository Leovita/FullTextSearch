#ifndef org_apache_lucene_util_BytesRef_H
#define org_apache_lucene_util_BytesRef_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Cloneable;
    class Class;
    class String;
    class CharSequence;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
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

        class BytesRef : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_a4d4f283481182e8,
            mid_init$_8226bd0b0fc13dba,
            mid_init$_fe2ab7d27aa3fe1a,
            mid_init$_116f7fcb5bff0f39,
            mid_bytesEquals_08ac7a49de309824,
            mid_clone_adbedbc1fa61c358,
            mid_compareTo_59a6eaf88a8be404,
            mid_deepCopyOf_2aeffe698cc65689,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_isValid_9aa4f33e82ea333f,
            mid_toString_e7df854526d67fa3,
            mid_utf8ToString_e7df854526d67fa3,
            max_mid
          };

          enum {
            fid_bytes,
            fid_length,
            fid_offset,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRef(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BytesRef(const BytesRef& obj) : ::java::lang::Object(obj) {}

          static JArray< jbyte > *EMPTY_BYTES;

          JArray< jbyte > _get_bytes() const;
          void _set_bytes(const JArray< jbyte > &) const;
          jint _get_length() const;
          void _set_length(jint) const;
          jint _get_offset() const;
          void _set_offset(jint) const;

          BytesRef();
          BytesRef(const JArray< jbyte > &);
          BytesRef(jint);
          BytesRef(const ::java::lang::CharSequence &);
          BytesRef(const JArray< jbyte > &, jint, jint);

          jboolean bytesEquals(const BytesRef &) const;
          BytesRef clone() const;
          jint compareTo(const BytesRef &) const;
          static BytesRef deepCopyOf(const BytesRef &);
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jboolean isValid() const;
          ::java::lang::String toString() const;
          ::java::lang::String utf8ToString() const;
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
        extern PyType_Def PY_TYPE_DEF(BytesRef);
        extern PyTypeObject *PY_TYPE(BytesRef);

        class t_BytesRef {
        public:
          PyObject_HEAD
          BytesRef object;
          static PyObject *wrap_Object(const BytesRef&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
