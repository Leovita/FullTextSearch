#ifndef org_apache_lucene_sandbox_codecs_quantization_SampleReader_H
#define org_apache_lucene_sandbox_codecs_quantization_SampleReader_H

#include "org/apache/lucene/index/FloatVectorValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace codecs {
        namespace lucene95 {
          class HasIndexSlice;
        }
      }
      namespace store {
        class IndexInput;
      }
      namespace sandbox {
        namespace codecs {
          namespace quantization {
            class SampleReader;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
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
      namespace sandbox {
        namespace codecs {
          namespace quantization {

            class SampleReader : public ::org::apache::lucene::index::FloatVectorValues {
             public:
              enum {
                mid_copy_04d6751cd1004caf,
                mid_createSampleReader_418be144d1a965d2,
                mid_dimension_bd89ce15dad49192,
                mid_getAcceptOrds_952ad757d5b0c3b2,
                mid_getSlice_1107977def75ee66,
                mid_getVectorByteLength_bd89ce15dad49192,
                mid_ordToDoc_a3904e10f5bb9437,
                mid_reservoirSample_145659a0ef21f21f,
                mid_reservoirSampleFromArray_ee01677ce2f5bca6,
                mid_size_bd89ce15dad49192,
                mid_vectorValue_4392f4b0f19a3288,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SampleReader(jobject obj) : ::org::apache::lucene::index::FloatVectorValues(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SampleReader(const SampleReader& obj) : ::org::apache::lucene::index::FloatVectorValues(obj) {}

              ::org::apache::lucene::index::FloatVectorValues copy() const;
              static SampleReader createSampleReader(const ::org::apache::lucene::index::FloatVectorValues &, jint, jlong);
              jint dimension() const;
              ::org::apache::lucene::util::Bits getAcceptOrds(const ::org::apache::lucene::util::Bits &) const;
              ::org::apache::lucene::store::IndexInput getSlice() const;
              jint getVectorByteLength() const;
              jint ordToDoc(jint) const;
              static JArray< jint > reservoirSample(jint, jint, jlong);
              static JArray< jint > reservoirSampleFromArray(const JArray< jint > &, jint, jlong);
              jint size() const;
              JArray< jfloat > vectorValue(jint) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace codecs {
          namespace quantization {
            extern PyType_Def PY_TYPE_DEF(SampleReader);
            extern PyTypeObject *PY_TYPE(SampleReader);

            class t_SampleReader {
            public:
              PyObject_HEAD
              SampleReader object;
              static PyObject *wrap_Object(const SampleReader&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
