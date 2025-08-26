#ifndef org_apache_lucene_backward_codecs_lucene99_Lucene99SkipReader_H
#define org_apache_lucene_backward_codecs_lucene99_Lucene99SkipReader_H

#include "org/apache/lucene/codecs/MultiLevelSkipListReader.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexInput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene99 {

          class Lucene99SkipReader : public ::org::apache::lucene::codecs::MultiLevelSkipListReader {
           public:
            enum {
              mid_init$_e5ec13a31f276833,
              mid_getDocPointer_0f176418e3e16541,
              mid_getNextSkipDoc_bd89ce15dad49192,
              mid_getPayPointer_0f176418e3e16541,
              mid_getPayloadByteUpto_bd89ce15dad49192,
              mid_getPosBufferUpto_bd89ce15dad49192,
              mid_getPosPointer_0f176418e3e16541,
              mid_init_41c2f04cbbff732c,
              mid_seekChild_8226bd0b0fc13dba,
              mid_setLastSkipData_8226bd0b0fc13dba,
              mid_readSkipData_5f368c887824ddf9,
              mid_readImpacts_9f5a87b1d1d97186,
              mid_trim_a3904e10f5bb9437,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene99SkipReader(jobject obj) : ::org::apache::lucene::codecs::MultiLevelSkipListReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene99SkipReader(const Lucene99SkipReader& obj) : ::org::apache::lucene::codecs::MultiLevelSkipListReader(obj) {}

            Lucene99SkipReader(const ::org::apache::lucene::store::IndexInput &, jint, jboolean, jboolean, jboolean);

            jlong getDocPointer() const;
            jint getNextSkipDoc() const;
            jlong getPayPointer() const;
            jint getPayloadByteUpto() const;
            jint getPosBufferUpto() const;
            jlong getPosPointer() const;
            void init(jlong, jlong, jlong, jlong, jint) const;
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
        namespace lucene99 {
          extern PyType_Def PY_TYPE_DEF(Lucene99SkipReader);
          extern PyTypeObject *PY_TYPE(Lucene99SkipReader);

          class t_Lucene99SkipReader {
          public:
            PyObject_HEAD
            Lucene99SkipReader object;
            static PyObject *wrap_Object(const Lucene99SkipReader&);
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
