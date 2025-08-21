#ifndef org_apache_lucene_codecs_uniformsplit_BlockDecoder_H
#define org_apache_lucene_codecs_uniformsplit_BlockDecoder_H

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
      namespace codecs {
        namespace uniformsplit {

          class BlockDecoder : public ::java::lang::Object {
           public:
            enum {
              mid_decode_3a59c8a73f464a15,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockDecoder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockDecoder(const BlockDecoder& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::BytesRef decode(const ::org::apache::lucene::store::DataInput &, jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(BlockDecoder);
          extern PyTypeObject *PY_TYPE(BlockDecoder);

          class t_BlockDecoder {
          public:
            PyObject_HEAD
            BlockDecoder object;
            static PyObject *wrap_Object(const BlockDecoder&);
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
