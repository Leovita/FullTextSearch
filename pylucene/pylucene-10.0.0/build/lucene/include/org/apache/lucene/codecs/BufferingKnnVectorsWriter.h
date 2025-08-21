#ifndef org_apache_lucene_codecs_BufferingKnnVectorsWriter_H
#define org_apache_lucene_codecs_BufferingKnnVectorsWriter_H

#include "org/apache/lucene/codecs/KnnVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class FieldInfo;
        class Sorter$DocMap;
      }
      namespace codecs {
        class KnnFieldVectorsWriter;
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

        class BufferingKnnVectorsWriter : public ::org::apache::lucene::codecs::KnnVectorsWriter {
         public:
          enum {
            mid_addField_be5be518afaa3c4d,
            mid_flush_43b4ee6199cecfbf,
            mid_mergeOneField_12bd7baeb6b4bf04,
            mid_ramBytesUsed_16939d9d0a9a9721,
            mid_writeField_9aebc5bb68e46cf6,
            mid_writeField_21ef140f0025c46f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BufferingKnnVectorsWriter(jobject obj) : ::org::apache::lucene::codecs::KnnVectorsWriter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BufferingKnnVectorsWriter(const BufferingKnnVectorsWriter& obj) : ::org::apache::lucene::codecs::KnnVectorsWriter(obj) {}

          ::org::apache::lucene::codecs::KnnFieldVectorsWriter addField(const ::org::apache::lucene::index::FieldInfo &) const;
          void flush(jint, const ::org::apache::lucene::index::Sorter$DocMap &) const;
          void mergeOneField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
          jlong ramBytesUsed() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(BufferingKnnVectorsWriter);
        extern PyTypeObject *PY_TYPE(BufferingKnnVectorsWriter);

        class t_BufferingKnnVectorsWriter {
        public:
          PyObject_HEAD
          BufferingKnnVectorsWriter object;
          static PyObject *wrap_Object(const BufferingKnnVectorsWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
