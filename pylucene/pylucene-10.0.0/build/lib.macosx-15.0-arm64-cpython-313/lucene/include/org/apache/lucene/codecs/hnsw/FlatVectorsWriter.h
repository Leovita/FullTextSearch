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
      namespace util {
        namespace hnsw {
          class CloseableRandomVectorScorerSupplier;
        }
      }
      namespace codecs {
        namespace hnsw {
          class FlatFieldVectorsWriter;
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
    class Object;
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
              mid_addField_44964e60d390bc8a,
              mid_getFlatVectorScorer_7e681abd40bf9d07,
              mid_mergeOneFieldToIndex_217133d77eed44a7,
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
