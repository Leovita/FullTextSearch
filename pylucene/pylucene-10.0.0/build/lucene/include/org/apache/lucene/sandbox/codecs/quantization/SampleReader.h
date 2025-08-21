#ifndef org_apache_lucene_sandbox_codecs_quantization_SampleReader_H
#define org_apache_lucene_sandbox_codecs_quantization_SampleReader_H

#include "org/apache/lucene/index/FloatVectorValues.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
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
                mid_copy_f06cbfc19b53100d,
                mid_createSampleReader_1992bb6c66fc3d3d,
                mid_dimension_20fbf7565993c3d7,
                mid_getAcceptOrds_372c76d90ab3ad4a,
                mid_getSlice_69ff96f993716366,
                mid_getVectorByteLength_20fbf7565993c3d7,
                mid_ordToDoc_3c9bba330f083871,
                mid_reservoirSample_88e4637d699e594f,
                mid_reservoirSampleFromArray_ea8d5259a82a03de,
                mid_size_20fbf7565993c3d7,
                mid_vectorValue_837967dda86e7ad8,
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
