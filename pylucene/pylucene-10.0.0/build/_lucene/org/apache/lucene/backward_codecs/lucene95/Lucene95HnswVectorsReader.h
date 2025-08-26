#ifndef org_apache_lucene_backward_codecs_lucene95_Lucene95HnswVectorsReader_H
#define org_apache_lucene_backward_codecs_lucene95_Lucene95HnswVectorsReader_H

#include "org/apache/lucene/codecs/KnnVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
        namespace hnsw {
          class HnswGraph;
        }
      }
      namespace index {
        class ByteVectorValues;
        class FloatVectorValues;
      }
      namespace search {
        class KnnCollector;
      }
      namespace codecs {
        namespace hnsw {
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene95 {

          class Lucene95HnswVectorsReader : public ::org::apache::lucene::codecs::KnnVectorsReader {
           public:
            enum {
              mid_checkIntegrity_e7bdbe105ce1bafb,
              mid_close_e7bdbe105ce1bafb,
              mid_getByteVectorValues_7ab2f26af1d93897,
              mid_getFloatVectorValues_0c0ae22a56670782,
              mid_getGraph_c1c25d370e8eb101,
              mid_search_41e6931fdbdb5ba0,
              mid_search_61a952903eb61416,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene95HnswVectorsReader(jobject obj) : ::org::apache::lucene::codecs::KnnVectorsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene95HnswVectorsReader(const Lucene95HnswVectorsReader& obj) : ::org::apache::lucene::codecs::KnnVectorsReader(obj) {}

            void checkIntegrity() const;
            void close() const;
            ::org::apache::lucene::index::ByteVectorValues getByteVectorValues(const ::java::lang::String &) const;
            ::org::apache::lucene::index::FloatVectorValues getFloatVectorValues(const ::java::lang::String &) const;
            ::org::apache::lucene::util::hnsw::HnswGraph getGraph(const ::java::lang::String &) const;
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
      namespace backward_codecs {
        namespace lucene95 {
          extern PyType_Def PY_TYPE_DEF(Lucene95HnswVectorsReader);
          extern PyTypeObject *PY_TYPE(Lucene95HnswVectorsReader);

          class t_Lucene95HnswVectorsReader {
          public:
            PyObject_HEAD
            Lucene95HnswVectorsReader object;
            static PyObject *wrap_Object(const Lucene95HnswVectorsReader&);
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
