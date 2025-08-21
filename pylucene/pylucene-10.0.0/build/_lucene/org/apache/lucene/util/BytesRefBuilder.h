#ifndef org_apache_lucene_util_BytesRefBuilder_H
#define org_apache_lucene_util_BytesRefBuilder_H

#include "java/lang/Object.h"

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
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
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
            mid_init$_3720c61b0679eb3e,
            mid_append_ac0de3ee0e03786d,
            mid_append_b7c9ad585c24cb8c,
            mid_append_bcdac0a459ff35f6,
            mid_append_5fdd5da9426708e6,
            mid_byteAt_3b30672d0bff9ebb,
            mid_bytes_5560da88fc44aa82,
            mid_clear_3720c61b0679eb3e,
            mid_copyBytes_ac0de3ee0e03786d,
            mid_copyBytes_b7c9ad585c24cb8c,
            mid_copyBytes_5fdd5da9426708e6,
            mid_copyChars_5ed8eb2e3024c663,
            mid_copyChars_fc9be2ded8ee801f,
            mid_copyChars_17dee08b301eed95,
            mid_equals_570b5248a6da3ef6,
            mid_get_9740fddd1c7df148,
            mid_grow_540b2b23d51b1efd,
            mid_growNoCopy_540b2b23d51b1efd,
            mid_hashCode_20fbf7565993c3d7,
            mid_length_20fbf7565993c3d7,
            mid_setByteAt_d5c089c49f1419cd,
            mid_setLength_540b2b23d51b1efd,
            mid_toBytesRef_9740fddd1c7df148,
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
