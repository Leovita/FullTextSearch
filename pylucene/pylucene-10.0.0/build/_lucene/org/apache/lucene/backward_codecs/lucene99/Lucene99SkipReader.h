#ifndef org_apache_lucene_backward_codecs_lucene99_Lucene99SkipReader_H
#define org_apache_lucene_backward_codecs_lucene99_Lucene99SkipReader_H

#include "org/apache/lucene/codecs/MultiLevelSkipListReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexInput;
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
      namespace backward_codecs {
        namespace lucene99 {

          class Lucene99SkipReader : public ::org::apache::lucene::codecs::MultiLevelSkipListReader {
           public:
            enum {
              mid_init$_f731229a07ca537c,
              mid_getDocPointer_16939d9d0a9a9721,
              mid_getNextSkipDoc_20fbf7565993c3d7,
              mid_getPayPointer_16939d9d0a9a9721,
              mid_getPayloadByteUpto_20fbf7565993c3d7,
              mid_getPosBufferUpto_20fbf7565993c3d7,
              mid_getPosPointer_16939d9d0a9a9721,
              mid_init_37346f2040eb1a47,
              mid_readImpacts_0dad1b34475c81f9,
              mid_readSkipData_ecaf58c646b57409,
              mid_seekChild_540b2b23d51b1efd,
              mid_setLastSkipData_540b2b23d51b1efd,
              mid_trim_3c9bba330f083871,
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
