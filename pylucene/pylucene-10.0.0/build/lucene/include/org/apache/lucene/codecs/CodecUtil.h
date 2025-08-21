#ifndef org_apache_lucene_codecs_CodecUtil_H
#define org_apache_lucene_codecs_CodecUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class IndexOutput;
        class IndexInput;
        class DataOutput;
        class ChecksumIndexInput;
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
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class CodecUtil : public ::java::lang::Object {
         public:
          enum {
            mid_checkFooter_ce278c5b250e3f79,
            mid_checkFooter_e42b06ef5e97d3b8,
            mid_checkHeader_4b5e24300bc1b01b,
            mid_checkHeaderNoMagic_4b5e24300bc1b01b,
            mid_checkIndexHeader_3d0f29b078127e96,
            mid_checkIndexHeaderID_bc7051ba6ff56b6b,
            mid_checkIndexHeaderSuffix_603cbc6afe04c331,
            mid_checksumEntireFile_6886de856ac1e531,
            mid_footerLength_20fbf7565993c3d7,
            mid_headerLength_3f230d713d7fd2b0,
            mid_indexHeaderLength_3eac829a4fafb93c,
            mid_readBEInt_aa555dd69434a422,
            mid_readBELong_9ed0f9e11aaa3dba,
            mid_readFooter_839c027f316aace1,
            mid_readIndexHeader_839c027f316aace1,
            mid_retrieveChecksum_6886de856ac1e531,
            mid_retrieveChecksum_2035c4857398eea1,
            mid_verifyAndCopyIndexHeader_ff524edaa87bced6,
            mid_writeBEInt_26deaf282101d9e7,
            mid_writeBELong_2eb8050a898a81cb,
            mid_writeFooter_c39b7a857991d9b7,
            mid_writeHeader_dfa84c7f40b38fcd,
            mid_writeIndexHeader_0bb33e88eed712a3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CodecUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CodecUtil(const CodecUtil& obj) : ::java::lang::Object(obj) {}

          static jint CODEC_MAGIC;
          static jint FOOTER_MAGIC;

          static jlong checkFooter(const ::org::apache::lucene::store::ChecksumIndexInput &);
          static void checkFooter(const ::org::apache::lucene::store::ChecksumIndexInput &, const ::java::lang::Throwable &);
          static jint checkHeader(const ::org::apache::lucene::store::DataInput &, const ::java::lang::String &, jint, jint);
          static jint checkHeaderNoMagic(const ::org::apache::lucene::store::DataInput &, const ::java::lang::String &, jint, jint);
          static jint checkIndexHeader(const ::org::apache::lucene::store::DataInput &, const ::java::lang::String &, jint, jint, const JArray< jbyte > &, const ::java::lang::String &);
          static JArray< jbyte > checkIndexHeaderID(const ::org::apache::lucene::store::DataInput &, const JArray< jbyte > &);
          static ::java::lang::String checkIndexHeaderSuffix(const ::org::apache::lucene::store::DataInput &, const ::java::lang::String &);
          static jlong checksumEntireFile(const ::org::apache::lucene::store::IndexInput &);
          static jint footerLength();
          static jint headerLength(const ::java::lang::String &);
          static jint indexHeaderLength(const ::java::lang::String &, const ::java::lang::String &);
          static jint readBEInt(const ::org::apache::lucene::store::DataInput &);
          static jlong readBELong(const ::org::apache::lucene::store::DataInput &);
          static JArray< jbyte > readFooter(const ::org::apache::lucene::store::IndexInput &);
          static JArray< jbyte > readIndexHeader(const ::org::apache::lucene::store::IndexInput &);
          static jlong retrieveChecksum(const ::org::apache::lucene::store::IndexInput &);
          static jlong retrieveChecksum(const ::org::apache::lucene::store::IndexInput &, jlong);
          static void verifyAndCopyIndexHeader(const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::store::DataOutput &, const JArray< jbyte > &);
          static void writeBEInt(const ::org::apache::lucene::store::DataOutput &, jint);
          static void writeBELong(const ::org::apache::lucene::store::DataOutput &, jlong);
          static void writeFooter(const ::org::apache::lucene::store::IndexOutput &);
          static void writeHeader(const ::org::apache::lucene::store::DataOutput &, const ::java::lang::String &, jint);
          static void writeIndexHeader(const ::org::apache::lucene::store::DataOutput &, const ::java::lang::String &, jint, const JArray< jbyte > &, const ::java::lang::String &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(CodecUtil);
        extern PyTypeObject *PY_TYPE(CodecUtil);

        class t_CodecUtil {
        public:
          PyObject_HEAD
          CodecUtil object;
          static PyObject *wrap_Object(const CodecUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
