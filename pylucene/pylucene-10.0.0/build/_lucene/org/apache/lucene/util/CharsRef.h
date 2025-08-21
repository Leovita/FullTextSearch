#ifndef org_apache_lucene_util_CharsRef_H
#define org_apache_lucene_util_CharsRef_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class CharSequence;
    class String;
    class Cloneable;
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
            mid_init$_3720c61b0679eb3e,
            mid_init$_0d82408c6e55bc30,
            mid_init$_540b2b23d51b1efd,
            mid_init$_fc9be2ded8ee801f,
            mid_charAt_92a13ce4196a7e69,
            mid_charsEquals_8f45d37653ef7b2f,
            mid_clone_94b51711598dd26a,
            mid_compareTo_58b5f17b42039c33,
            mid_deepCopyOf_886fb28256559fbb,
            mid_equals_570b5248a6da3ef6,
            mid_getUTF16SortedAsUTF8Comparator_39238840448c1807,
            mid_hashCode_20fbf7565993c3d7,
            mid_isValid_947277eca0748c4e,
            mid_length_20fbf7565993c3d7,
            mid_stringHashCode_db543c1e894f3140,
            mid_subSequence_3202de35bfd622a0,
            mid_toString_09a7afff1868fc5e,
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
