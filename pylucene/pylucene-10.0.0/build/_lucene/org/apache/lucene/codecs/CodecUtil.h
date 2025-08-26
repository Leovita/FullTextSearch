#ifndef org_apache_lucene_codecs_CodecUtil_H
#define org_apache_lucene_codecs_CodecUtil_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Throwable;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class DataInput;
        class IndexInput;
        class ChecksumIndexInput;
        class DataOutput;
      }
    }
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
            mid_checkFooter_c582ecc5ed9cbcc7,
            mid_checkFooter_b675860585e16adb,
            mid_checkHeader_0db0f89db63a2a53,
            mid_checkHeaderNoMagic_0db0f89db63a2a53,
            mid_checkIndexHeader_b21703ebf5a6234b,
            mid_checkIndexHeaderID_a603e66a2fb490b7,
            mid_checkIndexHeaderSuffix_7ad93fd9a83c64bb,
            mid_checksumEntireFile_698cbb5cc171d648,
            mid_footerLength_bd89ce15dad49192,
            mid_headerLength_fa2a6f298bd618ab,
            mid_indexHeaderLength_d543d4acd34a463f,
            mid_readBEInt_d467dbc40d89e4aa,
            mid_readBELong_b962a5b56e0daade,
            mid_readFooter_cfed38404d713c02,
            mid_readIndexHeader_cfed38404d713c02,
            mid_retrieveChecksum_698cbb5cc171d648,
            mid_retrieveChecksum_d2d5c293056b1a35,
            mid_verifyAndCopyIndexHeader_155b885eb82e2ac8,
            mid_writeBEInt_176e48709974b4ec,
            mid_writeBELong_4e66f2b401777d7f,
            mid_writeFooter_9713fe0a5c49ff9f,
            mid_writeHeader_a0dca0744d7b20b0,
            mid_writeIndexHeader_2981c48682677f84,
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
