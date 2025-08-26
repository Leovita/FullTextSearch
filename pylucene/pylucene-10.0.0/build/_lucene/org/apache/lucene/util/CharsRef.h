#ifndef org_apache_lucene_util_CharsRef_H
#define org_apache_lucene_util_CharsRef_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Cloneable;
    class Class;
    class String;
    class CharSequence;
  }
  namespace util {
    class Comparator;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class CharsRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class CharsRef : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_ee46a189998009d6,
            mid_init$_8226bd0b0fc13dba,
            mid_init$_186bb5d1c1aec30c,
            mid_charAt_bc94dd98365f92fb,
            mid_charsEquals_355501ecf156b28b,
            mid_clone_669503bbeca09860,
            mid_compareTo_cfeef7194c476a6a,
            mid_deepCopyOf_991f7d51a3e848a7,
            mid_equals_00d17418847797d4,
            mid_getUTF16SortedAsUTF8Comparator_5cc89c689cd941fe,
            mid_hashCode_bd89ce15dad49192,
            mid_isValid_9aa4f33e82ea333f,
            mid_length_bd89ce15dad49192,
            mid_stringHashCode_872baf22ed11fbaa,
            mid_subSequence_e78c175a32c9e667,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          enum {
            fid_chars,
            fid_length,
            fid_offset,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharsRef(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharsRef(const CharsRef& obj) : ::java::lang::Object(obj) {}

          static JArray< jchar > *EMPTY_CHARS;

          JArray< jchar > _get_chars() const;
          void _set_chars(const JArray< jchar > &) const;
          jint _get_length() const;
          void _set_length(jint) const;
          jint _get_offset() const;
          void _set_offset(jint) const;

          CharsRef();
          CharsRef(const ::java::lang::String &);
          CharsRef(jint);
          CharsRef(const JArray< jchar > &, jint, jint);

          jchar charAt(jint) const;
          jboolean charsEquals(const CharsRef &) const;
          CharsRef clone() const;
          jint compareTo(const CharsRef &) const;
          static CharsRef deepCopyOf(const CharsRef &);
          jboolean equals(const ::java::lang::Object &) const;
          static ::java::util::Comparator getUTF16SortedAsUTF8Comparator();
          jint hashCode() const;
          jboolean isValid() const;
          jint length() const;
          static jint stringHashCode(const JArray< jchar > &, jint, jint);
          ::java::lang::CharSequence subSequence(jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(CharsRef);
        extern PyTypeObject *PY_TYPE(CharsRef);

        class t_CharsRef {
        public:
          PyObject_HEAD
          CharsRef object;
          static PyObject *wrap_Object(const CharsRef&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
