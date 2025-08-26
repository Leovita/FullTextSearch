#ifndef org_apache_lucene_codecs_uniformsplit_RamUsageUtil_H
#define org_apache_lucene_codecs_uniformsplit_RamUsageUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class BytesRefBuilder;
      }
      namespace index {
        class TermState;
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
      namespace codecs {
        namespace uniformsplit {

          class RamUsageUtil : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_ramBytesUsed_066d3aa6477974b9,
              mid_ramBytesUsed_8c6e1447894d7a38,
              mid_ramBytesUsed_4b50e177bd7bdb41,
              mid_ramBytesUsedByByteArrayOfLength_49af390f180d8ee7,
              mid_ramBytesUsedByHashMapOfSize_49af390f180d8ee7,
              mid_ramBytesUsedByObjectArrayOfLength_49af390f180d8ee7,
              mid_ramBytesUsedByUnmodifiableArrayListOfSize_49af390f180d8ee7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RamUsageUtil(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RamUsageUtil(const RamUsageUtil& obj) : ::java::lang::Object(obj) {}

            RamUsageUtil();

            static jlong ramBytesUsed(const ::org::apache::lucene::index::TermState &);
            static jlong ramBytesUsed(const ::org::apache::lucene::util::BytesRef &);
            static jlong ramBytesUsed(const ::org::apache::lucene::util::BytesRefBuilder &);
            static jlong ramBytesUsedByByteArrayOfLength(jint);
            static jlong ramBytesUsedByHashMapOfSize(jint);
            static jlong ramBytesUsedByObjectArrayOfLength(jint);
            static jlong ramBytesUsedByUnmodifiableArrayListOfSize(jint);
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
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(RamUsageUtil);
          extern PyTypeObject *PY_TYPE(RamUsageUtil);

          class t_RamUsageUtil {
          public:
            PyObject_HEAD
            RamUsageUtil object;
            static PyObject *wrap_Object(const RamUsageUtil&);
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
