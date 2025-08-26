#ifndef org_apache_lucene_codecs_uniformsplit_UniformSplitTermsWriter_H
#define org_apache_lucene_codecs_uniformsplit_UniformSplitTermsWriter_H

#include "org/apache/lucene/codecs/FieldsConsumer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class PostingsWriterBase;
        namespace uniformsplit {
          class BlockEncoder;
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
        namespace uniformsplit {

          class UniformSplitTermsWriter : public ::org::apache::lucene::codecs::FieldsConsumer {
           public:
            enum {
              mid_init$_0298775a93f62f34,
              mid_init$_9f43c54b2bdab56b,
              mid_close_e7bdbe105ce1bafb,
              mid_write_77e46eb449cb8d9e,
              mid_validateSettings_645c25455f5b9b1c,
              mid_writeFieldTerms_3e874d648233d713,
              mid_writeFieldsMetadata_6bb5ef8d80b7ab97,
              mid_writeUnencodedFieldsMetadata_5ed1c4def6f2f040,
              mid_writeEncodedFieldsMetadata_5ed1c4def6f2f040,
              mid_writePostingLine_6a82fc62132cab5b,
              mid_writeDictionary_2798b2c9e81a469e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UniformSplitTermsWriter(jobject obj) : ::org::apache::lucene::codecs::FieldsConsumer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UniformSplitTermsWriter(const UniformSplitTermsWriter& obj) : ::org::apache::lucene::codecs::FieldsConsumer(obj) {}

            static jint DEFAULT_DELTA_NUM_LINES;
            static jint DEFAULT_TARGET_NUM_BLOCK_LINES;

            UniformSplitTermsWriter(const ::org::apache::lucene::codecs::PostingsWriterBase &, const ::org::apache::lucene::index::SegmentWriteState &, const ::org::apache::lucene::codecs::uniformsplit::BlockEncoder &);
            UniformSplitTermsWriter(const ::org::apache::lucene::codecs::PostingsWriterBase &, const ::org::apache::lucene::index::SegmentWriteState &, jint, jint, const ::org::apache::lucene::codecs::uniformsplit::BlockEncoder &);

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
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(UniformSplitTermsWriter);
          extern PyTypeObject *PY_TYPE(UniformSplitTermsWriter);

          class t_UniformSplitTermsWriter {
          public:
            PyObject_HEAD
            UniformSplitTermsWriter object;
            static PyObject *wrap_Object(const UniformSplitTermsWriter&);
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
