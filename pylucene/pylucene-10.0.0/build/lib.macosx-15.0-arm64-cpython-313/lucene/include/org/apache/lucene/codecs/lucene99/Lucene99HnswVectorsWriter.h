#ifndef org_apache_lucene_codecs_lucene99_Lucene99HnswVectorsWriter_H
#define org_apache_lucene_codecs_lucene99_Lucene99HnswVectorsWriter_H

#include "org/apache/lucene/codecs/KnnVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class FieldInfo;
        class Sorter$DocMap;
        class SegmentWriteState;
      }
      namespace search {
        class TaskExecutor;
      }
      namespace codecs {
        class KnnFieldVectorsWriter;
        namespace hnsw {
          class FlatVectorsWriter;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
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
              mid_init$_13936318a8eda841,
              mid_addField_be5be518afaa3c4d,
              mid_close_3720c61b0679eb3e,
              mid_finish_3720c61b0679eb3e,
              mid_flush_43b4ee6199cecfbf,
              mid_mergeOneField_12bd7baeb6b4bf04,
              mid_ramBytesUsed_16939d9d0a9a9721,
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
