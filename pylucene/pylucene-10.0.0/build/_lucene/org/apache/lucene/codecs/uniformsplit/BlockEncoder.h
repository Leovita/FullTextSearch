#ifndef org_apache_lucene_codecs_uniformsplit_BlockEncoder_H
#define org_apache_lucene_codecs_uniformsplit_BlockEncoder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          class BlockEncoder$WritableBytes;
        }
      }
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
      namespace codecs {
        namespace uniformsplit {

          class BlockEncoder : public ::java::lang::Object {
           public:
            enum {
              mid_encode_52c01c9594e316b9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockEncoder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockEncoder(const BlockEncoder& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::codecs::uniformsplit::BlockEncoder$WritableBytes encode(const ::org::apache::lucene::store::DataInput &, jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(BlockEncoder);
          extern PyTypeObject *PY_TYPE(BlockEncoder);

          class t_BlockEncoder {
          public:
            PyObject_HEAD
            BlockEncoder object;
            static PyObject *wrap_Object(const BlockEncoder&);
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
