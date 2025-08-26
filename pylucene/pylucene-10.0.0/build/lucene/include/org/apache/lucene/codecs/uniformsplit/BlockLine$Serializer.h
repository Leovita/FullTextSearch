#ifndef org_apache_lucene_codecs_uniformsplit_BlockLine$Serializer_H
#define org_apache_lucene_codecs_uniformsplit_BlockLine$Serializer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace codecs {
        namespace uniformsplit {
          class BlockLine;
        }
      }
      namespace util {
        class Accountable;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {

          class BlockLine$Serializer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_readLine_da9ebcc55e1a4400,
              mid_writeLine_9ec52fb7ce42b31e,
              mid_readIncrementallyEncodedTerm_4d18a0fa502f4021,
              mid_writeLineTermState_4c86255027cde33b,
              mid_writeIncrementallyEncodedTerm_9e2a8621b892af00,
              mid_numBitsToEncode_a3904e10f5bb9437,
              mid_readBytes_a08d975f809d9649,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockLine$Serializer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockLine$Serializer(const BlockLine$Serializer& obj) : ::java::lang::Object(obj) {}

            BlockLine$Serializer();

            jlong ramBytesUsed() const;
            ::org::apache::lucene::codecs::uniformsplit::BlockLine readLine(const ::org::apache::lucene::store::DataInput &, jboolean, const ::org::apache::lucene::codecs::uniformsplit::BlockLine &) const;
            void writeLine(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::codecs::uniformsplit::BlockLine &, const ::org::apache::lucene::codecs::uniformsplit::BlockLine &, jint, jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(BlockLine$Serializer);
          extern PyTypeObject *PY_TYPE(BlockLine$Serializer);

          class t_BlockLine$Serializer {
          public:
            PyObject_HEAD
            BlockLine$Serializer object;
            static PyObject *wrap_Object(const BlockLine$Serializer&);
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
