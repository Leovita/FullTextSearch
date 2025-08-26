#ifndef org_apache_lucene_codecs_simpletext_SimpleTextFieldInfosFormat_H
#define org_apache_lucene_codecs_simpletext_SimpleTextFieldInfosFormat_H

#include "org/apache/lucene/codecs/FieldInfosFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IOContext;
      }
      namespace index {
        class SegmentInfo;
        class VectorEncoding;
        class VectorSimilarityFunction;
        class DocValuesType;
        class DocValuesSkipIndexType;
        class FieldInfos;
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

          class SimpleTextFieldInfosFormat : public ::org::apache::lucene::codecs::FieldInfosFormat {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_distanceFunction_f12622aba416cce6,
              mid_docValuesSkipIndexType_e231ff75c3449a04,
              mid_docValuesType_ab3345a5f86f4edf,
              mid_read_c2ab35f59080fc68,
              mid_vectorEncoding_a337932c1627b52d,
              mid_write_c65ff8c436a36221,
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
