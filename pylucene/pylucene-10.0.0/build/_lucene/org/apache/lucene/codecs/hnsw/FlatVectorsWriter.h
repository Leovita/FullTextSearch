#ifndef org_apache_lucene_codecs_hnsw_FlatVectorsWriter_H
#define org_apache_lucene_codecs_hnsw_FlatVectorsWriter_H

#include "org/apache/lucene/codecs/KnnVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class FieldInfo;
      }
      namespace codecs {
        namespace hnsw {
          class FlatFieldVectorsWriter;
          class FlatVectorsScorer;
        }
      }
      namespace util {
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
        namespace hnsw {

          class FlatVectorsWriter : public ::org::apache::lucene::codecs::KnnVectorsWriter {
           public:
            enum {
              mid_addField_76c4339cdaf520e5,
              mid_getFlatVectorScorer_0a520ed2ec7fc582,
              mid_mergeOneFieldToIndex_5c4f6ff4c6255bd4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FlatVectorsWriter(jobject obj) : ::org::apache::lucene::codecs::KnnVectorsWriter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FlatVectorsWriter(const FlatVectorsWriter& obj) : ::org::apache::lucene::codecs::KnnVectorsWriter(obj) {}

            ::org::apache::lucene::codecs::hnsw::FlatFieldVectorsWriter addField(const ::org::apache::lucene::index::FieldInfo &) const;
            ::org::apache::lucene::codecs::hnsw::FlatVectorsScorer getFlatVectorScorer() const;
            ::org::apache::lucene::util::hnsw::CloseableRandomVectorScorerSupplier mergeOneFieldToIndex(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
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
          extern PyType_Def PY_TYPE_DEF(FlatVectorsWriter);
          extern PyTypeObject *PY_TYPE(FlatVectorsWriter);

          class t_FlatVectorsWriter {
          public:
            PyObject_HEAD
            FlatVectorsWriter object;
            static PyObject *wrap_Object(const FlatVectorsWriter&);
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
