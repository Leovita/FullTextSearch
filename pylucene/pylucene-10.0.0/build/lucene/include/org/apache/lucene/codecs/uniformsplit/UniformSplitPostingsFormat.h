#ifndef org_apache_lucene_codecs_uniformsplit_UniformSplitPostingsFormat_H
#define org_apache_lucene_codecs_uniformsplit_UniformSplitPostingsFormat_H

#include "org/apache/lucene/codecs/PostingsFormat.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          class BlockDecoder;
          class BlockEncoder;
        }
        class FieldsProducer;
        class FieldsConsumer;
      }
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
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

          class UniformSplitPostingsFormat : public ::org::apache::lucene::codecs::PostingsFormat {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_038917878eb4b914,
              mid_fieldsConsumer_19c1d7ed57faee5d,
              mid_fieldsProducer_1c13fe60e408387e,
              mid_createUniformSplitTermsWriter_259ea1ff4c68429b,
              mid_createUniformSplitTermsReader_c6e15e22b9542206,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UniformSplitPostingsFormat(jobject obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UniformSplitPostingsFormat(const UniformSplitPostingsFormat& obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {}

            static ::java::lang::String *NAME;
            static ::java::lang::String *TERMS_BLOCKS_EXTENSION;
            static ::java::lang::String *TERMS_DICTIONARY_EXTENSION;
            static jint VERSION_CURRENT;
            static jint VERSION_ENCODABLE_FIELDS_METADATA;
            static jint VERSION_START;

            UniformSplitPostingsFormat();
            UniformSplitPostingsFormat(jint, jint, const ::org::apache::lucene::codecs::uniformsplit::BlockEncoder &, const ::org::apache::lucene::codecs::uniformsplit::BlockDecoder &, jboolean);

            ::org::apache::lucene::codecs::FieldsConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::FieldsProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
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
          extern PyType_Def PY_TYPE_DEF(UniformSplitPostingsFormat);
          extern PyTypeObject *PY_TYPE(UniformSplitPostingsFormat);

          class t_UniformSplitPostingsFormat {
          public:
            PyObject_HEAD
            UniformSplitPostingsFormat object;
            static PyObject *wrap_Object(const UniformSplitPostingsFormat&);
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
