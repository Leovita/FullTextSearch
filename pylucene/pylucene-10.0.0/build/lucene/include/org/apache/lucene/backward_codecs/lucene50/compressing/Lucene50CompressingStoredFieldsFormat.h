#ifndef org_apache_lucene_backward_codecs_lucene50_compressing_Lucene50CompressingStoredFieldsFormat_H
#define org_apache_lucene_backward_codecs_lucene50_compressing_Lucene50CompressingStoredFieldsFormat_H

#include "org/apache/lucene/codecs/StoredFieldsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class StoredFieldsWriter;
        class StoredFieldsReader;
      }
      namespace backward_codecs {
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
      namespace backward_codecs {
        namespace lucene50 {
          namespace compressing {

            class Lucene50CompressingStoredFieldsFormat : public ::org::apache::lucene::codecs::StoredFieldsFormat {
             public:
              enum {
                mid_init$_3bf408b345e7fc21,
                mid_init$_09d8d4307a2e9de9,
                mid_fieldsReader_51c50b6cd4fa2dfc,
                mid_fieldsWriter_754155daaa4b78ed,
                mid_toString_09a7afff1868fc5e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Lucene50CompressingStoredFieldsFormat(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsFormat(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Lucene50CompressingStoredFieldsFormat(const Lucene50CompressingStoredFieldsFormat& obj) : ::org::apache::lucene::codecs::StoredFieldsFormat(obj) {}

              Lucene50CompressingStoredFieldsFormat(const ::java::lang::String &, const ::org::apache::lucene::backward_codecs::compressing::CompressionMode &, jint, jint, jint);
              Lucene50CompressingStoredFieldsFormat(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::backward_codecs::compressing::CompressionMode &, jint, jint, jint);

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
      namespace backward_codecs {
        namespace lucene50 {
          namespace compressing {
            extern PyType_Def PY_TYPE_DEF(Lucene50CompressingStoredFieldsFormat);
            extern PyTypeObject *PY_TYPE(Lucene50CompressingStoredFieldsFormat);

            class t_Lucene50CompressingStoredFieldsFormat {
            public:
              PyObject_HEAD
              Lucene50CompressingStoredFieldsFormat object;
              static PyObject *wrap_Object(const Lucene50CompressingStoredFieldsFormat&);
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
