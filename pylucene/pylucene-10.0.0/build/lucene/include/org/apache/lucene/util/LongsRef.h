#ifndef org_apache_lucene_util_LongsRef_H
#define org_apache_lucene_util_LongsRef_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
    class Cloneable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class LongsRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class LongsRef : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_init$_540b2b23d51b1efd,
            mid_init$_f3cd87eda3d12dc6,
            mid_clone_6a47e19541528a42,
            mid_compareTo_5f07af77bc1aa553,
            mid_deepCopyOf_da1ff7e79b0df8b2,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_isValid_947277eca0748c4e,
            mid_longsEquals_bb9b0153a6a38a01,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          enum {
            fid_length,
            fid_longs,
            fid_offset,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongsRef(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongsRef(const LongsRef& obj) : ::java::lang::Object(obj) {}

          static JArray< jlong > *EMPTY_LONGS;

          jint _get_length() const;
          void _set_length(jint) const;
          JArray< jlong > _get_longs() const;
          void _set_longs(const JArray< jlong > &) const;
          jint _get_offset() const;
          void _set_offset(jint) const;

          LongsRef();
          LongsRef(jint);
          LongsRef(const JArray< jlong > &, jint, jint);

          LongsRef clone() const;
          jint compareTo(const LongsRef &) const;
          static LongsRef deepCopyOf(const LongsRef &);
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jboolean isValid() const;
          jboolean longsEquals(const LongsRef &) const;
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
        extern PyType_Def PY_TYPE_DEF(LongsRef);
        extern PyTypeObject *PY_TYPE(LongsRef);

        class t_LongsRef {
        public:
          PyObject_HEAD
          LongsRef object;
          static PyObject *wrap_Object(const LongsRef&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
