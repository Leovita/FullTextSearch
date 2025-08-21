#ifndef org_apache_lucene_codecs_uniformsplit_BlockHeader$Serializer_H
#define org_apache_lucene_codecs_uniformsplit_BlockHeader$Serializer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace codecs {
        namespace uniformsplit {
          class BlockHeader;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {

          class BlockHeader$Serializer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_read_e7d031d75f7a62f4,
              mid_write_127c9fdda7dff9f4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockHeader$Serializer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockHeader$Serializer(const BlockHeader$Serializer& obj) : ::java::lang::Object(obj) {}

            BlockHeader$Serializer();

            ::org::apache::lucene::codecs::uniformsplit::BlockHeader read(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::codecs::uniformsplit::BlockHeader &) const;
            void write(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::codecs::uniformsplit::BlockHeader &) const;
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
          extern PyType_Def PY_TYPE_DEF(BlockHeader$Serializer);
          extern PyTypeObject *PY_TYPE(BlockHeader$Serializer);

          class t_BlockHeader$Serializer {
          public:
            PyObject_HEAD
            BlockHeader$Serializer object;
            static PyObject *wrap_Object(const BlockHeader$Serializer&);
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
