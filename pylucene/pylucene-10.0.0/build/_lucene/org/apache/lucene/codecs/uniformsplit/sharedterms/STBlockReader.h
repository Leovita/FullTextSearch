#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockReader_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockReader_H

#include "org/apache/lucene/codecs/uniformsplit/BlockReader.h"

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
      }
      namespace index {
        class TermsEnum$SeekStatus;
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
          namespace sharedterms {

            class STBlockReader : public ::org::apache::lucene::codecs::uniformsplit::BlockReader {
             public:
              enum {
                mid_init$_475e8a36c870e4ae,
                mid_next_adbedbc1fa61c358,
                mid_seekCeil_3c5e68bf2fc0b5b1,
                mid_seekExact_08ac7a49de309824,
                mid_createBlockLineSerializer_0b068f814020a587,
                mid_readTermState_90e39a1aad9f7074,
                mid_nextTerm_adbedbc1fa61c358,
                mid_isBeyondLastTerm_028f2a3472ff2200,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit STBlockReader(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::BlockReader(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              STBlockReader(const STBlockReader& obj) : ::org::apache::lucene::codecs::uniformsplit::BlockReader(obj) {}

              STBlockReader(const ::org::apache::lucene::codecs::uniformsplit::IndexDictionary$BrowserSupplier &, const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::codecs::PostingsReaderBase &, const ::org::apache::lucene::codecs::uniformsplit::FieldMetadata &, const ::org::apache::lucene::codecs::uniformsplit::BlockDecoder &, const ::org::apache::lucene::index::FieldInfos &);

              ::org::apache::lucene::util::BytesRef next() const;
              ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
              jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
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
            extern PyType_Def PY_TYPE_DEF(STBlockReader);
            extern PyTypeObject *PY_TYPE(STBlockReader);

            class t_STBlockReader {
            public:
              PyObject_HEAD
              STBlockReader object;
              static PyObject *wrap_Object(const STBlockReader&);
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
