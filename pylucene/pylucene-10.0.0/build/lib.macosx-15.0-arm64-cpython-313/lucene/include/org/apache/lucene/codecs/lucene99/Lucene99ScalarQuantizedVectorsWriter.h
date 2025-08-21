#ifndef org_apache_lucene_codecs_lucene99_Lucene99ScalarQuantizedVectorsWriter_H
#define org_apache_lucene_codecs_lucene99_Lucene99ScalarQuantizedVectorsWriter_H

#include "org/apache/lucene/codecs/hnsw/FlatVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class FieldInfo;
        class DocsWithFieldSet;
        class Sorter$DocMap;
        class SegmentWriteState;
      }
      namespace util {
        namespace hnsw {
          class CloseableRandomVectorScorerSupplier;
        }
        namespace quantization {
          class ScalarQuantizer;
          class QuantizedByteVectorValues;
        }
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
    }
  }
}
namespace java {
  namespace lang {
    class Float;
    class Class;
    class Object;
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
              mid_init$_1b4caa3cd92e0edf,
              mid_init$_b431ff81a2874127,
              mid_addField_44964e60d390bc8a,
              mid_close_3720c61b0679eb3e,
              mid_finish_3720c61b0679eb3e,
              mid_flush_43b4ee6199cecfbf,
              mid_mergeAndRecalculateQuantiles_987cbb560b4f66f3,
              mid_mergeOneField_12bd7baeb6b4bf04,
              mid_mergeOneFieldToIndex_217133d77eed44a7,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_writeQuantizedVectorData_f8495e13c45b58b8,
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
