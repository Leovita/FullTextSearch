#ifndef org_apache_lucene_codecs_uniformsplit_UniformSplitTermsReader_H
#define org_apache_lucene_codecs_uniformsplit_UniformSplitTermsReader_H

#include "org/apache/lucene/codecs/FieldsProducer.h"

namespace java {
  namespace util {
    class Iterator;
  }
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
        class PostingsReaderBase;
        namespace uniformsplit {
          class BlockDecoder;
        }
      }
      namespace index {
        class SegmentReadState;
        class Terms;
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
              mid_init$_ace06ec179bdf651,
              mid_checkIntegrity_3720c61b0679eb3e,
              mid_close_3720c61b0679eb3e,
              mid_iterator_0db4c76ff7ee995b,
              mid_size_20fbf7565993c3d7,
              mid_terms_734b49c46dc30275,
              mid_seekFieldsMetadata_5d631c4d88317d46,
              mid_readFieldsMetadata_8588c365fe70c953,
              mid_fillFieldMap_ac913bf5286710be,
              mid_createDictionaryBrowserSupplier_266ce4f178956f11,
              mid_readEncodedFieldsMetadata_bea8498d08538a8a,
              mid_readUnencodedFieldsMetadata_1d97bcc5936a28b9,
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
