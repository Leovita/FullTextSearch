#ifndef org_apache_lucene_codecs_simpletext_SimpleTextStoredFieldsWriter_H
#define org_apache_lucene_codecs_simpletext_SimpleTextStoredFieldsWriter_H

#include "org/apache/lucene/codecs/StoredFieldsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class FieldInfo;
      }
      namespace store {
        class IOContext;
        class Directory;
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
        namespace simpletext {

          class SimpleTextStoredFieldsWriter : public ::org::apache::lucene::codecs::StoredFieldsWriter {
           public:
            enum {
              mid_init$_4dba7632ff601768,
              mid_close_3720c61b0679eb3e,
              mid_finish_540b2b23d51b1efd,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_startDocument_3720c61b0679eb3e,
              mid_writeField_5c9f933456c04469,
              mid_writeField_19cee90e3fb5aab3,
              mid_writeField_15da8d9582fee97c,
              mid_writeField_013aff7dc250536b,
              mid_writeField_484c149275e4150c,
              mid_writeField_9d67b99cda581cf2,
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
