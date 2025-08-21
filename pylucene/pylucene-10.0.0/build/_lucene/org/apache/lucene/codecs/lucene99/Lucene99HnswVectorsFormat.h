#ifndef org_apache_lucene_codecs_lucene99_Lucene99HnswVectorsFormat_H
#define org_apache_lucene_codecs_lucene99_Lucene99HnswVectorsFormat_H

#include "org/apache/lucene/codecs/KnnVectorsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class KnnVectorsReader;
        class KnnVectorsWriter;
      }
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
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
  namespace util {
    namespace concurrent {
      class ExecutorService;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene99 {

          class Lucene99HnswVectorsFormat : public ::org::apache::lucene::codecs::KnnVectorsFormat {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_e13cff512ebda969,
              mid_init$_097d1f1c9e054ec4,
              mid_fieldsReader_804fb3f7a48fdbd5,
              mid_fieldsWriter_9d6535131b264391,
              mid_getMaxDimensions_3f230d713d7fd2b0,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene99HnswVectorsFormat(jobject obj) : ::org::apache::lucene::codecs::KnnVectorsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene99HnswVectorsFormat(const Lucene99HnswVectorsFormat& obj) : ::org::apache::lucene::codecs::KnnVectorsFormat(obj) {}

            static jint DEFAULT_BEAM_WIDTH;
            static jint DEFAULT_MAX_CONN;
            static jint DEFAULT_NUM_MERGE_WORKER;
            static jint MAXIMUM_BEAM_WIDTH;
            static jint MAXIMUM_MAX_CONN;
            static jint VERSION_CURRENT;
            static jint VERSION_START;

            Lucene99HnswVectorsFormat();
            Lucene99HnswVectorsFormat(jint, jint);
            Lucene99HnswVectorsFormat(jint, jint, jint, const ::java::util::concurrent::ExecutorService &);

            ::org::apache::lucene::codecs::KnnVectorsReader fieldsReader(const ::org::apache::lucene::index::SegmentReadState &) const;
            ::org::apache::lucene::codecs::KnnVectorsWriter fieldsWriter(const ::org::apache::lucene::index::SegmentWriteState &) const;
            jint getMaxDimensions(const ::java::lang::String &) const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(Lucene99HnswVectorsFormat);
          extern PyTypeObject *PY_TYPE(Lucene99HnswVectorsFormat);

          class t_Lucene99HnswVectorsFormat {
          public:
            PyObject_HEAD
            Lucene99HnswVectorsFormat object;
            static PyObject *wrap_Object(const Lucene99HnswVectorsFormat&);
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
