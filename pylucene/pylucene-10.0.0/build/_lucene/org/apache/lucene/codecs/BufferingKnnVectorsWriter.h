#ifndef org_apache_lucene_codecs_BufferingKnnVectorsWriter_H
#define org_apache_lucene_codecs_BufferingKnnVectorsWriter_H

#include "org/apache/lucene/codecs/KnnVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class Sorter$DocMap;
        class FieldInfo;
      }
      namespace codecs {
        class KnnFieldVectorsWriter;
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

        class BufferingKnnVectorsWriter : public ::org::apache::lucene::codecs::KnnVectorsWriter {
         public:
          enum {
            mid_addField_745312302c5f11e8,
            mid_flush_fc9730fbac8271d5,
            mid_mergeOneField_6efd9d341cba2a34,
            mid_ramBytesUsed_0f176418e3e16541,
            mid_writeField_74438e6356e219a1,
            mid_writeField_e0b887c5025e54b7,
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
