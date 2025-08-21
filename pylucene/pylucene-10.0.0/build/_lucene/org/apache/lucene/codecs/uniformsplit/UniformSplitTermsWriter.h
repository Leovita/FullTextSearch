#ifndef org_apache_lucene_codecs_uniformsplit_UniformSplitTermsWriter_H
#define org_apache_lucene_codecs_uniformsplit_UniformSplitTermsWriter_H

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
        namespace uniformsplit {
          class BlockEncoder;
        }
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
        namespace uniformsplit {

          class UniformSplitTermsWriter : public ::org::apache::lucene::codecs::FieldsConsumer {
           public:
            enum {
              mid_init$_b18ec5de5dd74ea4,
              mid_init$_bad8033a7e298cfc,
              mid_close_3720c61b0679eb3e,
              mid_write_664e5b1e2ee1912b,
              mid_writeDictionary_d103b6face46e3b6,
              mid_writePostingLine_93bb74f4da47ab54,
              mid_writeFieldsMetadata_98dfbad7eb83b619,
              mid_validateSettings_e13cff512ebda969,
              mid_writeFieldTerms_a9e188766d87c7d6,
              mid_writeUnencodedFieldsMetadata_d3f4c532ef68439d,
              mid_writeEncodedFieldsMetadata_d3f4c532ef68439d,
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
