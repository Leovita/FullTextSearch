#ifndef org_apache_lucene_backward_codecs_lucene94_Lucene94HnswVectorsFormat_H
#define org_apache_lucene_backward_codecs_lucene94_Lucene94HnswVectorsFormat_H

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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene94 {

          class Lucene94HnswVectorsFormat : public ::org::apache::lucene::codecs::KnnVectorsFormat {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_e13cff512ebda969,
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

            explicit Lucene94HnswVectorsFormat(jobject obj) : ::org::apache::lucene::codecs::KnnVectorsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene94HnswVectorsFormat(const Lucene94HnswVectorsFormat& obj) : ::org::apache::lucene::codecs::KnnVectorsFormat(obj) {}

            static jint DEFAULT_BEAM_WIDTH;
            static jint DEFAULT_MAX_CONN;

            Lucene94HnswVectorsFormat();
            Lucene94HnswVectorsFormat(jint, jint);

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
      namespace backward_codecs {
        namespace lucene94 {
          extern PyType_Def PY_TYPE_DEF(Lucene94HnswVectorsFormat);
          extern PyTypeObject *PY_TYPE(Lucene94HnswVectorsFormat);

          class t_Lucene94HnswVectorsFormat {
          public:
            PyObject_HEAD
            Lucene94HnswVectorsFormat object;
            static PyObject *wrap_Object(const Lucene94HnswVectorsFormat&);
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
