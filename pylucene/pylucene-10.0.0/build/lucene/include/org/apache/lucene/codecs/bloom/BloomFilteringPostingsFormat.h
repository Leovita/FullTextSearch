#ifndef org_apache_lucene_codecs_bloom_BloomFilteringPostingsFormat_H
#define org_apache_lucene_codecs_bloom_BloomFilteringPostingsFormat_H

#include "org/apache/lucene/codecs/PostingsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace bloom {
          class BloomFilterFactory;
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
namespace java {
  namespace lang {
    class Class;
    class String;
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
        namespace bloom {

          class BloomFilteringPostingsFormat : public ::org::apache::lucene::codecs::PostingsFormat {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_2ce841a435d03ecf,
              mid_init$_7ee275360f4a2c58,
              mid_fieldsConsumer_53e79f306f41e536,
              mid_fieldsProducer_5a3bb464060de23c,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BloomFilteringPostingsFormat(jobject obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BloomFilteringPostingsFormat(const BloomFilteringPostingsFormat& obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {}

            static ::java::lang::String *BLOOM_CODEC_NAME;
            static jint VERSION_CURRENT;
            static jint VERSION_START;

            BloomFilteringPostingsFormat();
            BloomFilteringPostingsFormat(const ::org::apache::lucene::codecs::PostingsFormat &);
            BloomFilteringPostingsFormat(const ::org::apache::lucene::codecs::PostingsFormat &, const ::org::apache::lucene::codecs::bloom::BloomFilterFactory &);

            ::org::apache::lucene::codecs::FieldsConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::FieldsProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
            ::java::lang::String toString() const;
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
        namespace bloom {
          extern PyType_Def PY_TYPE_DEF(BloomFilteringPostingsFormat);
          extern PyTypeObject *PY_TYPE(BloomFilteringPostingsFormat);

          class t_BloomFilteringPostingsFormat {
          public:
            PyObject_HEAD
            BloomFilteringPostingsFormat object;
            static PyObject *wrap_Object(const BloomFilteringPostingsFormat&);
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
