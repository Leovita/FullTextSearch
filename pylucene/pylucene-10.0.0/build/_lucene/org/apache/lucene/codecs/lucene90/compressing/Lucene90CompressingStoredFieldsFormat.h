#ifndef org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingStoredFieldsFormat_H
#define org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingStoredFieldsFormat_H

#include "org/apache/lucene/codecs/StoredFieldsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class StoredFieldsWriter;
        class StoredFieldsReader;
        namespace compressing {
          class CompressionMode;
        }
      }
      namespace index {
        class FieldInfos;
        class SegmentInfo;
      }
      namespace store {
        class IOContext;
        class Directory;
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

            class Lucene90CompressingStoredFieldsFormat : public ::org::apache::lucene::codecs::StoredFieldsFormat {
             public:
              enum {
                mid_init$_a57124b3b837a0b4,
                mid_init$_28460f543dcf8bac,
                mid_fieldsReader_51c50b6cd4fa2dfc,
                mid_fieldsWriter_754155daaa4b78ed,
                mid_toString_09a7afff1868fc5e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Lucene90CompressingStoredFieldsFormat(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsFormat(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Lucene90CompressingStoredFieldsFormat(const Lucene90CompressingStoredFieldsFormat& obj) : ::org::apache::lucene::codecs::StoredFieldsFormat(obj) {}

              Lucene90CompressingStoredFieldsFormat(const ::java::lang::String &, const ::org::apache::lucene::codecs::compressing::CompressionMode &, jint, jint, jint);
              Lucene90CompressingStoredFieldsFormat(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::codecs::compressing::CompressionMode &, jint, jint, jint);

              ::org::apache::lucene::codecs::StoredFieldsReader fieldsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &) const;
              ::org::apache::lucene::codecs::StoredFieldsWriter fieldsWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
              ::java::lang::String toString() const;
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
            extern PyType_Def PY_TYPE_DEF(Lucene90CompressingStoredFieldsFormat);
            extern PyTypeObject *PY_TYPE(Lucene90CompressingStoredFieldsFormat);

            class t_Lucene90CompressingStoredFieldsFormat {
            public:
              PyObject_HEAD
              Lucene90CompressingStoredFieldsFormat object;
              static PyObject *wrap_Object(const Lucene90CompressingStoredFieldsFormat&);
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
