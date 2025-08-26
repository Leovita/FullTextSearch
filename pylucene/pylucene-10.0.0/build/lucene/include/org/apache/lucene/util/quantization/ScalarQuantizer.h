#ifndef org_apache_lucene_util_quantization_ScalarQuantizer_H
#define org_apache_lucene_util_quantization_ScalarQuantizer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
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
        class FloatVectorValues;
        class VectorSimilarityFunction;
      }
      namespace util {
        namespace quantization {
          class ScalarQuantizer;
        }
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
              mid_init$_993ae40fcfe24a3f,
              mid_fromVectors_1912e0ec418e6419,
              mid_fromVectorsAutoInterval_d184c24d8d5da081,
              mid_getBits_1456044a01a5c9bf,
              mid_getConstantMultiplier_8b62236f0e4d0dbc,
              mid_getLowerQuantile_8b62236f0e4d0dbc,
              mid_getUpperQuantile_8b62236f0e4d0dbc,
              mid_quantize_fb4b22adf3ef2a16,
              mid_recalculateCorrectiveOffset_4134804891da10a3,
              mid_toString_e7df854526d67fa3,
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
