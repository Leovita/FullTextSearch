#ifndef org_apache_lucene_index_IndexableFieldType_H
#define org_apache_lucene_index_IndexableFieldType_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class DocValuesSkipIndexType;
        class DocValuesType;
        class VectorSimilarityFunction;
        class VectorEncoding;
        class IndexOptions;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexableFieldType : public ::java::lang::Object {
         public:
          enum {
            mid_docValuesSkipIndexType_105258e940575563,
            mid_docValuesType_0ce8ab755e2afd1f,
            mid_getAttributes_f125f26c07a7bec8,
            mid_indexOptions_0d9f22852de1dba6,
            mid_omitNorms_947277eca0748c4e,
            mid_pointDimensionCount_20fbf7565993c3d7,
            mid_pointIndexDimensionCount_20fbf7565993c3d7,
            mid_pointNumBytes_20fbf7565993c3d7,
            mid_storeTermVectorOffsets_947277eca0748c4e,
            mid_storeTermVectorPayloads_947277eca0748c4e,
            mid_storeTermVectorPositions_947277eca0748c4e,
            mid_storeTermVectors_947277eca0748c4e,
            mid_stored_947277eca0748c4e,
            mid_tokenized_947277eca0748c4e,
            mid_vectorDimension_20fbf7565993c3d7,
            mid_vectorEncoding_89ee194538cd6149,
            mid_vectorSimilarityFunction_ab08f5c5789ece7c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexableFieldType(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexableFieldType(const IndexableFieldType& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::DocValuesSkipIndexType docValuesSkipIndexType() const;
          ::org::apache::lucene::index::DocValuesType docValuesType() const;
          ::java::util::Map getAttributes() const;
          ::org::apache::lucene::index::IndexOptions indexOptions() const;
          jboolean omitNorms() const;
          jint pointDimensionCount() const;
          jint pointIndexDimensionCount() const;
          jint pointNumBytes() const;
          jboolean storeTermVectorOffsets() const;
          jboolean storeTermVectorPayloads() const;
          jboolean storeTermVectorPositions() const;
          jboolean storeTermVectors() const;
          jboolean stored() const;
          jboolean tokenized() const;
          jint vectorDimension() const;
          ::org::apache::lucene::index::VectorEncoding vectorEncoding() const;
          ::org::apache::lucene::index::VectorSimilarityFunction vectorSimilarityFunction() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(IndexableFieldType);
        extern PyTypeObject *PY_TYPE(IndexableFieldType);

        class t_IndexableFieldType {
        public:
          PyObject_HEAD
          IndexableFieldType object;
          static PyObject *wrap_Object(const IndexableFieldType&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
