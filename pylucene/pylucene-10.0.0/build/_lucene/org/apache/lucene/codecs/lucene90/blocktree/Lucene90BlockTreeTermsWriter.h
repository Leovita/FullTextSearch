#ifndef org_apache_lucene_codecs_lucene90_blocktree_Lucene90BlockTreeTermsWriter_H
#define org_apache_lucene_codecs_lucene90_blocktree_Lucene90BlockTreeTermsWriter_H

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
      namespace codecs {
        namespace lucene90 {
          namespace blocktree {

            class Lucene90BlockTreeTermsWriter : public ::org::apache::lucene::codecs::FieldsConsumer {
             public:
              enum {
                mid_init$_a86c320941e218ef,
                mid_init$_589deda1a7c08cea,
                mid_close_3720c61b0679eb3e,
                mid_validateSettings_e13cff512ebda969,
                mid_write_664e5b1e2ee1912b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Lucene90BlockTreeTermsWriter(jobject obj) : ::org::apache::lucene::codecs::FieldsConsumer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Lucene90BlockTreeTermsWriter(const Lucene90BlockTreeTermsWriter& obj) : ::org::apache::lucene::codecs::FieldsConsumer(obj) {}

              static jint DEFAULT_MAX_BLOCK_SIZE;
              static jint DEFAULT_MIN_BLOCK_SIZE;

              Lucene90BlockTreeTermsWriter(const ::org::apache::lucene::index::SegmentWriteState &, const ::org::apache::lucene::codecs::PostingsWriterBase &, jint, jint);
              Lucene90BlockTreeTermsWriter(const ::org::apache::lucene::index::SegmentWriteState &, const ::org::apache::lucene::codecs::PostingsWriterBase &, jint, jint, jint);

              void close() const;
              static void validateSettings(jint, jint);
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
      namespace codecs {
        namespace lucene90 {
          namespace blocktree {
            extern PyType_Def PY_TYPE_DEF(Lucene90BlockTreeTermsWriter);
            extern PyTypeObject *PY_TYPE(Lucene90BlockTreeTermsWriter);

            class t_Lucene90BlockTreeTermsWriter {
            public:
              PyObject_HEAD
              Lucene90BlockTreeTermsWriter object;
              static PyObject *wrap_Object(const Lucene90BlockTreeTermsWriter&);
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
