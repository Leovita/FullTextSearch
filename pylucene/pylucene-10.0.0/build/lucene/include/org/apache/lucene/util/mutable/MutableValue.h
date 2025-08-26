#ifndef org_apache_lucene_util_mutable_MutableValue_H
#define org_apache_lucene_util_mutable_MutableValue_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Comparable;
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
              mid_init$_e7bdbe105ce1bafb,
              mid_compareSameType_3b738b91667a06c2,
              mid_compareTo_699d984ed256bedd,
              mid_copy_c9984adaa32a6ee1,
              mid_duplicate_ab99a02747ee80a6,
              mid_equals_00d17418847797d4,
              mid_equalsSameType_00d17418847797d4,
              mid_exists_9aa4f33e82ea333f,
              mid_hashCode_bd89ce15dad49192,
              mid_toObject_4819806f62f1360a,
              mid_toString_e7df854526d67fa3,
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
