#ifndef org_apache_lucene_util_IntsRef_H
#define org_apache_lucene_util_IntsRef_H

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
        class IntsRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class IntsRef : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_init$_540b2b23d51b1efd,
            mid_init$_ad090cb6070ea6a2,
            mid_clone_11a210fd9b2b21bd,
            mid_compareTo_8d588517c4e2cbc0,
            mid_deepCopyOf_dac71731b1ce1096,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_intsEquals_74043af02f7cfbce,
            mid_isValid_947277eca0748c4e,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          enum {
            fid_ints,
            fid_length,
            fid_offset,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntsRef(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntsRef(const IntsRef& obj) : ::java::lang::Object(obj) {}

          static JArray< jint > *EMPTY_INTS;

          JArray< jint > _get_ints() const;
          void _set_ints(const JArray< jint > &) const;
          jint _get_length() const;
          void _set_length(jint) const;
          jint _get_offset() const;
          void _set_offset(jint) const;

          IntsRef();
          IntsRef(jint);
          IntsRef(const JArray< jint > &, jint, jint);

          IntsRef clone() const;
          jint compareTo(const IntsRef &) const;
          static IntsRef deepCopyOf(const IntsRef &);
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jboolean intsEquals(const IntsRef &) const;
          jboolean isValid() const;
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
        extern PyType_Def PY_TYPE_DEF(IntsRef);
        extern PyTypeObject *PY_TYPE(IntsRef);

        class t_IntsRef {
        public:
          PyObject_HEAD
          IntsRef object;
          static PyObject *wrap_Object(const IntsRef&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
