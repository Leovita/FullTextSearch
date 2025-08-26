#ifndef org_apache_lucene_util_packed_PackedDataInput_H
#define org_apache_lucene_util_packed_PackedDataInput_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
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

          class PackedDataInput : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b57ffc017de24fe4,
              mid_readLong_49af390f180d8ee7,
              mid_skipToNextByte_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedDataInput(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedDataInput(const PackedDataInput& obj) : ::java::lang::Object(obj) {}

            PackedDataInput(const ::org::apache::lucene::store::DataInput &);

            jlong readLong(jint) const;
            void skipToNextByte() const;
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
          extern PyType_Def PY_TYPE_DEF(PackedDataInput);
          extern PyTypeObject *PY_TYPE(PackedDataInput);

          class t_PackedDataInput {
          public:
            PyObject_HEAD
            PackedDataInput object;
            static PyObject *wrap_Object(const PackedDataInput&);
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
