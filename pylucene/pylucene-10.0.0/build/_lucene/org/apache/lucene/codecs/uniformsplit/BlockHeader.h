#ifndef org_apache_lucene_codecs_uniformsplit_BlockHeader_H
#define org_apache_lucene_codecs_uniformsplit_BlockHeader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
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
      namespace codecs {
        namespace uniformsplit {

          class BlockHeader : public ::java::lang::Object {
           public:
            enum {
              mid_getBaseDocsFP_16939d9d0a9a9721,
              mid_getBasePayloadsFP_16939d9d0a9a9721,
              mid_getBasePositionsFP_16939d9d0a9a9721,
              mid_getLinesCount_20fbf7565993c3d7,
              mid_getMiddleLineIndex_20fbf7565993c3d7,
              mid_getMiddleLineOffset_20fbf7565993c3d7,
              mid_getTermStatesBaseOffset_20fbf7565993c3d7,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_reset_6a8abb0ffea5d46e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockHeader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockHeader(const BlockHeader& obj) : ::java::lang::Object(obj) {}

            jlong getBaseDocsFP() const;
            jlong getBasePayloadsFP() const;
            jlong getBasePositionsFP() const;
            jint getLinesCount() const;
            jint getMiddleLineIndex() const;
            jint getMiddleLineOffset() const;
            jint getTermStatesBaseOffset() const;
            jlong ramBytesUsed() const;
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
          extern PyType_Def PY_TYPE_DEF(BlockHeader);
          extern PyTypeObject *PY_TYPE(BlockHeader);

          class t_BlockHeader {
          public:
            PyObject_HEAD
            BlockHeader object;
            static PyObject *wrap_Object(const BlockHeader&);
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
