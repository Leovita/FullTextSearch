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
        class BytesRef;
        class CharsRef;
        class CharsRefBuilder;
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
            mid_init$_3720c61b0679eb3e,
            mid_append_48fa5c77bd58f5dd,
            mid_append_b8a96e85eae4ca64,
            mid_append_fc9be2ded8ee801f,
            mid_append_817ab3104dd30a42,
            mid_charAt_92a13ce4196a7e69,
            mid_chars_77d52ded526199de,
            mid_clear_3720c61b0679eb3e,
            mid_copyChars_a3634bb724ee336f,
            mid_copyChars_fc9be2ded8ee801f,
            mid_copyUTF8Bytes_ac0de3ee0e03786d,
            mid_copyUTF8Bytes_5fdd5da9426708e6,
            mid_equals_570b5248a6da3ef6,
            mid_get_94b51711598dd26a,
            mid_grow_540b2b23d51b1efd,
            mid_hashCode_20fbf7565993c3d7,
            mid_length_20fbf7565993c3d7,
            mid_setCharAt_931c9794de74ba08,
            mid_setLength_540b2b23d51b1efd,
            mid_toCharsRef_94b51711598dd26a,
            mid_toString_09a7afff1868fc5e,
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
