#ifndef org_apache_lucene_codecs_uniformsplit_BlockWriter_H
#define org_apache_lucene_codecs_uniformsplit_BlockWriter_H

#include "java/lang/Object.h"

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

          class BlockWriter : public ::java::lang::Object {
           public:
            enum {
              mid_splitAndWriteBlock_2798b2c9e81a469e,
              mid_createBlockLineSerializer_119d0a6549b55a52,
              mid_writeBlockLine_03a26e2e9b3359ce,
              mid_updateFieldMetadata_1d3149fac12f2af3,
              mid_createBlockHeaderSerializer_079d2def0419b3f5,
              mid_createDeltaBaseTermStateSerializer_7524b2c859b47f7f,
              mid_addBlockKey_7f23e87d4f84d53f,
              mid_addLine_93d1b92a22f0468f,
              mid_finishLastBlock_2798b2c9e81a469e,
              mid_writeBlock_7f23e87d4f84d53f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockWriter(const BlockWriter& obj) : ::java::lang::Object(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(BlockWriter);
          extern PyTypeObject *PY_TYPE(BlockWriter);

          class t_BlockWriter {
          public:
            PyObject_HEAD
            BlockWriter object;
            static PyObject *wrap_Object(const BlockWriter&);
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
