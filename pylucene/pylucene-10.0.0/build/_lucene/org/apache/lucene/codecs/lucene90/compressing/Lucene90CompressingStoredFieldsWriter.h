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
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
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
                mid_close_3720c61b0679eb3e,
                mid_finish_540b2b23d51b1efd,
                mid_finishDocument_3720c61b0679eb3e,
                mid_merge_1b76b11a0c4e302d,
                mid_ramBytesUsed_16939d9d0a9a9721,
                mid_startDocument_3720c61b0679eb3e,
                mid_writeField_5c9f933456c04469,
                mid_writeField_19cee90e3fb5aab3,
                mid_writeField_15da8d9582fee97c,
                mid_writeField_013aff7dc250536b,
                mid_writeField_484c149275e4150c,
                mid_writeField_9d67b99cda581cf2,
                mid_writeField_92fc605968dd3891,
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
