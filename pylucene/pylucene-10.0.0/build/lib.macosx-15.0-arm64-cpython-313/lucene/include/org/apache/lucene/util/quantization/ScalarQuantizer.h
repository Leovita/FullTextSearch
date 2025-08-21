#ifndef org_apache_lucene_util_quantization_ScalarQuantizer_H
#define org_apache_lucene_util_quantization_ScalarQuantizer_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace quantization {
          class ScalarQuantizer;
        }
      }
      namespace index {
        class VectorSimilarityFunction;
        class FloatVectorValues;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace quantization {

          class ScalarQuantizer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_23c54bef03d1f59d,
              mid_fromVectors_9f3ac4b4fd60645b,
              mid_fromVectorsAutoInterval_ea77a862cccf00d5,
              mid_getBits_847674f430f49e4c,
              mid_getConstantMultiplier_9b6c3480dac00edf,
              mid_getLowerQuantile_9b6c3480dac00edf,
              mid_getUpperQuantile_9b6c3480dac00edf,
              mid_quantize_30821b217fbc2178,
              mid_recalculateCorrectiveOffset_b4b69bba84425180,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ScalarQuantizer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ScalarQuantizer(const ScalarQuantizer& obj) : ::java::lang::Object(obj) {}

            static jint SCALAR_QUANTIZATION_SAMPLE_SIZE;

            ScalarQuantizer(jfloat, jfloat, jbyte);

            static ScalarQuantizer fromVectors(const ::org::apache::lucene::index::FloatVectorValues &, jfloat, jint, jbyte);
            static ScalarQuantizer fromVectorsAutoInterval(const ::org::apache::lucene::index::FloatVectorValues &, const ::org::apache::lucene::index::VectorSimilarityFunction &, jint, jbyte);
            jbyte getBits() const;
            jfloat getConstantMultiplier() const;
            jfloat getLowerQuantile() const;
            jfloat getUpperQuantile() const;
            jfloat quantize(const JArray< jfloat > &, const JArray< jbyte > &, const ::org::apache::lucene::index::VectorSimilarityFunction &) const;
            jfloat recalculateCorrectiveOffset(const JArray< jbyte > &, const ScalarQuantizer &, const ::org::apache::lucene::index::VectorSimilarityFunction &) const;
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
      namespace util {
        namespace quantization {
          extern PyType_Def PY_TYPE_DEF(ScalarQuantizer);
          extern PyTypeObject *PY_TYPE(ScalarQuantizer);

          class t_ScalarQuantizer {
          public:
            PyObject_HEAD
            ScalarQuantizer object;
            static PyObject *wrap_Object(const ScalarQuantizer&);
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
