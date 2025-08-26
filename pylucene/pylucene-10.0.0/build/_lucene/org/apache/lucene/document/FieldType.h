#ifndef org_apache_lucene_document_FieldType_H
#define org_apache_lucene_document_FieldType_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class VectorEncoding;
        class VectorSimilarityFunction;
        class IndexOptions;
        class DocValuesType;
        class DocValuesSkipIndexType;
        class IndexableFieldType;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class FieldType : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_e51ea12399bd1491,
            mid_docValuesSkipIndexType_97cc35d5a06c6328,
            mid_docValuesType_632981fa09914ed1,
            mid_equals_00d17418847797d4,
            mid_freeze_e7bdbe105ce1bafb,
            mid_getAttributes_5004bdf19ed33453,
            mid_hashCode_bd89ce15dad49192,
            mid_indexOptions_898aff4631b0024a,
            mid_omitNorms_9aa4f33e82ea333f,
            mid_pointDimensionCount_bd89ce15dad49192,
            mid_pointIndexDimensionCount_bd89ce15dad49192,
            mid_pointNumBytes_bd89ce15dad49192,
            mid_putAttribute_3bdb499546f6bd60,
            mid_setDimensions_645c25455f5b9b1c,
            mid_setDimensions_eee637a6cebc299b,
            mid_setDocValuesSkipIndexType_93ca4e40aa92693f,
            mid_setDocValuesType_e61a48e17304d135,
            mid_setIndexOptions_9963edb5d3f3ba8a,
            mid_setOmitNorms_f5dd97eebf6a215a,
            mid_setStoreTermVectorOffsets_f5dd97eebf6a215a,
            mid_setStoreTermVectorPayloads_f5dd97eebf6a215a,
            mid_setStoreTermVectorPositions_f5dd97eebf6a215a,
            mid_setStoreTermVectors_f5dd97eebf6a215a,
            mid_setStored_f5dd97eebf6a215a,
            mid_setTokenized_f5dd97eebf6a215a,
            mid_setVectorAttributes_6e114979f9883564,
            mid_storeTermVectorOffsets_9aa4f33e82ea333f,
            mid_storeTermVectorPayloads_9aa4f33e82ea333f,
            mid_storeTermVectorPositions_9aa4f33e82ea333f,
            mid_storeTermVectors_9aa4f33e82ea333f,
            mid_stored_9aa4f33e82ea333f,
            mid_toString_e7df854526d67fa3,
            mid_tokenized_9aa4f33e82ea333f,
            mid_vectorDimension_bd89ce15dad49192,
            mid_vectorEncoding_667892793043e3ed,
            mid_vectorSimilarityFunction_0f05516cfc8fbfdc,
            mid_checkIfFrozen_e7bdbe105ce1bafb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldType(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldType(const FieldType& obj) : ::java::lang::Object(obj) {}

          FieldType();
          FieldType(const ::org::apache::lucene::index::IndexableFieldType &);

          ::org::apache::lucene::index::DocValuesSkipIndexType docValuesSkipIndexType() const;
          ::org::apache::lucene::index::DocValuesType docValuesType() const;
          jboolean equals(const ::java::lang::Object &) const;
          void freeze() const;
          ::java::util::Map getAttributes() const;
          jint hashCode() const;
          ::org::apache::lucene::index::IndexOptions indexOptions() const;
          jboolean omitNorms() const;
          jint pointDimensionCount() const;
          jint pointIndexDimensionCount() const;
          jint pointNumBytes() const;
          ::java::lang::String putAttribute(const ::java::lang::String &, const ::java::lang::String &) const;
          void setDimensions(jint, jint) const;
          void setDimensions(jint, jint, jint) const;
          void setDocValuesSkipIndexType(const ::org::apache::lucene::index::DocValuesSkipIndexType &) const;
          void setDocValuesType(const ::org::apache::lucene::index::DocValuesType &) const;
          void setIndexOptions(const ::org::apache::lucene::index::IndexOptions &) const;
          void setOmitNorms(jboolean) const;
          void setStoreTermVectorOffsets(jboolean) const;
          void setStoreTermVectorPayloads(jboolean) const;
          void setStoreTermVectorPositions(jboolean) const;
          void setStoreTermVectors(jboolean) const;
          void setStored(jboolean) const;
          void setTokenized(jboolean) const;
          void setVectorAttributes(jint, const ::org::apache::lucene::index::VectorEncoding &, const ::org::apache::lucene::index::VectorSimilarityFunction &) const;
          jboolean storeTermVectorOffsets() const;
          jboolean storeTermVectorPayloads() const;
          jboolean storeTermVectorPositions() const;
          jboolean storeTermVectors() const;
          jboolean stored() const;
          ::java::lang::String toString() const;
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
      namespace document {
        extern PyType_Def PY_TYPE_DEF(FieldType);
        extern PyTypeObject *PY_TYPE(FieldType);

        class t_FieldType {
        public:
          PyObject_HEAD
          FieldType object;
          static PyObject *wrap_Object(const FieldType&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
