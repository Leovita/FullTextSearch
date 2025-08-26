#ifndef org_apache_lucene_codecs_lucene95_OffHeapByteVectorValues_H
#define org_apache_lucene_codecs_lucene95_OffHeapByteVectorValues_H

#include "org/apache/lucene/index/ByteVectorValues.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class VectorEncoding;
        class VectorSimilarityFunction;
      }
      namespace codecs {
        namespace lucene95 {
          class HasIndexSlice;
          class OffHeapByteVectorValues;
          class OrdToDocDISIReaderConfiguration;
        }
        namespace hnsw {
          class FlatVectorsScorer;
        }
      }
      namespace store {
        class IndexInput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene95 {

          class OffHeapByteVectorValues : public ::org::apache::lucene::index::ByteVectorValues {
           public:
            enum {
              mid_dimension_bd89ce15dad49192,
              mid_getSlice_1107977def75ee66,
              mid_load_c0f90263efdbe372,
              mid_size_bd89ce15dad49192,
              mid_vectorValue_d94c1f1d0c66928c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffHeapByteVectorValues(jobject obj) : ::org::apache::lucene::index::ByteVectorValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffHeapByteVectorValues(const OffHeapByteVectorValues& obj) : ::org::apache::lucene::index::ByteVectorValues(obj) {}

            jint dimension() const;
            ::org::apache::lucene::store::IndexInput getSlice() const;
            static OffHeapByteVectorValues load(const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::codecs::hnsw::FlatVectorsScorer &, const ::org::apache::lucene::codecs::lucene95::OrdToDocDISIReaderConfiguration &, const ::org::apache::lucene::index::VectorEncoding &, jint, jlong, jlong, const ::org::apache::lucene::store::IndexInput &);
            jint size() const;
            JArray< jbyte > vectorValue(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(OffHeapByteVectorValues);
          extern PyTypeObject *PY_TYPE(OffHeapByteVectorValues);

          class t_OffHeapByteVectorValues {
          public:
            PyObject_HEAD
            OffHeapByteVectorValues object;
            static PyObject *wrap_Object(const OffHeapByteVectorValues&);
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
