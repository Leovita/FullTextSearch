#ifndef org_apache_lucene_codecs_uniformsplit_UniformSplitTermsReader_H
#define org_apache_lucene_codecs_uniformsplit_UniformSplitTermsReader_H

#include "org/apache/lucene/codecs/FieldsProducer.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          class BlockDecoder;
        }
        class PostingsReaderBase;
      }
      namespace index {
        class Terms;
        class SegmentReadState;
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

          class UniformSplitTermsReader : public ::org::apache::lucene::codecs::FieldsProducer {
           public:
            enum {
              mid_init$_4be21c2165b0a85c,
              mid_checkIntegrity_e7bdbe105ce1bafb,
              mid_close_e7bdbe105ce1bafb,
              mid_iterator_c7985fafdcf40e83,
              mid_size_bd89ce15dad49192,
              mid_terms_b30320f056ffba8d,
              mid_seekFieldsMetadata_a302e4ca19bb6bc3,
              mid_readFieldsMetadata_90e09eeab836cefa,
              mid_fillFieldMap_db2609761a52d9ae,
              mid_createDictionaryBrowserSupplier_aa3b5ff1d0b219cc,
              mid_readEncodedFieldsMetadata_6de759bb453fce05,
              mid_readUnencodedFieldsMetadata_e400efe2d206ee67,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UniformSplitTermsReader(jobject obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UniformSplitTermsReader(const UniformSplitTermsReader& obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {}

            UniformSplitTermsReader(const ::org::apache::lucene::codecs::PostingsReaderBase &, const ::org::apache::lucene::index::SegmentReadState &, const ::org::apache::lucene::codecs::uniformsplit::BlockDecoder &, jboolean);

            void checkIntegrity() const;
            void close() const;
            ::java::util::Iterator iterator() const;
            jint size() const;
            ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(UniformSplitTermsReader);
          extern PyTypeObject *PY_TYPE(UniformSplitTermsReader);

          class t_UniformSplitTermsReader {
          public:
            PyObject_HEAD
            UniformSplitTermsReader object;
            static PyObject *wrap_Object(const UniformSplitTermsReader&);
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
