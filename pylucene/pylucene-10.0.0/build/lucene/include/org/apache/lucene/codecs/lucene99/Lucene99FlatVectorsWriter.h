#ifndef org_apache_lucene_codecs_lucene99_Lucene99FlatVectorsWriter_H
#define org_apache_lucene_codecs_lucene99_Lucene99FlatVectorsWriter_H

#include "org/apache/lucene/codecs/hnsw/FlatVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class Sorter$DocMap;
        class SegmentWriteState;
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
        namespace lucene99 {

          class Lucene99FlatVectorsWriter : public ::org::apache::lucene::codecs::hnsw::FlatVectorsWriter {
           public:
            enum {
              mid_init$_8d9d99cebb387fb4,
              mid_addField_76c4339cdaf520e5,
              mid_close_e7bdbe105ce1bafb,
              mid_finish_e7bdbe105ce1bafb,
              mid_flush_fc9730fbac8271d5,
              mid_mergeOneField_6efd9d341cba2a34,
              mid_mergeOneFieldToIndex_5c4f6ff4c6255bd4,
              mid_ramBytesUsed_0f176418e3e16541,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene99FlatVectorsWriter(jobject obj) : ::org::apache::lucene::codecs::hnsw::FlatVectorsWriter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene99FlatVectorsWriter(const Lucene99FlatVectorsWriter& obj) : ::org::apache::lucene::codecs::hnsw::FlatVectorsWriter(obj) {}

            Lucene99FlatVectorsWriter(const ::org::apache::lucene::index::SegmentWriteState &, const ::org::apache::lucene::codecs::hnsw::FlatVectorsScorer &);

            ::org::apache::lucene::codecs::hnsw::FlatFieldVectorsWriter addField(const ::org::apache::lucene::index::FieldInfo &) const;
            void close() const;
            void finish() const;
            void flush(jint, const ::org::apache::lucene::index::Sorter$DocMap &) const;
            void mergeOneField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
            ::org::apache::lucene::util::hnsw::CloseableRandomVectorScorerSupplier mergeOneFieldToIndex(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
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
          extern PyType_Def PY_TYPE_DEF(Lucene99FlatVectorsWriter);
          extern PyTypeObject *PY_TYPE(Lucene99FlatVectorsWriter);

          class t_Lucene99FlatVectorsWriter {
          public:
            PyObject_HEAD
            Lucene99FlatVectorsWriter object;
            static PyObject *wrap_Object(const Lucene99FlatVectorsWriter&);
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
