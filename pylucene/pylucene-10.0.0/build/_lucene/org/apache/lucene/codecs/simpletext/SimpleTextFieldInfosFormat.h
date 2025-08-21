#ifndef org_apache_lucene_codecs_simpletext_SimpleTextFieldInfosFormat_H
#define org_apache_lucene_codecs_simpletext_SimpleTextFieldInfosFormat_H

#include "org/apache/lucene/codecs/FieldInfosFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class DocValuesSkipIndexType;
        class DocValuesType;
        class VectorSimilarityFunction;
        class VectorEncoding;
        class SegmentInfo;
        class FieldInfos;
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

          class SimpleTextFieldInfosFormat : public ::org::apache::lucene::codecs::FieldInfosFormat {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_distanceFunction_2eec03616ed6cd3d,
              mid_docValuesSkipIndexType_55a30a3f992d8d8b,
              mid_docValuesType_aa9a66b13da43589,
              mid_read_c653153ad3f09a4d,
              mid_vectorEncoding_4e5706df6ceba2c0,
              mid_write_1a554da1e48bfb17,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextFieldInfosFormat(jobject obj) : ::org::apache::lucene::codecs::FieldInfosFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextFieldInfosFormat(const SimpleTextFieldInfosFormat& obj) : ::org::apache::lucene::codecs::FieldInfosFormat(obj) {}

            SimpleTextFieldInfosFormat();

            ::org::apache::lucene::index::VectorSimilarityFunction distanceFunction(const ::java::lang::String &) const;
            ::org::apache::lucene::index::DocValuesSkipIndexType docValuesSkipIndexType(const ::java::lang::String &) const;
            ::org::apache::lucene::index::DocValuesType docValuesType(const ::java::lang::String &) const;
            ::org::apache::lucene::index::FieldInfos read(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
            ::org::apache::lucene::index::VectorEncoding vectorEncoding(const ::java::lang::String &) const;
            void write(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &) const;
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
          extern PyType_Def PY_TYPE_DEF(SimpleTextFieldInfosFormat);
          extern PyTypeObject *PY_TYPE(SimpleTextFieldInfosFormat);

          class t_SimpleTextFieldInfosFormat {
          public:
            PyObject_HEAD
            SimpleTextFieldInfosFormat object;
            static PyObject *wrap_Object(const SimpleTextFieldInfosFormat&);
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
