#ifndef org_apache_lucene_codecs_uniformsplit_BlockReader_H
#define org_apache_lucene_codecs_uniformsplit_BlockReader_H

#include "org/apache/lucene/index/BaseTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class BytesRef;
      }
      namespace index {
        class TermsEnum$SeekStatus;
        class TermState;
        class ImpactsEnum;
        class PostingsEnum;
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

          class BlockReader : public ::org::apache::lucene::index::BaseTermsEnum {
           public:
            enum {
              mid_docFreq_20fbf7565993c3d7,
              mid_impacts_060f17b3b6523f29,
              mid_next_9740fddd1c7df148,
              mid_ord_16939d9d0a9a9721,
              mid_postings_99afe58b6211434f,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_seekCeil_69261b500ab5d3e8,
              mid_seekExact_f460ee421aade2fd,
              mid_seekExact_8b3d46852b435a94,
              mid_seekExact_5c001dd449c905b9,
              mid_term_9740fddd1c7df148,
              mid_termState_0f33111124ab1b09,
              mid_totalTermFreq_16939d9d0a9a9721,
              mid_readTermStateIfNotRead_3bf66c86f1b277c4,
              mid_isBeyondLastTerm_b5635b16bb9884e4,
              mid_createBlockLineSerializer_73ba64f41f1e264b,
              mid_readTermState_3bf66c86f1b277c4,
              mid_isCurrentTerm_f460ee421aade2fd,
              mid_clearTermState_3720c61b0679eb3e,
              mid_getOrCreateDictionaryBrowser_a1250803d9fc677a,
              mid_seekInBlock_acc003e789d54ad3,
              mid_seekInBlock_69261b500ab5d3e8,
              mid_initializeHeader_dbb330f97b1490f4,
              mid_newCorruptIndexException_e35581851f4ed271,
              mid_compareToMiddleAndJump_5cda243a0bd46c4d,
              mid_readLineInBlock_2bfe7cebebb61465,
              mid_initializeBlockReadLazily_3720c61b0679eb3e,
              mid_createBlockHeaderSerializer_6952406d1a100b4b,
              mid_createDeltaBaseTermStateSerializer_f794edf8e4b1e37d,
              mid_decodeBlockBytesIfNeeded_29bb531a30fe8369,
              mid_nextTerm_9740fddd1c7df148,
              mid_readHeader_c93537a0551bcfa2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockReader(jobject obj) : ::org::apache::lucene::index::BaseTermsEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockReader(const BlockReader& obj) : ::org::apache::lucene::index::BaseTermsEnum(obj) {}

            jint docFreq() const;
            ::org::apache::lucene::index::ImpactsEnum impacts(jint) const;
            ::org::apache::lucene::util::BytesRef next() const;
            jlong ord() const;
            ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::PostingsEnum &, jint) const;
            jlong ramBytesUsed() const;
            ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
            jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
            void seekExact(jlong) const;
            void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
            ::org::apache::lucene::util::BytesRef term() const;
            ::org::apache::lucene::index::TermState termState() const;
            jlong totalTermFreq() const;
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
          extern PyType_Def PY_TYPE_DEF(BlockReader);
          extern PyTypeObject *PY_TYPE(BlockReader);

          class t_BlockReader {
          public:
            PyObject_HEAD
            BlockReader object;
            static PyObject *wrap_Object(const BlockReader&);
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
