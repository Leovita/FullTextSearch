#ifndef org_apache_lucene_util_mutable_MutableValueInt_H
#define org_apache_lucene_util_mutable_MutableValueInt_H

#include "org/apache/lucene/util/mutable/MutableValue.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {

          class MutableValueInt : public ::org::apache::lucene::util::mutable$::MutableValue {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_compareSameType_657656e6a597f732,
              mid_copy_6ff892abee0fa393,
              mid_duplicate_28c3cf024c0e87ef,
              mid_equalsSameType_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_toObject_5655ed8670534604,
              max_mid
            };

            enum {
              fid_value,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MutableValueInt(jobject obj) : ::org::apache::lucene::util::mutable$::MutableValue(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MutableValueInt(const MutableValueInt& obj) : ::org::apache::lucene::util::mutable$::MutableValue(obj) {}

            jint _get_value() const;
            void _set_value(jint) const;

            MutableValueInt();

            jint compareSameType(const ::java::lang::Object &) const;
            void copy(const ::org::apache::lucene::util::mutable$::MutableValue &) const;
            ::org::apache::lucene::util::mutable$::MutableValue duplicate() const;
            jboolean equalsSameType(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::java::lang::Object toObject() const;
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
          extern PyType_Def PY_TYPE_DEF(MutableValueInt);
          extern PyTypeObject *PY_TYPE(MutableValueInt);

          class t_MutableValueInt {
          public:
            PyObject_HEAD
            MutableValueInt object;
            static PyObject *wrap_Object(const MutableValueInt&);
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
