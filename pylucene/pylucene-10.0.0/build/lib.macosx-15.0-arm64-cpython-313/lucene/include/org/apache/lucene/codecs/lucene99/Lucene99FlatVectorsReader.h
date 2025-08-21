#ifndef org_apache_lucene_codecs_lucene99_Lucene99FlatVectorsReader_H
#define org_apache_lucene_codecs_lucene99_Lucene99FlatVectorsReader_H

#include "org/apache/lucene/codecs/hnsw/FlatVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
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

          class Lucene99FlatVectorsReader : public ::org::apache::lucene::codecs::hnsw::FlatVectorsReader {
           public:
            enum {
              mid_init$_1d9892331764a119,
              mid_checkIntegrity_3720c61b0679eb3e,
              mid_close_3720c61b0679eb3e,
              mid_getByteVectorValues_b6d55ee35cf0a7cd,
              mid_getFloatVectorValues_d99d2b92faec6895,
              mid_getRandomVectorScorer_898e8e709f33df67,
              mid_getRandomVectorScorer_168f17ed76192a8a,
              mid_ramBytesUsed_16939d9d0a9a9721,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene99FlatVectorsReader(jobject obj) : ::org::apache::lucene::codecs::hnsw::FlatVectorsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene99FlatVectorsReader(const Lucene99FlatVectorsReader& obj) : ::org::apache::lucene::codecs::hnsw::FlatVectorsReader(obj) {}

            Lucene99FlatVectorsReader(const ::org::apache::lucene::index::SegmentReadState &, const ::org::apache::lucene::codecs::hnsw::FlatVectorsScorer &);

            void checkIntegrity() const;
            void close() const;
            ::org::apache::lucene::index::ByteVectorValues getByteVectorValues(const ::java::lang::String &) const;
            ::org::apache::lucene::index::FloatVectorValues getFloatVectorValues(const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(Lucene99FlatVectorsReader);
          extern PyTypeObject *PY_TYPE(Lucene99FlatVectorsReader);

          class t_Lucene99FlatVectorsReader {
          public:
            PyObject_HEAD
            Lucene99FlatVectorsReader object;
            static PyObject *wrap_Object(const Lucene99FlatVectorsReader&);
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
