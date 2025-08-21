#ifndef org_apache_lucene_codecs_hnsw_FlatVectorsFormat_H
#define org_apache_lucene_codecs_hnsw_FlatVectorsFormat_H

#include "org/apache/lucene/codecs/KnnVectorsFormat.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace hnsw {
          class FlatVectorsReader;
          class FlatVectorsWriter;
        }
      }
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace hnsw {

          class FlatVectorsFormat : public ::org::apache::lucene::codecs::KnnVectorsFormat {
           public:
            enum {
              mid_fieldsReader_b357f440421570ce,
              mid_fieldsWriter_2ec0cddb641511c1,
              mid_getMaxDimensions_3f230d713d7fd2b0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FlatVectorsFormat(jobject obj) : ::org::apache::lucene::codecs::KnnVectorsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FlatVectorsFormat(const FlatVectorsFormat& obj) : ::org::apache::lucene::codecs::KnnVectorsFormat(obj) {}

            ::org::apache::lucene::codecs::hnsw::FlatVectorsReader fieldsReader(const ::org::apache::lucene::index::SegmentReadState &) const;
            ::org::apache::lucene::codecs::hnsw::FlatVectorsWriter fieldsWriter(const ::org::apache::lucene::index::SegmentWriteState &) const;
            jint getMaxDimensions(const ::java::lang::String &) const;
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
        namespace hnsw {
          extern PyType_Def PY_TYPE_DEF(FlatVectorsFormat);
          extern PyTypeObject *PY_TYPE(FlatVectorsFormat);

          class t_FlatVectorsFormat {
          public:
            PyObject_HEAD
            FlatVectorsFormat object;
            static PyObject *wrap_Object(const FlatVectorsFormat&);
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
