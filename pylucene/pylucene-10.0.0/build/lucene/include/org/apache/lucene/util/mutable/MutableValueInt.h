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
              mid_init$_e7bdbe105ce1bafb,
              mid_compareSameType_3b738b91667a06c2,
              mid_copy_c9984adaa32a6ee1,
              mid_duplicate_ab99a02747ee80a6,
              mid_equalsSameType_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_toObject_4819806f62f1360a,
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
