#ifndef org_apache_lucene_util_StringHelper_H
#define org_apache_lucene_util_StringHelper_H

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
    class String;
    class Class;
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
            mid_bytesDifference_a0fa18546e6b17ce,
            mid_endsWith_e1f6fb62db0d00cc,
            mid_idToString_e16a141122e42829,
            mid_intsRefToBytesRef_48eda4c764fb9d1d,
            mid_murmurhash3_x86_32_2bfb2622d112f52f,
            mid_murmurhash3_x86_32_33b6b40a1d01b320,
            mid_randomId_44e916dc40fc04cb,
            mid_sortKeyLength_a0fa18546e6b17ce,
            mid_startsWith_1bd0d86e59b7f4d6,
            mid_startsWith_e1f6fb62db0d00cc,
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
