#ifndef org_apache_lucene_codecs_blockterms_BlockTermsWriter_H
#define org_apache_lucene_codecs_blockterms_BlockTermsWriter_H

#include "org/apache/lucene/codecs/FieldsConsumer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class PostingsWriterBase;
        namespace blockterms {
          class TermsIndexWriterBase;
        }
        class NormsProducer;
      }
      namespace index {
        class SegmentWriteState;
        class Fields;
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
      namespace codecs {
        namespace blockterms {

          class BlockTermsWriter : public ::org::apache::lucene::codecs::FieldsConsumer {
           public:
            enum {
              mid_init$_b199acbd439ff4e6,
              mid_close_e7bdbe105ce1bafb,
              mid_write_77e46eb449cb8d9e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockTermsWriter(jobject obj) : ::org::apache::lucene::codecs::FieldsConsumer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockTermsWriter(const BlockTermsWriter& obj) : ::org::apache::lucene::codecs::FieldsConsumer(obj) {}

            static jint VERSION_CURRENT;
            static jint VERSION_START;

            BlockTermsWriter(const ::org::apache::lucene::codecs::blockterms::TermsIndexWriterBase &, const ::org::apache::lucene::index::SegmentWriteState &, const ::org::apache::lucene::codecs::PostingsWriterBase &);

            void close() const;
            void write(const ::org::apache::lucene::index::Fields &, const ::org::apache::lucene::codecs::NormsProducer &) const;
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
        namespace blockterms {
          extern PyType_Def PY_TYPE_DEF(BlockTermsWriter);
          extern PyTypeObject *PY_TYPE(BlockTermsWriter);

          class t_BlockTermsWriter {
          public:
            PyObject_HEAD
            BlockTermsWriter object;
            static PyObject *wrap_Object(const BlockTermsWriter&);
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
