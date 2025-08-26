#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STMergingBlockReader_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STMergingBlockReader_H

#include "org/apache/lucene/codecs/uniformsplit/sharedterms/STBlockReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          class IndexDictionary$BrowserSupplier;
          class BlockDecoder;
          class FieldMetadata;
        }
        class PostingsReaderBase;
        class BlockTermState;
      }
      namespace index {
        class TermsEnum$SeekStatus;
        class PostingsEnum;
        class TermState;
        class FieldInfos;
      }
      namespace store {
        class IndexInput;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {

            class STMergingBlockReader : public ::org::apache::lucene::codecs::uniformsplit::sharedterms::STBlockReader {
             public:
              enum {
                mid_init$_475e8a36c870e4ae,
                mid_next_adbedbc1fa61c358,
                mid_postings_6a3ae00da4a36d04,
                mid_readFieldTermStatesMap_6a7e23584beb7c0f,
                mid_seekCeil_3c5e68bf2fc0b5b1,
                mid_seekExact_08ac7a49de309824,
                mid_seekExact_1d3149fac12f2af3,
                mid_seekExact_68ebcc8117fd12a5,
                mid_readTermStateIfNotRead_90e39a1aad9f7074,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit STMergingBlockReader(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::sharedterms::STBlockReader(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              STMergingBlockReader(const STMergingBlockReader& obj) : ::org::apache::lucene::codecs::uniformsplit::sharedterms::STBlockReader(obj) {}

              STMergingBlockReader(const ::org::apache::lucene::codecs::uniformsplit::IndexDictionary$BrowserSupplier &, const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::codecs::PostingsReaderBase &, const ::org::apache::lucene::codecs::uniformsplit::FieldMetadata &, const ::org::apache::lucene::codecs::uniformsplit::BlockDecoder &, const ::org::apache::lucene::index::FieldInfos &);

              ::org::apache::lucene::util::BytesRef next() const;
              ::org::apache::lucene::index::PostingsEnum postings(const ::java::lang::String &, const ::org::apache::lucene::codecs::BlockTermState &, const ::org::apache::lucene::index::PostingsEnum &, jint) const;
              void readFieldTermStatesMap(const ::java::util::Map &) const;
              ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
              jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
              void seekExact(jlong) const;
              void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
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
        namespace uniformsplit {
          namespace sharedterms {
            extern PyType_Def PY_TYPE_DEF(STMergingBlockReader);
            extern PyTypeObject *PY_TYPE(STMergingBlockReader);

            class t_STMergingBlockReader {
            public:
              PyObject_HEAD
              STMergingBlockReader object;
              static PyObject *wrap_Object(const STMergingBlockReader&);
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
