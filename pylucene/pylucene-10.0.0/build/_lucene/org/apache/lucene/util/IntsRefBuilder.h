#ifndef org_apache_lucene_util_IntsRefBuilder_H
#define org_apache_lucene_util_IntsRefBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class IntsRef;
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
            mid_init$_e7bdbe105ce1bafb,
            mid_append_8226bd0b0fc13dba,
            mid_clear_e7bdbe105ce1bafb,
            mid_copyInts_9b114e5af4494a53,
            mid_copyInts_57da58ead958e473,
            mid_copyUTF8Bytes_920ce0cdf4259cc9,
            mid_equals_00d17418847797d4,
            mid_get_467dd1d064587a13,
            mid_grow_8226bd0b0fc13dba,
            mid_growNoCopy_8226bd0b0fc13dba,
            mid_hashCode_bd89ce15dad49192,
            mid_intAt_a3904e10f5bb9437,
            mid_ints_4b72a28a860ae838,
            mid_length_bd89ce15dad49192,
            mid_setIntAt_645c25455f5b9b1c,
            mid_setLength_8226bd0b0fc13dba,
            mid_toIntsRef_467dd1d064587a13,
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
