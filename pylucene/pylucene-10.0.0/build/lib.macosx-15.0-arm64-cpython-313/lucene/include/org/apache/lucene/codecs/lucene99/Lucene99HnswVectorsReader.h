#ifndef org_apache_lucene_codecs_lucene99_Lucene99HnswVectorsReader_H
#define org_apache_lucene_codecs_lucene99_Lucene99HnswVectorsReader_H

#include "org/apache/lucene/codecs/KnnVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace hnsw {
          class HnswGraphProvider;
          class FlatVectorsReader;
        }
      }
      namespace search {
        class KnnCollector;
      }
      namespace store {
        class DataInput;
      }
      namespace util {
        namespace hnsw {
          class HnswGraph;
        }
        namespace quantization {
          class ScalarQuantizer;
          class QuantizedByteVectorValues;
          class QuantizedVectorsReader;
        }
        class Bits;
      }
      namespace index {
        class ByteVectorValues;
        class VectorSimilarityFunction;
        class VectorEncoding;
        class SegmentReadState;
        class FloatVectorValues;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
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

          class Lucene99HnswVectorsReader : public ::org::apache::lucene::codecs::KnnVectorsReader {
           public:
            enum {
              mid_init$_74291ab88447b481,
              mid_checkIntegrity_3720c61b0679eb3e,
              mid_close_3720c61b0679eb3e,
              mid_getByteVectorValues_b6d55ee35cf0a7cd,
              mid_getFloatVectorValues_d99d2b92faec6895,
              mid_getGraph_f4c199e0f26ff1bf,
              mid_getQuantizationState_ab0992f9e171f8d4,
              mid_getQuantizedVectorValues_20e6d465a58a6183,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_readSimilarityFunction_5608de40e4faaf2b,
              mid_readVectorEncoding_e3011cd1d83f5b79,
              mid_search_e7c7b5d865f31eb3,
              mid_search_210bbfb50a2f4ef9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene99HnswVectorsReader(jobject obj) : ::org::apache::lucene::codecs::KnnVectorsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene99HnswVectorsReader(const Lucene99HnswVectorsReader& obj) : ::org::apache::lucene::codecs::KnnVectorsReader(obj) {}

            static ::java::util::List *SIMILARITY_FUNCTIONS;

            Lucene99HnswVectorsReader(const ::org::apache::lucene::index::SegmentReadState &, const ::org::apache::lucene::codecs::hnsw::FlatVectorsReader &);

            void checkIntegrity() const;
            void close() const;
            ::org::apache::lucene::index::ByteVectorValues getByteVectorValues(const ::java::lang::String &) const;
            ::org::apache::lucene::index::FloatVectorValues getFloatVectorValues(const ::java::lang::String &) const;
            ::org::apache::lucene::util::hnsw::HnswGraph getGraph(const ::java::lang::String &) const;
            ::org::apache::lucene::util::quantization::ScalarQuantizer getQuantizationState(const ::java::lang::String &) const;
            ::org::apache::lucene::util::quantization::QuantizedByteVectorValues getQuantizedVectorValues(const ::java::lang::String &) const;
            jlong ramBytesUsed() const;
            static ::org::apache::lucene::index::VectorSimilarityFunction readSimilarityFunction(const ::org::apache::lucene::store::DataInput &);
            static ::org::apache::lucene::index::VectorEncoding readVectorEncoding(const ::org::apache::lucene::store::DataInput &);
            void search(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::Bits &) const;
            void search(const ::java::lang::String &, const JArray< jfloat > &, const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::Bits &) const;
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
          extern PyType_Def PY_TYPE_DEF(Lucene99HnswVectorsReader);
          extern PyTypeObject *PY_TYPE(Lucene99HnswVectorsReader);

          class t_Lucene99HnswVectorsReader {
          public:
            PyObject_HEAD
            Lucene99HnswVectorsReader object;
            static PyObject *wrap_Object(const Lucene99HnswVectorsReader&);
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
