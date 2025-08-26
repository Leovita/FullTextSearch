#ifndef org_apache_lucene_util_packed_DirectReader_H
#define org_apache_lucene_util_packed_DirectReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class RandomAccessInput;
      }
      namespace util {
        class LongValues;
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
        namespace packed {

          class DirectReader : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_getInstance_8f4b28191f3bbdcd,
              mid_getInstance_a68fa1af95e0c2d2,
              mid_getMergeInstance_a68fa1af95e0c2d2,
              mid_getMergeInstance_02d7b45f4e418476,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DirectReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DirectReader(const DirectReader& obj) : ::java::lang::Object(obj) {}

            DirectReader();

            static ::org::apache::lucene::util::LongValues getInstance(const ::org::apache::lucene::store::RandomAccessInput &, jint);
            static ::org::apache::lucene::util::LongValues getInstance(const ::org::apache::lucene::store::RandomAccessInput &, jint, jlong);
            static ::org::apache::lucene::util::LongValues getMergeInstance(const ::org::apache::lucene::store::RandomAccessInput &, jint, jlong);
            static ::org::apache::lucene::util::LongValues getMergeInstance(const ::org::apache::lucene::store::RandomAccessInput &, jint, jlong, jlong);
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
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(DirectReader);
          extern PyTypeObject *PY_TYPE(DirectReader);

          class t_DirectReader {
          public:
            PyObject_HEAD
            DirectReader object;
            static PyObject *wrap_Object(const DirectReader&);
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
