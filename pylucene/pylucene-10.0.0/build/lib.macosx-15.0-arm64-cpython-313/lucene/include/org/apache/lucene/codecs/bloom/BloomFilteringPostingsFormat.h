#ifndef org_apache_lucene_codecs_bloom_BloomFilteringPostingsFormat_H
#define org_apache_lucene_codecs_bloom_BloomFilteringPostingsFormat_H

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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace bloom {

          class BloomFilteringPostingsFormat : public ::org::apache::lucene::codecs::PostingsFormat {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_1cafb3e632087354,
              mid_init$_19ac1bb6335a14a5,
              mid_fieldsConsumer_19c1d7ed57faee5d,
              mid_fieldsProducer_1c13fe60e408387e,
              mid_toString_09a7afff1868fc5e,
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
