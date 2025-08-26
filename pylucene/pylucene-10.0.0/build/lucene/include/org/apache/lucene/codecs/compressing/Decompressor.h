#ifndef org_apache_lucene_codecs_compressing_Decompressor_H
#define org_apache_lucene_codecs_compressing_Decompressor_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace compressing {
          class Decompressor;
        }
      }
      namespace store {
        class DataInput;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace compressing {

          class Decompressor : public ::java::lang::Object {
           public:
            enum {
              mid_clone_0a2895b8bea244f0,
              mid_decompress_9a58a446101503f8,
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
      namespace codecs {
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
