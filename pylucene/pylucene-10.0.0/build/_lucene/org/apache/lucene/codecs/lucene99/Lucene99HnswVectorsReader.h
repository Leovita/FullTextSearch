#ifndef org_apache_lucene_codecs_lucene99_Lucene99HnswVectorsReader_H
#define org_apache_lucene_codecs_lucene99_Lucene99HnswVectorsReader_H

#include "org/apache/lucene/codecs/KnnVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace quantization {
          class QuantizedVectorsReader;
          class ScalarQuantizer;
          class QuantizedByteVectorValues;
        }
        class Bits;
        namespace hnsw {
          class HnswGraph;
        }
      }
      namespace index {
        class ByteVectorValues;
        class SegmentReadState;
        class VectorEncoding;
        class FloatVectorValues;
        class VectorSimilarityFunction;
      }
      namespace store {
        class DataInput;
      }
      namespace search {
        class KnnCollector;
      }
      namespace codecs {
        namespace hnsw {
          class FlatVectorsReader;
          class HnswGraphProvider;
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
  namespace util {
    class List;
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
              mid_init$_791a6e99c54bb435,
              mid_checkIntegrity_e7bdbe105ce1bafb,
              mid_close_e7bdbe105ce1bafb,
              mid_getByteVectorValues_7ab2f26af1d93897,
              mid_getFloatVectorValues_0c0ae22a56670782,
              mid_getGraph_c1c25d370e8eb101,
              mid_getQuantizationState_79cb6c90083c7390,
              mid_getQuantizedVectorValues_a165ba1a19df4b04,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_readSimilarityFunction_da88640f57c1e777,
              mid_readVectorEncoding_527ffeefc8784e47,
              mid_search_41e6931fdbdb5ba0,
              mid_search_61a952903eb61416,
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
