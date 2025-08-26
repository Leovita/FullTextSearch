#ifndef org_apache_lucene_codecs_lucene99_Lucene99HnswVectorsWriter_H
#define org_apache_lucene_codecs_lucene99_Lucene99HnswVectorsWriter_H

#include "org/apache/lucene/codecs/KnnVectorsWriter.h"

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
          class FlatVectorsWriter;
        }
        class KnnFieldVectorsWriter;
      }
      namespace search {
        class TaskExecutor;
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

          class Lucene99HnswVectorsWriter : public ::org::apache::lucene::codecs::KnnVectorsWriter {
           public:
            enum {
              mid_init$_4ae36a7a5c71ebd1,
              mid_addField_745312302c5f11e8,
              mid_close_e7bdbe105ce1bafb,
              mid_finish_e7bdbe105ce1bafb,
              mid_flush_fc9730fbac8271d5,
              mid_mergeOneField_6efd9d341cba2a34,
              mid_ramBytesUsed_0f176418e3e16541,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene99HnswVectorsWriter(jobject obj) : ::org::apache::lucene::codecs::KnnVectorsWriter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene99HnswVectorsWriter(const Lucene99HnswVectorsWriter& obj) : ::org::apache::lucene::codecs::KnnVectorsWriter(obj) {}

            Lucene99HnswVectorsWriter(const ::org::apache::lucene::index::SegmentWriteState &, jint, jint, const ::org::apache::lucene::codecs::hnsw::FlatVectorsWriter &, jint, const ::org::apache::lucene::search::TaskExecutor &);

            ::org::apache::lucene::codecs::KnnFieldVectorsWriter addField(const ::org::apache::lucene::index::FieldInfo &) const;
            void close() const;
            void finish() const;
            void flush(jint, const ::org::apache::lucene::index::Sorter$DocMap &) const;
            void mergeOneField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
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
          extern PyType_Def PY_TYPE_DEF(Lucene99HnswVectorsWriter);
          extern PyTypeObject *PY_TYPE(Lucene99HnswVectorsWriter);

          class t_Lucene99HnswVectorsWriter {
          public:
            PyObject_HEAD
            Lucene99HnswVectorsWriter object;
            static PyObject *wrap_Object(const Lucene99HnswVectorsWriter&);
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
