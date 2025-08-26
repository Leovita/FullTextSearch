#ifndef org_apache_lucene_codecs_lucene90_Lucene90StoredFieldsFormat_H
#define org_apache_lucene_codecs_lucene90_Lucene90StoredFieldsFormat_H

#include "org/apache/lucene/codecs/StoredFieldsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IOContext;
      }
      namespace index {
        class SegmentInfo;
        class FieldInfos;
      }
      namespace codecs {
        namespace compressing {
          class CompressionMode;
        }
        class StoredFieldsWriter;
        namespace lucene90 {
          class Lucene90StoredFieldsFormat$Mode;
        }
        class StoredFieldsReader;
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

          class Lucene90StoredFieldsFormat : public ::org::apache::lucene::codecs::StoredFieldsFormat {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_b5ab42ccb8ab3a02,
              mid_fieldsReader_c9749e0a367e3d44,
              mid_fieldsWriter_48b3d366f1632c9e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene90StoredFieldsFormat(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90StoredFieldsFormat(const Lucene90StoredFieldsFormat& obj) : ::org::apache::lucene::codecs::StoredFieldsFormat(obj) {}

            static ::org::apache::lucene::codecs::compressing::CompressionMode *BEST_COMPRESSION_MODE;
            static ::org::apache::lucene::codecs::compressing::CompressionMode *BEST_SPEED_MODE;
            static ::java::lang::String *MODE_KEY;

            Lucene90StoredFieldsFormat();
            Lucene90StoredFieldsFormat(const ::org::apache::lucene::codecs::lucene90::Lucene90StoredFieldsFormat$Mode &);

            ::org::apache::lucene::codecs::StoredFieldsReader fieldsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &) const;
            ::org::apache::lucene::codecs::StoredFieldsWriter fieldsWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
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
        namespace lucene90 {
          extern PyType_Def PY_TYPE_DEF(Lucene90StoredFieldsFormat);
          extern PyTypeObject *PY_TYPE(Lucene90StoredFieldsFormat);

          class t_Lucene90StoredFieldsFormat {
          public:
            PyObject_HEAD
            Lucene90StoredFieldsFormat object;
            static PyObject *wrap_Object(const Lucene90StoredFieldsFormat&);
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
