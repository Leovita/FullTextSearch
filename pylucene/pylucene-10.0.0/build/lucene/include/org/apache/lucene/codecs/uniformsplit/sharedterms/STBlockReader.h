#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockReader_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockReader_H

#include "org/apache/lucene/codecs/uniformsplit/BlockReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class TermsEnum$SeekStatus;
        class FieldInfos;
      }
      namespace codecs {
        class PostingsReaderBase;
        namespace uniformsplit {
          class BlockDecoder;
          class IndexDictionary$BrowserSupplier;
          class FieldMetadata;
        }
      }
      namespace store {
        class IndexInput;
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
          namespace sharedterms {

            class STBlockReader : public ::org::apache::lucene::codecs::uniformsplit::BlockReader {
             public:
              enum {
                mid_init$_cef1229cb7779421,
                mid_next_9740fddd1c7df148,
                mid_seekCeil_69261b500ab5d3e8,
                mid_seekExact_f460ee421aade2fd,
                mid_isBeyondLastTerm_b5635b16bb9884e4,
                mid_createBlockLineSerializer_45fe2efb6fcd9fa0,
                mid_readTermState_3bf66c86f1b277c4,
                mid_nextTerm_9740fddd1c7df148,
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
