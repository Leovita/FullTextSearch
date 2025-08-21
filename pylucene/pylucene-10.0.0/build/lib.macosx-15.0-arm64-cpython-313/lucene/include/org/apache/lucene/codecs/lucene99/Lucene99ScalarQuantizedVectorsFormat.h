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
      namespace codecs {
        namespace hnsw {
          class FlatVectorsReader;
          class FlatVectorsWriter;
        }
      }
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
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
              mid_init$_3720c61b0679eb3e,
              mid_init$_a3fb75cff3fc2dfc,
              mid_calculateDefaultConfidenceInterval_29cfa01aaad92564,
              mid_fieldsReader_b357f440421570ce,
              mid_fieldsWriter_2ec0cddb641511c1,
              mid_toString_09a7afff1868fc5e,
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
