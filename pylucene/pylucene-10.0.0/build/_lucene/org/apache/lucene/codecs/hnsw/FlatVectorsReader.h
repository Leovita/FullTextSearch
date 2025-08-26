#ifndef org_apache_lucene_codecs_hnsw_FlatVectorsReader_H
#define org_apache_lucene_codecs_hnsw_FlatVectorsReader_H

#include "org/apache/lucene/codecs/KnnVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
        class Accountable;
        namespace hnsw {
          class RandomVectorScorer;
        }
      }
      namespace search {
        class KnnCollector;
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
        namespace hnsw {

          class FlatVectorsReader : public ::org::apache::lucene::codecs::KnnVectorsReader {
           public:
            enum {
              mid_getFlatVectorScorer_0a520ed2ec7fc582,
              mid_getRandomVectorScorer_16c4feadfb2390ab,
              mid_getRandomVectorScorer_47e8f8006662be07,
              mid_search_41e6931fdbdb5ba0,
              mid_search_61a952903eb61416,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FlatVectorsReader(jobject obj) : ::org::apache::lucene::codecs::KnnVectorsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FlatVectorsReader(const FlatVectorsReader& obj) : ::org::apache::lucene::codecs::KnnVectorsReader(obj) {}

            ::org::apache::lucene::codecs::hnsw::FlatVectorsScorer getFlatVectorScorer() const;
            ::org::apache::lucene::util::hnsw::RandomVectorScorer getRandomVectorScorer(const ::java::lang::String &, const JArray< jbyte > &) const;
            ::org::apache::lucene::util::hnsw::RandomVectorScorer getRandomVectorScorer(const ::java::lang::String &, const JArray< jfloat > &) const;
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
        namespace hnsw {
          extern PyType_Def PY_TYPE_DEF(FlatVectorsReader);
          extern PyTypeObject *PY_TYPE(FlatVectorsReader);

          class t_FlatVectorsReader {
          public:
            PyObject_HEAD
            FlatVectorsReader object;
            static PyObject *wrap_Object(const FlatVectorsReader&);
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
