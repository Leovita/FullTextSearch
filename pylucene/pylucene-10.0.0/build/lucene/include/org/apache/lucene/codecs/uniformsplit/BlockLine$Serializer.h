#ifndef org_apache_lucene_codecs_uniformsplit_BlockLine$Serializer_H
#define org_apache_lucene_codecs_uniformsplit_BlockLine$Serializer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace codecs {
        namespace uniformsplit {
          class BlockLine;
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

          class BlockLine$Serializer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_readLine_319193dd2818da52,
              mid_writeLine_3e5c4bb7f9fac94d,
              mid_readIncrementallyEncodedTerm_4b3f218369a91d61,
              mid_writeIncrementallyEncodedTerm_0d007d664dfdb43e,
              mid_numBitsToEncode_3c9bba330f083871,
              mid_writeLineTermState_850b9ec37df5bb7e,
              mid_readBytes_8a137ea39c515db6,
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
