#ifndef org_apache_lucene_util_IntsRefBuilder_H
#define org_apache_lucene_util_IntsRefBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class IntsRefBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_append_540b2b23d51b1efd,
            mid_clear_3720c61b0679eb3e,
            mid_copyInts_594a6b57786882a9,
            mid_copyInts_ad090cb6070ea6a2,
            mid_copyUTF8Bytes_ac0de3ee0e03786d,
            mid_equals_570b5248a6da3ef6,
            mid_get_11a210fd9b2b21bd,
            mid_grow_540b2b23d51b1efd,
            mid_growNoCopy_540b2b23d51b1efd,
            mid_hashCode_20fbf7565993c3d7,
            mid_intAt_3c9bba330f083871,
            mid_ints_623cd4a044ba647a,
            mid_length_20fbf7565993c3d7,
            mid_setIntAt_e13cff512ebda969,
            mid_setLength_540b2b23d51b1efd,
            mid_toIntsRef_11a210fd9b2b21bd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntsRefBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntsRefBuilder(const IntsRefBuilder& obj) : ::java::lang::Object(obj) {}

          IntsRefBuilder();

          void append(jint) const;
          void clear() const;
          void copyInts(const ::org::apache::lucene::util::IntsRef &) const;
          void copyInts(const JArray< jint > &, jint, jint) const;
          void copyUTF8Bytes(const ::org::apache::lucene::util::BytesRef &) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::IntsRef get() const;
          void grow(jint) const;
          void growNoCopy(jint) const;
          jint hashCode() const;
          jint intAt(jint) const;
          JArray< jint > ints() const;
          jint length() const;
          void setIntAt(jint, jint) const;
          void setLength(jint) const;
          ::org::apache::lucene::util::IntsRef toIntsRef() const;
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
        extern PyType_Def PY_TYPE_DEF(IntsRefBuilder);
        extern PyTypeObject *PY_TYPE(IntsRefBuilder);

        class t_IntsRefBuilder {
        public:
          PyObject_HEAD
          IntsRefBuilder object;
          static PyObject *wrap_Object(const IntsRefBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
