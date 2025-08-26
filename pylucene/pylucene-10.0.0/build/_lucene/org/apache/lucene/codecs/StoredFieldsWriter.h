#ifndef org_apache_lucene_codecs_StoredFieldsWriter_H
#define org_apache_lucene_codecs_StoredFieldsWriter_H

#include "java/lang/Object.h"

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
        class Accountable;
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace io {
    class Closeable;
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

        class StoredFieldsWriter : public ::java::lang::Object {
         public:
          enum {
            mid_close_e7bdbe105ce1bafb,
            mid_finish_8226bd0b0fc13dba,
            mid_finishDocument_e7bdbe105ce1bafb,
            mid_merge_0730403f334ab9cc,
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

          explicit StoredFieldsWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StoredFieldsWriter(const StoredFieldsWriter& obj) : ::java::lang::Object(obj) {}

          void close() const;
          void finish(jint) const;
          void finishDocument() const;
          jint merge(const ::org::apache::lucene::index::MergeState &) const;
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

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(StoredFieldsWriter);
        extern PyTypeObject *PY_TYPE(StoredFieldsWriter);

        class t_StoredFieldsWriter {
        public:
          PyObject_HEAD
          StoredFieldsWriter object;
          static PyObject *wrap_Object(const StoredFieldsWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
