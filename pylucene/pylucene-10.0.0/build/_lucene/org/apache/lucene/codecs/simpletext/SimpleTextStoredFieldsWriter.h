#ifndef org_apache_lucene_codecs_simpletext_SimpleTextStoredFieldsWriter_H
#define org_apache_lucene_codecs_simpletext_SimpleTextStoredFieldsWriter_H

#include "org/apache/lucene/codecs/StoredFieldsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IOContext;
      }
      namespace util {
        class BytesRef;
      }
      namespace index {
        class FieldInfo;
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
        namespace simpletext {

          class SimpleTextStoredFieldsWriter : public ::org::apache::lucene::codecs::StoredFieldsWriter {
           public:
            enum {
              mid_init$_242f0c71b92fd6af,
              mid_close_e7bdbe105ce1bafb,
              mid_finish_8226bd0b0fc13dba,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_startDocument_e7bdbe105ce1bafb,
              mid_writeField_23bd4f2f5dbee707,
              mid_writeField_f6503adebebfa576,
              mid_writeField_a4548d4d49fe5baf,
              mid_writeField_2e0b4786b01c00c5,
              mid_writeField_7da17ba798519794,
              mid_writeField_4573144ea666abda,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextStoredFieldsWriter(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsWriter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextStoredFieldsWriter(const SimpleTextStoredFieldsWriter& obj) : ::org::apache::lucene::codecs::StoredFieldsWriter(obj) {}

            SimpleTextStoredFieldsWriter(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);

            void close() const;
            void finish(jint) const;
            jlong ramBytesUsed() const;
            void startDocument() const;
            void writeField(const ::org::apache::lucene::index::FieldInfo &, const ::java::lang::String &) const;
            void writeField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::util::BytesRef &) const;
            void writeField(const ::org::apache::lucene::index::FieldInfo &, jdouble) const;
            void writeField(const ::org::apache::lucene::index::FieldInfo &, jfloat) const;
            void writeField(const ::org::apache::lucene::index::FieldInfo &, jint) const;
            void writeField(const ::org::apache::lucene::index::FieldInfo &, jlong) const;
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
        namespace simpletext {
          extern PyType_Def PY_TYPE_DEF(SimpleTextStoredFieldsWriter);
          extern PyTypeObject *PY_TYPE(SimpleTextStoredFieldsWriter);

          class t_SimpleTextStoredFieldsWriter {
          public:
            PyObject_HEAD
            SimpleTextStoredFieldsWriter object;
            static PyObject *wrap_Object(const SimpleTextStoredFieldsWriter&);
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
