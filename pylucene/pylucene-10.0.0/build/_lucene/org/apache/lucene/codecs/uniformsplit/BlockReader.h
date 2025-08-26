#ifndef org_apache_lucene_codecs_uniformsplit_BlockReader_H
#define org_apache_lucene_codecs_uniformsplit_BlockReader_H

#include "org/apache/lucene/index/BaseTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum$SeekStatus;
        class PostingsEnum;
        class TermState;
        class ImpactsEnum;
      }
      namespace util {
        class Accountable;
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

          class BlockReader : public ::org::apache::lucene::index::BaseTermsEnum {
           public:
            enum {
              mid_docFreq_bd89ce15dad49192,
              mid_impacts_690aa98c917b43c2,
              mid_next_adbedbc1fa61c358,
              mid_ord_0f176418e3e16541,
              mid_postings_1e5de27ebc464616,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_seekCeil_3c5e68bf2fc0b5b1,
              mid_seekExact_08ac7a49de309824,
              mid_seekExact_1d3149fac12f2af3,
              mid_seekExact_68ebcc8117fd12a5,
              mid_term_adbedbc1fa61c358,
              mid_termState_7f3f2ee4b8db95a4,
              mid_totalTermFreq_0f176418e3e16541,
              mid_createBlockLineSerializer_119d0a6549b55a52,
              mid_createBlockHeaderSerializer_079d2def0419b3f5,
              mid_createDeltaBaseTermStateSerializer_7524b2c859b47f7f,
              mid_readTermState_90e39a1aad9f7074,
              mid_nextTerm_adbedbc1fa61c358,
              mid_isCurrentTerm_08ac7a49de309824,
              mid_clearTermState_e7bdbe105ce1bafb,
              mid_getOrCreateDictionaryBrowser_9e34968c5df117e5,
              mid_isBeyondLastTerm_028f2a3472ff2200,
              mid_seekInBlock_6460d192875c5bd7,
              mid_seekInBlock_3c5e68bf2fc0b5b1,
              mid_initializeHeader_0ad076b578ea277f,
              mid_newCorruptIndexException_b08ae8fb09fbf4df,
              mid_compareToMiddleAndJump_59a6eaf88a8be404,
              mid_readLineInBlock_e765b9b526291148,
              mid_initializeBlockReadLazily_e7bdbe105ce1bafb,
              mid_decodeBlockBytesIfNeeded_1e79f110a34c4312,
              mid_readTermStateIfNotRead_90e39a1aad9f7074,
              mid_readHeader_ac322f7914274989,
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
