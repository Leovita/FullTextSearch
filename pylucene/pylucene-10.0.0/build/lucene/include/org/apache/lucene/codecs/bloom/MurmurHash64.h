#ifndef org_apache_lucene_codecs_bloom_MurmurHash64_H
#define org_apache_lucene_codecs_bloom_MurmurHash64_H

#include "org/apache/lucene/codecs/bloom/HashFunction.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
      namespace codecs {
        namespace bloom {

          class MurmurHash64 : public ::org::apache::lucene::codecs::bloom::HashFunction {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_hash_8c6e1447894d7a38,
              mid_hash64_fa8398b039e25950,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MurmurHash64(jobject obj) : ::org::apache::lucene::codecs::bloom::HashFunction(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MurmurHash64(const MurmurHash64& obj) : ::org::apache::lucene::codecs::bloom::HashFunction(obj) {}

            static ::org::apache::lucene::codecs::bloom::HashFunction *INSTANCE;

            MurmurHash64();

            jlong hash(const ::org::apache::lucene::util::BytesRef &) const;
            static jlong hash64(const JArray< jbyte > &, jint, jint, jint);
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
      namespace codecs {
        namespace bloom {
          extern PyType_Def PY_TYPE_DEF(MurmurHash64);
          extern PyTypeObject *PY_TYPE(MurmurHash64);

          class t_MurmurHash64 {
          public:
            PyObject_HEAD
            MurmurHash64 object;
            static PyObject *wrap_Object(const MurmurHash64&);
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
