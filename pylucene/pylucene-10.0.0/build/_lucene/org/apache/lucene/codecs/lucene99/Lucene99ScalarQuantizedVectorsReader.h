#ifndef org_apache_lucene_codecs_lucene99_Lucene99ScalarQuantizedVectorsReader_H
#define org_apache_lucene_codecs_lucene99_Lucene99ScalarQuantizedVectorsReader_H

#include "org/apache/lucene/codecs/hnsw/FlatVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class RandomVectorScorer;
        }
        namespace quantization {
          class ScalarQuantizer;
          class QuantizedByteVectorValues;
          class QuantizedVectorsReader;
        }
      }
      namespace index {
        class ByteVectorValues;
        class SegmentReadState;
        class FloatVectorValues;
      }
      namespace codecs {
        namespace hnsw {
          class FlatVectorsScorer;
        }
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
        namespace lucene99 {

          class Lucene99ScalarQuantizedVectorsReader : public ::org::apache::lucene::codecs::hnsw::FlatVectorsReader {
           public:
            enum {
              mid_init$_9de058a428896d0a,
              mid_checkIntegrity_3720c61b0679eb3e,
              mid_close_3720c61b0679eb3e,
              mid_getByteVectorValues_b6d55ee35cf0a7cd,
              mid_getFloatVectorValues_d99d2b92faec6895,
              mid_getQuantizationState_ab0992f9e171f8d4,
              mid_getQuantizedVectorValues_20e6d465a58a6183,
              mid_getRandomVectorScorer_898e8e709f33df67,
              mid_getRandomVectorScorer_168f17ed76192a8a,
              mid_ramBytesUsed_16939d9d0a9a9721,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene99ScalarQuantizedVectorsReader(jobject obj) : ::org::apache::lucene::codecs::hnsw::FlatVectorsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene99ScalarQuantizedVectorsReader(const Lucene99ScalarQuantizedVectorsReader& obj) : ::org::apache::lucene::codecs::hnsw::FlatVectorsReader(obj) {}

            Lucene99ScalarQuantizedVectorsReader(const ::org::apache::lucene::index::SegmentReadState &, const ::org::apache::lucene::codecs::hnsw::FlatVectorsReader &, const ::org::apache::lucene::codecs::hnsw::FlatVectorsScorer &);

            void checkIntegrity() const;
            void close() const;
            ::org::apache::lucene::index::ByteVectorValues getByteVectorValues(const ::java::lang::String &) const;
            ::org::apache::lucene::index::FloatVectorValues getFloatVectorValues(const ::java::lang::String &) const;
            ::org::apache::lucene::util::quantization::ScalarQuantizer getQuantizationState(const ::java::lang::String &) const;
            ::org::apache::lucene::util::quantization::QuantizedByteVectorValues getQuantizedVectorValues(const ::java::lang::String &) const;
            ::org::apache::lucene::util::hnsw::RandomVectorScorer getRandomVectorScorer(const ::java::lang::String &, const JArray< jbyte > &) const;
            ::org::apache::lucene::util::hnsw::RandomVectorScorer getRandomVectorScorer(const ::java::lang::String &, const JArray< jfloat > &) const;
            jlong ramBytesUsed() const;
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
          extern PyType_Def PY_TYPE_DEF(Lucene99ScalarQuantizedVectorsReader);
          extern PyTypeObject *PY_TYPE(Lucene99ScalarQuantizedVectorsReader);

          class t_Lucene99ScalarQuantizedVectorsReader {
          public:
            PyObject_HEAD
            Lucene99ScalarQuantizedVectorsReader object;
            static PyObject *wrap_Object(const Lucene99ScalarQuantizedVectorsReader&);
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
