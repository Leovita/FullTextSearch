#ifndef org_apache_lucene_util_mutable_MutableValue_H
#define org_apache_lucene_util_mutable_MutableValue_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {
          class MutableValue;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {

          class MutableValue : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_compareSameType_657656e6a597f732,
              mid_compareTo_5e0a28593f6b0ffe,
              mid_copy_6ff892abee0fa393,
              mid_duplicate_28c3cf024c0e87ef,
              mid_equals_570b5248a6da3ef6,
              mid_equalsSameType_570b5248a6da3ef6,
              mid_exists_947277eca0748c4e,
              mid_hashCode_20fbf7565993c3d7,
              mid_toObject_5655ed8670534604,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            enum {
              fid_exists,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MutableValue(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MutableValue(const MutableValue& obj) : ::java::lang::Object(obj) {}

            jboolean _get_exists() const;
            void _set_exists(jboolean) const;

            MutableValue();

            jint compareSameType(const ::java::lang::Object &) const;
            jint compareTo(const MutableValue &) const;
            void copy(const MutableValue &) const;
            MutableValue duplicate() const;
            jboolean equals(const ::java::lang::Object &) const;
            jboolean equalsSameType(const ::java::lang::Object &) const;
            jboolean exists() const;
            jint hashCode() const;
            ::java::lang::Object toObject() const;
            ::java::lang::String toString() const;
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
      namespace util {
        namespace mutable$ {
          extern PyType_Def PY_TYPE_DEF(MutableValue);
          extern PyTypeObject *PY_TYPE(MutableValue);

          class t_MutableValue {
          public:
            PyObject_HEAD
            MutableValue object;
            static PyObject *wrap_Object(const MutableValue&);
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
