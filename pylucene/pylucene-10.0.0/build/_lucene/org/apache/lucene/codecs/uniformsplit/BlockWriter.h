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
              mid_createBlockLineSerializer_73ba64f41f1e264b,
              mid_createBlockHeaderSerializer_6952406d1a100b4b,
              mid_createDeltaBaseTermStateSerializer_f794edf8e4b1e37d,
              mid_splitAndWriteBlock_d103b6face46e3b6,
              mid_addBlockKey_c4ee280ecd25d3ab,
              mid_writeBlockLine_968a024485a51fb6,
              mid_updateFieldMetadata_8b3d46852b435a94,
              mid_writeBlock_c4ee280ecd25d3ab,
              mid_finishLastBlock_d103b6face46e3b6,
              mid_addLine_3926eeb32cf209df,
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
