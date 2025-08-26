#ifndef org_apache_lucene_backward_codecs_packed_LegacyDirectReader_H
#define org_apache_lucene_backward_codecs_packed_LegacyDirectReader_H

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
      namespace backward_codecs {
        namespace packed {

          class LegacyDirectReader : public ::java::lang::Object {
           public:
            enum {
              mid_getInstance_8f4b28191f3bbdcd,
              mid_getInstance_a68fa1af95e0c2d2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LegacyDirectReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LegacyDirectReader(const LegacyDirectReader& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::util::LongValues getInstance(const ::org::apache::lucene::store::RandomAccessInput &, jint);
            static ::org::apache::lucene::util::LongValues getInstance(const ::org::apache::lucene::store::RandomAccessInput &, jint, jlong);
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
      namespace backward_codecs {
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(LegacyDirectReader);
          extern PyTypeObject *PY_TYPE(LegacyDirectReader);

          class t_LegacyDirectReader {
          public:
            PyObject_HEAD
            LegacyDirectReader object;
            static PyObject *wrap_Object(const LegacyDirectReader&);
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
