#ifndef org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingStoredFieldsReader_H
#define org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingStoredFieldsReader_H

#include "org/apache/lucene/codecs/StoredFieldsReader.h"

namespace java {
  namespace lang {
    class Class;
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
        class IOContext;
        class Directory;
      }
      namespace codecs {
        namespace compressing {
          class CompressionMode;
        }
      }
      namespace index {
        class StoredFieldVisitor;
        class SegmentInfo;
        class FieldInfos;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {
          namespace compressing {

            class Lucene90CompressingStoredFieldsReader : public ::org::apache::lucene::codecs::StoredFieldsReader {
             public:
              enum {
                mid_init$_91ac17f9b9a8045f,
                mid_checkIntegrity_3720c61b0679eb3e,
                mid_clone_4e066a6f20734e17,
                mid_close_3720c61b0679eb3e,
                mid_document_94ed5009dd10cb1f,
                mid_getMergeInstance_4e066a6f20734e17,
                mid_prefetch_540b2b23d51b1efd,
                mid_toString_09a7afff1868fc5e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Lucene90CompressingStoredFieldsReader(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsReader(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Lucene90CompressingStoredFieldsReader(const Lucene90CompressingStoredFieldsReader& obj) : ::org::apache::lucene::codecs::StoredFieldsReader(obj) {}

              Lucene90CompressingStoredFieldsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &, const ::java::lang::String &, const ::org::apache::lucene::codecs::compressing::CompressionMode &);

              void checkIntegrity() const;
              ::org::apache::lucene::codecs::StoredFieldsReader clone() const;
              void close() const;
              void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
              ::org::apache::lucene::codecs::StoredFieldsReader getMergeInstance() const;
              void prefetch(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(Lucene90CompressingStoredFieldsReader);
            extern PyTypeObject *PY_TYPE(Lucene90CompressingStoredFieldsReader);

            class t_Lucene90CompressingStoredFieldsReader {
            public:
              PyObject_HEAD
              Lucene90CompressingStoredFieldsReader object;
              static PyObject *wrap_Object(const Lucene90CompressingStoredFieldsReader&);
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
