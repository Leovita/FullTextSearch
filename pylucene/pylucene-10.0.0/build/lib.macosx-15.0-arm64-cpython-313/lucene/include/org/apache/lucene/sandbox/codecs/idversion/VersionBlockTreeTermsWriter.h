#ifndef org_apache_lucene_sandbox_codecs_idversion_VersionBlockTreeTermsWriter_H
#define org_apache_lucene_sandbox_codecs_idversion_VersionBlockTreeTermsWriter_H

#include "org/apache/lucene/codecs/FieldsConsumer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Fields;
        class SegmentWriteState;
      }
      namespace codecs {
        class NormsProducer;
        class PostingsWriterBase;
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
      namespace sandbox {
        namespace codecs {
          namespace idversion {

            class VersionBlockTreeTermsWriter : public ::org::apache::lucene::codecs::FieldsConsumer {
             public:
              enum {
                mid_init$_a86c320941e218ef,
                mid_close_3720c61b0679eb3e,
                mid_write_664e5b1e2ee1912b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit VersionBlockTreeTermsWriter(jobject obj) : ::org::apache::lucene::codecs::FieldsConsumer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              VersionBlockTreeTermsWriter(const VersionBlockTreeTermsWriter& obj) : ::org::apache::lucene::codecs::FieldsConsumer(obj) {}

              static jint DEFAULT_MAX_BLOCK_SIZE;
              static jint DEFAULT_MIN_BLOCK_SIZE;
              static jint VERSION_CURRENT;
              static jint VERSION_START;

              VersionBlockTreeTermsWriter(const ::org::apache::lucene::index::SegmentWriteState &, const ::org::apache::lucene::codecs::PostingsWriterBase &, jint, jint);

              void close() const;
              void write(const ::org::apache::lucene::index::Fields &, const ::org::apache::lucene::codecs::NormsProducer &) const;
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
            extern PyType_Def PY_TYPE_DEF(VersionBlockTreeTermsWriter);
            extern PyTypeObject *PY_TYPE(VersionBlockTreeTermsWriter);

            class t_VersionBlockTreeTermsWriter {
            public:
              PyObject_HEAD
              VersionBlockTreeTermsWriter object;
              static PyObject *wrap_Object(const VersionBlockTreeTermsWriter&);
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
