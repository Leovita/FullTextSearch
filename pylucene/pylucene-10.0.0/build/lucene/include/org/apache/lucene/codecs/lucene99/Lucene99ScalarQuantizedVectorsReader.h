#ifndef org_apache_lucene_codecs_lucene99_Lucene99ScalarQuantizedVectorsReader_H
#define org_apache_lucene_codecs_lucene99_Lucene99ScalarQuantizedVectorsReader_H

#include "org/apache/lucene/codecs/hnsw/FlatVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace quantization {
          class QuantizedVectorsReader;
          class ScalarQuantizer;
          class QuantizedByteVectorValues;
        }
        namespace hnsw {
          class RandomVectorScorer;
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
        namespace lucene99 {

          class Lucene99ScalarQuantizedVectorsReader : public ::org::apache::lucene::codecs::hnsw::FlatVectorsReader {
           public:
            enum {
              mid_init$_9b5967d86e080b1f,
              mid_checkIntegrity_e7bdbe105ce1bafb,
              mid_close_e7bdbe105ce1bafb,
              mid_getByteVectorValues_7ab2f26af1d93897,
              mid_getFloatVectorValues_0c0ae22a56670782,
              mid_getQuantizationState_79cb6c90083c7390,
              mid_getQuantizedVectorValues_a165ba1a19df4b04,
              mid_getRandomVectorScorer_16c4feadfb2390ab,
              mid_getRandomVectorScorer_47e8f8006662be07,
              mid_ramBytesUsed_0f176418e3e16541,
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
