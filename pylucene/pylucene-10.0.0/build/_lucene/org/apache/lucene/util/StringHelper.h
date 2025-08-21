#ifndef org_apache_lucene_util_StringHelper_H
#define org_apache_lucene_util_StringHelper_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class StringHelper : public ::java::lang::Object {
         public:
          enum {
            mid_bytesDifference_c605ddf1ef691f34,
            mid_endsWith_4f661ad29dd313e4,
            mid_idToString_6629ab823d439f65,
            mid_intsRefToBytesRef_899c5d86dd0256eb,
            mid_murmurhash3_x86_32_8b200667d2230cfc,
            mid_murmurhash3_x86_32_5812dacb3de72816,
            mid_randomId_5560da88fc44aa82,
            mid_sortKeyLength_c605ddf1ef691f34,
            mid_startsWith_3cdc1e532145fc06,
            mid_startsWith_4f661ad29dd313e4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StringHelper(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StringHelper(const StringHelper& obj) : ::java::lang::Object(obj) {}

          static jint GOOD_FAST_HASH_SEED;
          static jint ID_LENGTH;

          static jint bytesDifference(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &);
          static jboolean endsWith(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &);
          static ::java::lang::String idToString(const JArray< jbyte > &);
          static ::org::apache::lucene::util::BytesRef intsRefToBytesRef(const ::org::apache::lucene::util::IntsRef &);
          static jint murmurhash3_x86_32(const ::org::apache::lucene::util::BytesRef &, jint);
          static jint murmurhash3_x86_32(const JArray< jbyte > &, jint, jint, jint);
          static JArray< jbyte > randomId();
          static jint sortKeyLength(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &);
          static jboolean startsWith(const JArray< jbyte > &, const ::org::apache::lucene::util::BytesRef &);
          static jboolean startsWith(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &);
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
        extern PyType_Def PY_TYPE_DEF(StringHelper);
        extern PyTypeObject *PY_TYPE(StringHelper);

        class t_StringHelper {
        public:
          PyObject_HEAD
          StringHelper object;
          static PyObject *wrap_Object(const StringHelper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
