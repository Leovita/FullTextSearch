#ifndef org_apache_lucene_backward_codecs_lucene92_Lucene92HnswVectorsFormat_H
#define org_apache_lucene_backward_codecs_lucene92_Lucene92HnswVectorsFormat_H

#include "org/apache/lucene/codecs/KnnVectorsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
      namespace codecs {
        class KnnVectorsWriter;
        class KnnVectorsReader;
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
      namespace backward_codecs {
        namespace lucene92 {

          class Lucene92HnswVectorsFormat : public ::org::apache::lucene::codecs::KnnVectorsFormat {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_645c25455f5b9b1c,
              mid_fieldsReader_e6e9752d6bb75a3c,
              mid_fieldsWriter_cb1e4b426784850b,
              mid_getMaxDimensions_fa2a6f298bd618ab,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene92HnswVectorsFormat(jobject obj) : ::org::apache::lucene::codecs::KnnVectorsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene92HnswVectorsFormat(const Lucene92HnswVectorsFormat& obj) : ::org::apache::lucene::codecs::KnnVectorsFormat(obj) {}

            static jint DEFAULT_BEAM_WIDTH;
            static jint DEFAULT_MAX_CONN;

            Lucene92HnswVectorsFormat();
            Lucene92HnswVectorsFormat(jint, jint);

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
        namespace lucene92 {
          extern PyType_Def PY_TYPE_DEF(Lucene92HnswVectorsFormat);
          extern PyTypeObject *PY_TYPE(Lucene92HnswVectorsFormat);

          class t_Lucene92HnswVectorsFormat {
          public:
            PyObject_HEAD
            Lucene92HnswVectorsFormat object;
            static PyObject *wrap_Object(const Lucene92HnswVectorsFormat&);
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
