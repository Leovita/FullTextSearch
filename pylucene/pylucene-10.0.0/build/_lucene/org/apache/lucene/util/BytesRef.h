#ifndef org_apache_lucene_util_BytesRef_H
#define org_apache_lucene_util_BytesRef_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class CharSequence;
    class String;
    class Cloneable;
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
            mid_init$_3720c61b0679eb3e,
            mid_init$_3ce1e597fb62ac79,
            mid_init$_540b2b23d51b1efd,
            mid_init$_5ed8eb2e3024c663,
            mid_init$_5fdd5da9426708e6,
            mid_bytesEquals_f460ee421aade2fd,
            mid_clone_9740fddd1c7df148,
            mid_compareTo_5cda243a0bd46c4d,
            mid_deepCopyOf_7ee20c47a981dd44,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_isValid_947277eca0748c4e,
            mid_toString_09a7afff1868fc5e,
            mid_utf8ToString_09a7afff1868fc5e,
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
