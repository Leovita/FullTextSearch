#ifndef org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingStoredFieldsWriter_H
#define org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingStoredFieldsWriter_H

#include "org/apache/lucene/codecs/StoredFieldsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class FieldInfo;
      }
      namespace store {
        class DataInput;
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
    class String;
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
        namespace lucene90 {
          namespace compressing {

            class Lucene90CompressingStoredFieldsWriter : public ::org::apache::lucene::codecs::StoredFieldsWriter {
             public:
              enum {
                mid_close_e7bdbe105ce1bafb,
                mid_finish_8226bd0b0fc13dba,
                mid_finishDocument_e7bdbe105ce1bafb,
                mid_merge_0730403f334ab9cc,
                mid_ramBytesUsed_0f176418e3e16541,
                mid_startDocument_e7bdbe105ce1bafb,
                mid_writeField_23bd4f2f5dbee707,
                mid_writeField_f6503adebebfa576,
                mid_writeField_a4548d4d49fe5baf,
                mid_writeField_2e0b4786b01c00c5,
                mid_writeField_7da17ba798519794,
                mid_writeField_4573144ea666abda,
                mid_writeField_9153e2511ce70f07,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Lucene90CompressingStoredFieldsWriter(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Lucene90CompressingStoredFieldsWriter(const Lucene90CompressingStoredFieldsWriter& obj) : ::org::apache::lucene::codecs::StoredFieldsWriter(obj) {}

              static ::java::lang::String *FIELDS_EXTENSION;
              static ::java::lang::String *INDEX_CODEC_NAME;
              static ::java::lang::String *INDEX_EXTENSION;
              static ::java::lang::String *META_EXTENSION;

              void close() const;
              void finish(jint) const;
              void finishDocument() const;
              jint merge(const ::org::apache::lucene::index::MergeState &) const;
              jlong ramBytesUsed() const;
              void startDocument() const;
              void writeField(const ::org::apache::lucene::index::FieldInfo &, const ::java::lang::String &) const;
              void writeField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::util::BytesRef &) const;
              void writeField(const ::org::apache::lucene::index::FieldInfo &, jdouble) const;
              void writeField(const ::org::apache::lucene::index::FieldInfo &, jfloat) const;
              void writeField(const ::org::apache::lucene::index::FieldInfo &, jint) const;
              void writeField(const ::org::apache::lucene::index::FieldInfo &, jlong) const;
              void writeField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::store::DataInput &, jint) const;
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
        namespace lucene90 {
          namespace compressing {
            extern PyType_Def PY_TYPE_DEF(Lucene90CompressingStoredFieldsWriter);
            extern PyTypeObject *PY_TYPE(Lucene90CompressingStoredFieldsWriter);

            class t_Lucene90CompressingStoredFieldsWriter {
            public:
              PyObject_HEAD
              Lucene90CompressingStoredFieldsWriter object;
              static PyObject *wrap_Object(const Lucene90CompressingStoredFieldsWriter&);
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
