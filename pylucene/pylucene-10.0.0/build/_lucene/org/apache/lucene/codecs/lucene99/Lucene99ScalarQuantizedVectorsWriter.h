#ifndef org_apache_lucene_codecs_lucene99_Lucene99ScalarQuantizedVectorsWriter_H
#define org_apache_lucene_codecs_lucene99_Lucene99ScalarQuantizedVectorsWriter_H

#include "org/apache/lucene/codecs/hnsw/FlatVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class Sorter$DocMap;
        class DocsWithFieldSet;
        class SegmentWriteState;
        class FieldInfo;
      }
      namespace codecs {
        namespace hnsw {
          class FlatFieldVectorsWriter;
          class FlatVectorsScorer;
        }
      }
      namespace store {
        class IndexOutput;
      }
      namespace util {
        namespace quantization {
          class ScalarQuantizer;
          class QuantizedByteVectorValues;
        }
        namespace hnsw {
          class CloseableRandomVectorScorerSupplier;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Float;
    class Class;
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
        namespace lucene99 {

          class Lucene99ScalarQuantizedVectorsWriter : public ::org::apache::lucene::codecs::hnsw::FlatVectorsWriter {
           public:
            enum {
              mid_init$_e1884bc7f0a58318,
              mid_init$_1e447e3e05d371ae,
              mid_addField_76c4339cdaf520e5,
              mid_close_e7bdbe105ce1bafb,
              mid_finish_e7bdbe105ce1bafb,
              mid_flush_fc9730fbac8271d5,
              mid_mergeAndRecalculateQuantiles_a69a2b8a34f38d2f,
              mid_mergeOneField_6efd9d341cba2a34,
              mid_mergeOneFieldToIndex_5c4f6ff4c6255bd4,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_writeQuantizedVectorData_663c1b8565b7fe23,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene99ScalarQuantizedVectorsWriter(jobject obj) : ::org::apache::lucene::codecs::hnsw::FlatVectorsWriter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene99ScalarQuantizedVectorsWriter(const Lucene99ScalarQuantizedVectorsWriter& obj) : ::org::apache::lucene::codecs::hnsw::FlatVectorsWriter(obj) {}

            Lucene99ScalarQuantizedVectorsWriter(const ::org::apache::lucene::index::SegmentWriteState &, const ::java::lang::Float &, const ::org::apache::lucene::codecs::hnsw::FlatVectorsWriter &, const ::org::apache::lucene::codecs::hnsw::FlatVectorsScorer &);
            Lucene99ScalarQuantizedVectorsWriter(const ::org::apache::lucene::index::SegmentWriteState &, const ::java::lang::Float &, jbyte, jboolean, const ::org::apache::lucene::codecs::hnsw::FlatVectorsWriter &, const ::org::apache::lucene::codecs::hnsw::FlatVectorsScorer &);

            ::org::apache::lucene::codecs::hnsw::FlatFieldVectorsWriter addField(const ::org::apache::lucene::index::FieldInfo &) const;
            void close() const;
            void finish() const;
            void flush(jint, const ::org::apache::lucene::index::Sorter$DocMap &) const;
            static ::org::apache::lucene::util::quantization::ScalarQuantizer mergeAndRecalculateQuantiles(const ::org::apache::lucene::index::MergeState &, const ::org::apache::lucene::index::FieldInfo &, const ::java::lang::Float &, jbyte);
            void mergeOneField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
            ::org::apache::lucene::util::hnsw::CloseableRandomVectorScorerSupplier mergeOneFieldToIndex(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
            jlong ramBytesUsed() const;
            static ::org::apache::lucene::index::DocsWithFieldSet writeQuantizedVectorData(const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::util::quantization::QuantizedByteVectorValues &, jbyte, jboolean);
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
        namespace lucene99 {
          extern PyType_Def PY_TYPE_DEF(Lucene99ScalarQuantizedVectorsWriter);
          extern PyTypeObject *PY_TYPE(Lucene99ScalarQuantizedVectorsWriter);

          class t_Lucene99ScalarQuantizedVectorsWriter {
          public:
            PyObject_HEAD
            Lucene99ScalarQuantizedVectorsWriter object;
            static PyObject *wrap_Object(const Lucene99ScalarQuantizedVectorsWriter&);
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
