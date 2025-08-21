#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STMergingBlockReader_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STMergingBlockReader_H

#include "org/apache/lucene/codecs/uniformsplit/sharedterms/STBlockReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermState;
        class TermsEnum$SeekStatus;
        class PostingsEnum;
        class FieldInfos;
      }
      namespace util {
        class BytesRef;
      }
      namespace codecs {
        class PostingsReaderBase;
        namespace uniformsplit {
          class BlockDecoder;
          class IndexDictionary$BrowserSupplier;
          class FieldMetadata;
        }
        class BlockTermState;
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
    class String;
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
                mid_init$_cef1229cb7779421,
                mid_next_9740fddd1c7df148,
                mid_postings_465db9b2f7021305,
                mid_readFieldTermStatesMap_79ba0f5a7d05e623,
                mid_seekCeil_69261b500ab5d3e8,
                mid_seekExact_f460ee421aade2fd,
                mid_seekExact_8b3d46852b435a94,
                mid_seekExact_5c001dd449c905b9,
                mid_readTermStateIfNotRead_3bf66c86f1b277c4,
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
