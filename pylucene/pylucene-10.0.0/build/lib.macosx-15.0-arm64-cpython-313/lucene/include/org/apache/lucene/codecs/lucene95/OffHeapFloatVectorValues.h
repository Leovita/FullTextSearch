#ifndef org_apache_lucene_codecs_lucene95_OffHeapFloatVectorValues_H
#define org_apache_lucene_codecs_lucene95_OffHeapFloatVectorValues_H

#include "org/apache/lucene/index/FloatVectorValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace hnsw {
          class FlatVectorsScorer;
        }
        namespace lucene95 {
          class HasIndexSlice;
          class OrdToDocDISIReaderConfiguration;
          class OffHeapFloatVectorValues;
        }
      }
      namespace index {
        class VectorSimilarityFunction;
        class VectorEncoding;
      }
      namespace store {
        class IndexInput;
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
      namespace codecs {
        namespace lucene95 {

          class OffHeapFloatVectorValues : public ::org::apache::lucene::index::FloatVectorValues {
           public:
            enum {
              mid_dimension_20fbf7565993c3d7,
              mid_getSlice_69ff96f993716366,
              mid_load_f66d7ff0a03bc1fe,
              mid_size_20fbf7565993c3d7,
              mid_vectorValue_837967dda86e7ad8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffHeapFloatVectorValues(jobject obj) : ::org::apache::lucene::index::FloatVectorValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffHeapFloatVectorValues(const OffHeapFloatVectorValues& obj) : ::org::apache::lucene::index::FloatVectorValues(obj) {}

            jint dimension() const;
            ::org::apache::lucene::store::IndexInput getSlice() const;
            static OffHeapFloatVectorValues load(const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::codecs::hnsw::FlatVectorsScorer &, const ::org::apache::lucene::codecs::lucene95::OrdToDocDISIReaderConfiguration &, const ::org::apache::lucene::index::VectorEncoding &, jint, jlong, jlong, const ::org::apache::lucene::store::IndexInput &);
            jint size() const;
            JArray< jfloat > vectorValue(jint) const;
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
        namespace lucene95 {
          extern PyType_Def PY_TYPE_DEF(OffHeapFloatVectorValues);
          extern PyTypeObject *PY_TYPE(OffHeapFloatVectorValues);

          class t_OffHeapFloatVectorValues {
          public:
            PyObject_HEAD
            OffHeapFloatVectorValues object;
            static PyObject *wrap_Object(const OffHeapFloatVectorValues&);
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
