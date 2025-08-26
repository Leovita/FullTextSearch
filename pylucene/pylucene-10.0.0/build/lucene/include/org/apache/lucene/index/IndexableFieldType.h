#ifndef org_apache_lucene_index_IndexableFieldType_H
#define org_apache_lucene_index_IndexableFieldType_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class VectorEncoding;
        class VectorSimilarityFunction;
        class IndexOptions;
        class DocValuesType;
        class DocValuesSkipIndexType;
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
            mid_docValuesSkipIndexType_97cc35d5a06c6328,
            mid_docValuesType_632981fa09914ed1,
            mid_getAttributes_5004bdf19ed33453,
            mid_indexOptions_898aff4631b0024a,
            mid_omitNorms_9aa4f33e82ea333f,
            mid_pointDimensionCount_bd89ce15dad49192,
            mid_pointIndexDimensionCount_bd89ce15dad49192,
            mid_pointNumBytes_bd89ce15dad49192,
            mid_storeTermVectorOffsets_9aa4f33e82ea333f,
            mid_storeTermVectorPayloads_9aa4f33e82ea333f,
            mid_storeTermVectorPositions_9aa4f33e82ea333f,
            mid_storeTermVectors_9aa4f33e82ea333f,
            mid_stored_9aa4f33e82ea333f,
            mid_tokenized_9aa4f33e82ea333f,
            mid_vectorDimension_bd89ce15dad49192,
            mid_vectorEncoding_667892793043e3ed,
            mid_vectorSimilarityFunction_0f05516cfc8fbfdc,
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
