#ifndef org_apache_lucene_codecs_lucene99_Lucene99ScalarQuantizedVectorsFormat_H
#define org_apache_lucene_codecs_lucene99_Lucene99ScalarQuantizedVectorsFormat_H

#include "org/apache/lucene/codecs/hnsw/FlatVectorsFormat.h"

namespace java {
  namespace lang {
    class Float;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
      namespace codecs {
        namespace hnsw {
          class FlatVectorsReader;
          class FlatVectorsWriter;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene99 {

          class Lucene99ScalarQuantizedVectorsFormat : public ::org::apache::lucene::codecs::hnsw::FlatVectorsFormat {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_cfc70061bb10a9fe,
              mid_calculateDefaultConfidenceInterval_5873a23b935a9d49,
              mid_fieldsReader_d1a34b66ea06bc3b,
              mid_fieldsWriter_c8010db3218dc643,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene99ScalarQuantizedVectorsFormat(jobject obj) : ::org::apache::lucene::codecs::hnsw::FlatVectorsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene99ScalarQuantizedVectorsFormat(const Lucene99ScalarQuantizedVectorsFormat& obj) : ::org::apache::lucene::codecs::hnsw::FlatVectorsFormat(obj) {}

            static jfloat DYNAMIC_CONFIDENCE_INTERVAL;
            static ::java::lang::String *NAME;
            static ::java::lang::String *QUANTIZED_VECTOR_COMPONENT;

            Lucene99ScalarQuantizedVectorsFormat();
            Lucene99ScalarQuantizedVectorsFormat(const ::java::lang::Float &, jint, jboolean);

            static jfloat calculateDefaultConfidenceInterval(jint);
            ::org::apache::lucene::codecs::hnsw::FlatVectorsReader fieldsReader(const ::org::apache::lucene::index::SegmentReadState &) const;
            ::org::apache::lucene::codecs::hnsw::FlatVectorsWriter fieldsWriter(const ::org::apache::lucene::index::SegmentWriteState &) const;
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
          extern PyType_Def PY_TYPE_DEF(Lucene99ScalarQuantizedVectorsFormat);
          extern PyTypeObject *PY_TYPE(Lucene99ScalarQuantizedVectorsFormat);

          class t_Lucene99ScalarQuantizedVectorsFormat {
          public:
            PyObject_HEAD
            Lucene99ScalarQuantizedVectorsFormat object;
            static PyObject *wrap_Object(const Lucene99ScalarQuantizedVectorsFormat&);
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
