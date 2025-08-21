#ifndef org_apache_lucene_util_packed_DirectReader_H
#define org_apache_lucene_util_packed_DirectReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class LongValues;
      }
      namespace store {
        class RandomAccessInput;
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
              mid_init$_3720c61b0679eb3e,
              mid_getInstance_24e5b23f13bd7147,
              mid_getInstance_473b769a0256b6ae,
              mid_getMergeInstance_473b769a0256b6ae,
              mid_getMergeInstance_5194b8af616d157b,
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
