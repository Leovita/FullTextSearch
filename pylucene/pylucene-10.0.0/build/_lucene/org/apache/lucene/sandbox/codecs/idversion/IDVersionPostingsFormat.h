#ifndef org_apache_lucene_sandbox_codecs_idversion_IDVersionPostingsFormat_H
#define org_apache_lucene_sandbox_codecs_idversion_IDVersionPostingsFormat_H

#include "org/apache/lucene/codecs/PostingsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
      namespace util {
        class BytesRef;
      }
      namespace codecs {
        class FieldsProducer;
        class FieldsConsumer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace codecs {
          namespace idversion {

            class IDVersionPostingsFormat : public ::org::apache::lucene::codecs::PostingsFormat {
             public:
              enum {
                mid_init$_e7bdbe105ce1bafb,
                mid_init$_645c25455f5b9b1c,
                mid_bytesToLong_8c6e1447894d7a38,
                mid_fieldsConsumer_53e79f306f41e536,
                mid_fieldsProducer_5a3bb464060de23c,
                mid_longToBytes_b204cd666ad770ec,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit IDVersionPostingsFormat(jobject obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              IDVersionPostingsFormat(const IDVersionPostingsFormat& obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {}

              static jlong MAX_VERSION;
              static jlong MIN_VERSION;

              IDVersionPostingsFormat();
              IDVersionPostingsFormat(jint, jint);

              static jlong bytesToLong(const ::org::apache::lucene::util::BytesRef &);
              ::org::apache::lucene::codecs::FieldsConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
              ::org::apache::lucene::codecs::FieldsProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
              static void longToBytes(jlong, const ::org::apache::lucene::util::BytesRef &);
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace codecs {
          namespace idversion {
            extern PyType_Def PY_TYPE_DEF(IDVersionPostingsFormat);
            extern PyTypeObject *PY_TYPE(IDVersionPostingsFormat);

            class t_IDVersionPostingsFormat {
            public:
              PyObject_HEAD
              IDVersionPostingsFormat object;
              static PyObject *wrap_Object(const IDVersionPostingsFormat&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
