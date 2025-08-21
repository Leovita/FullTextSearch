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
      namespace util {
        class Accountable;
        class BytesRef;
      }
      namespace store {
        class DataInput;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
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
            mid_close_3720c61b0679eb3e,
            mid_finish_540b2b23d51b1efd,
            mid_finishDocument_3720c61b0679eb3e,
            mid_merge_1b76b11a0c4e302d,
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
