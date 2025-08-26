#ifndef org_apache_lucene_backward_codecs_lucene50_compressing_Lucene50CompressingStoredFieldsReader_H
#define org_apache_lucene_backward_codecs_lucene50_compressing_Lucene50CompressingStoredFieldsReader_H

#include "org/apache/lucene/codecs/StoredFieldsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IOContext;
      }
      namespace index {
        class SegmentInfo;
        class StoredFieldVisitor;
        class FieldInfos;
      }
      namespace backward_codecs {
        namespace compressing {
          class CompressionMode;
        }
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

            class Lucene50CompressingStoredFieldsReader : public ::org::apache::lucene::codecs::StoredFieldsReader {
             public:
              enum {
                mid_init$_bd2900f0b87f53fa,
                mid_checkIntegrity_e7bdbe105ce1bafb,
                mid_clone_a7e1c9cc255e1e90,
                mid_close_e7bdbe105ce1bafb,
                mid_document_78d5bbf2e2144955,
                mid_getMergeInstance_a7e1c9cc255e1e90,
                mid_toString_e7df854526d67fa3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Lucene50CompressingStoredFieldsReader(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsReader(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Lucene50CompressingStoredFieldsReader(const Lucene50CompressingStoredFieldsReader& obj) : ::org::apache::lucene::codecs::StoredFieldsReader(obj) {}

              static ::java::lang::String *FIELDS_EXTENSION;
              static ::java::lang::String *INDEX_CODEC_NAME;
              static ::java::lang::String *INDEX_EXTENSION;
              static ::java::lang::String *META_EXTENSION;

              Lucene50CompressingStoredFieldsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &, const ::java::lang::String &, const ::org::apache::lucene::backward_codecs::compressing::CompressionMode &);

              void checkIntegrity() const;
              ::org::apache::lucene::codecs::StoredFieldsReader clone() const;
              void close() const;
              void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
              ::org::apache::lucene::codecs::StoredFieldsReader getMergeInstance() const;
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
            extern PyType_Def PY_TYPE_DEF(Lucene50CompressingStoredFieldsReader);
            extern PyTypeObject *PY_TYPE(Lucene50CompressingStoredFieldsReader);

            class t_Lucene50CompressingStoredFieldsReader {
            public:
              PyObject_HEAD
              Lucene50CompressingStoredFieldsReader object;
              static PyObject *wrap_Object(const Lucene50CompressingStoredFieldsReader&);
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
