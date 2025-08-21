#ifndef org_apache_lucene_backward_codecs_compressing_Decompressor_H
#define org_apache_lucene_backward_codecs_compressing_Decompressor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
      }
      namespace util {
        class BytesRef;
      }
      namespace backward_codecs {
        namespace compressing {
          class Decompressor;
        }
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
    class Cloneable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace compressing {

          class Decompressor : public ::java::lang::Object {
           public:
            enum {
              mid_clone_8d4c813b15f3e002,
              mid_decompress_e602ab0fc115d035,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Decompressor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Decompressor(const Decompressor& obj) : ::java::lang::Object(obj) {}

            Decompressor clone() const;
            void decompress(const ::org::apache::lucene::store::DataInput &, jint, jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
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
        namespace compressing {
          extern PyType_Def PY_TYPE_DEF(Decompressor);
          extern PyTypeObject *PY_TYPE(Decompressor);

          class t_Decompressor {
          public:
            PyObject_HEAD
            Decompressor object;
            static PyObject *wrap_Object(const Decompressor&);
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
